// Copyright 2016 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef FPDFSDK_CPDFSDK_PAGEVIEW_H_
#define FPDFSDK_CPDFSDK_PAGEVIEW_H_

#include <memory>
#include <vector>

#include "core/fpdfapi/page/cpdf_page.h"
#include "core/fxcrt/fx_system.h"
#include "core/fxcrt/unowned_ptr.h"
#include "fpdfsdk/cpdfsdk_annot.h"
#include "fpdfsdk/cpdfsdk_annothandlermgr.h"

class CFX_RenderDevice;
class CPDF_AnnotList;
class CPDF_RenderOptions;

class CPDFSDK_PageView final : public CPDF_Page::View {
 public:
  CPDFSDK_PageView(CPDFSDK_FormFillEnvironment* pFormFillEnv, IPDF_Page* page);
  ~CPDFSDK_PageView();

  void PageView_OnDraw(CFX_RenderDevice* pDevice,
                       CFX_Matrix* pUser2Device,
                       CPDF_RenderOptions* pOptions,
                       const FX_RECT& pClip);

  void LoadFXAnnots();
  CPDFSDK_Annot* GetFocusAnnot();
  bool IsValidAnnot(const CPDF_Annot* p) const;
  bool IsValidSDKAnnot(const CPDFSDK_Annot* p) const;

  const std::vector<CPDFSDK_Annot*>& GetAnnotList() const {
    return m_SDKAnnotArray;
  }
  CPDFSDK_Annot* GetAnnotByDict(CPDF_Dictionary* pDict);

#ifdef PDF_ENABLE_XFA
  bool DeleteAnnot(CPDFSDK_Annot* pAnnot);
  CPDFSDK_Annot* AddAnnot(CXFA_FFWidget* pPDFAnnot);
  CPDFSDK_Annot* GetAnnotByXFAWidget(CXFA_FFWidget* hWidget);

  CPDFXFA_Page* GetPDFXFAPage() { return ToXFAPage(m_page); }
#endif  // PDF_ENABLE_XFA

  CPDF_Page* GetPDFPage() const;
  CPDF_Document* GetPDFDocument();
  CPDFSDK_FormFillEnvironment* GetFormFillEnv() const {
    return m_pFormFillEnv.Get();
  }

  WideString GetFocusedFormText();
  WideString GetSelectedText();
  void ReplaceSelection(const WideString& text);

  bool CanUndo();
  bool CanRedo();
  bool Undo();
  bool Redo();

  bool OnFocus(const CFX_PointF& point, uint32_t nFlag);
  bool OnLButtonDown(const CFX_PointF& point, uint32_t nFlag);
  bool OnLButtonUp(const CFX_PointF& point, uint32_t nFlag);
#ifdef PDF_ENABLE_XFA
  bool OnRButtonDown(const CFX_PointF& point, uint32_t nFlag);
  bool OnRButtonUp(const CFX_PointF& point, uint32_t nFlag);
#endif  // PDF_ENABLE_XFA
  bool OnChar(int nChar, uint32_t nFlag);
  bool OnKeyDown(int nKeyCode, int nFlag);
  bool OnKeyUp(int nKeyCode, int nFlag);

  bool OnMouseMove(const CFX_PointF& point, int nFlag);
  bool OnMouseWheel(double deltaX,
                    double deltaY,
                    const CFX_PointF& point,
                    int nFlag);

  void GetCurrentMatrix(CFX_Matrix& matrix) { matrix = m_curMatrix; }
  void UpdateRects(const std::vector<CFX_FloatRect>& rects);
  void UpdateView(CPDFSDK_Annot* pAnnot);

  int GetPageIndex() const;

  void SetValid(bool bValid) { m_bValid = bValid; }
  bool IsValid() { return m_bValid; }

  bool IsLocked() { return m_bLocked; }

  void SetBeingDestroyed() { m_bBeingDestroyed = true; }
  bool IsBeingDestroyed() const { return m_bBeingDestroyed; }

#ifndef PDF_ENABLE_XFA
  void TakePageOwnership() { m_pOwnsPage.Reset(ToPDFPage(m_page)); }
#endif  // PDF_ENABLE_XFA

 private:
  CPDFSDK_Annot* GetFXAnnotAtPoint(const CFX_PointF& point);
  CPDFSDK_Annot* GetFXWidgetAtPoint(const CFX_PointF& point);

  int GetPageIndexForStaticPDF() const;

  void EnterWidget(CPDFSDK_AnnotHandlerMgr* pAnnotHandlerMgr,
                   CPDFSDK_Annot::ObservedPtr* pAnnot,
                   uint32_t nFlag);
  void ExitWidget(CPDFSDK_AnnotHandlerMgr* pAnnotHandlerMgr,
                  bool callExitCallback,
                  uint32_t nFlag);

  CFX_Matrix m_curMatrix;
  IPDF_Page* const m_page;
  std::unique_ptr<CPDF_AnnotList> m_pAnnotList;
  std::vector<CPDFSDK_Annot*> m_SDKAnnotArray;
  UnownedPtr<CPDFSDK_FormFillEnvironment> const m_pFormFillEnv;
  CPDFSDK_Annot::ObservedPtr m_pCaptureWidget;
#ifndef PDF_ENABLE_XFA
  RetainPtr<CPDF_Page> m_pOwnsPage;
#endif  // PDF_ENABLE_XFA
  bool m_bOnWidget = false;
  bool m_bValid = false;
  bool m_bLocked = false;
  bool m_bBeingDestroyed = false;
};

#endif  // FPDFSDK_CPDFSDK_PAGEVIEW_H_
