// Copyright 2014 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef XFA_FXFA_PARSER_XFA_SCRIPT_DATAWINDOW_H_
#define XFA_FXFA_PARSER_XFA_SCRIPT_DATAWINDOW_H_

#include "xfa/fxfa/parser/xfa_object.h"
#include "xfa/fxjse/cfxjse_arguments.h"

class CScript_DataWindow : public CXFA_OrdinaryObject {
 public:
  CScript_DataWindow(CXFA_Document* pDocument);
  virtual ~CScript_DataWindow();
  void Script_DataWindow_MoveCurrentRecord(CFXJSE_Arguments* pArguments);
  void Script_DataWindow_Record(CFXJSE_Arguments* pArguments);
  void Script_DataWindow_GotoRecord(CFXJSE_Arguments* pArguments);
  void Script_DataWindow_IsRecordGroup(CFXJSE_Arguments* pArguments);
  void Script_DataWindow_RecordsBefore(FXJSE_HVALUE hValue,
                                       FX_BOOL bSetting,
                                       XFA_ATTRIBUTE eAttribute);
  void Script_DataWindow_CurrentRecordNumber(FXJSE_HVALUE hValue,
                                             FX_BOOL bSetting,
                                             XFA_ATTRIBUTE eAttribute);
  void Script_DataWindow_RecordsAfter(FXJSE_HVALUE hValue,
                                      FX_BOOL bSetting,
                                      XFA_ATTRIBUTE eAttribute);
  void Script_DataWindow_IsDefined(FXJSE_HVALUE hValue,
                                   FX_BOOL bSetting,
                                   XFA_ATTRIBUTE eAttribute);
};

#endif  // XFA_FXFA_PARSER_XFA_SCRIPT_DATAWINDOW_H_
