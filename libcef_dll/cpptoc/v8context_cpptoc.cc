// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/v8context_cpptoc.h"
#include "libcef_dll/cpptoc/v8value_cpptoc.h"


// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_v8context_t* cef_v8context_get_current_context() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefV8Context> _retval = CefV8Context::GetCurrentContext();

  // Return type: refptr_same
  return CefV8ContextCppToC::Wrap(_retval);
}

CEF_EXPORT cef_v8context_t* cef_v8context_get_entered_context() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefV8Context> _retval = CefV8Context::GetEnteredContext();

  // Return type: refptr_same
  return CefV8ContextCppToC::Wrap(_retval);
}

CEF_EXPORT int cef_v8context_in_context() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  bool _retval = CefV8Context::InContext();

  // Return type: bool
  return _retval;
}


// MEMBER FUNCTIONS - Body may be edited by hand.

cef_browser_t* CEF_CALLBACK v8context_get_browser(
    struct _cef_v8context_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBrowser> _retval = CefV8ContextCppToC::Get(self)->GetBrowser();

  // Return type: refptr_same
  return CefBrowserCppToC::Wrap(_retval);
}

cef_frame_t* CEF_CALLBACK v8context_get_frame(struct _cef_v8context_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefFrame> _retval = CefV8ContextCppToC::Get(self)->GetFrame();

  // Return type: refptr_same
  return CefFrameCppToC::Wrap(_retval);
}

struct _cef_v8value_t* CEF_CALLBACK v8context_get_global(
    struct _cef_v8context_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefV8Value> _retval = CefV8ContextCppToC::Get(self)->GetGlobal();

  // Return type: refptr_same
  return CefV8ValueCppToC::Wrap(_retval);
}

int CEF_CALLBACK v8context_enter(struct _cef_v8context_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefV8ContextCppToC::Get(self)->Enter();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK v8context_exit(struct _cef_v8context_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefV8ContextCppToC::Get(self)->Exit();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK v8context_is_same(struct _cef_v8context_t* self,
    struct _cef_v8context_t* that) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: that; type: refptr_same
  DCHECK(that);
  if (!that)
    return 0;

  // Execute
  bool _retval = CefV8ContextCppToC::Get(self)->IsSame(
      CefV8ContextCppToC::Unwrap(that));

  // Return type: bool
  return _retval;
}


// CONSTRUCTOR - Do not edit by hand.

CefV8ContextCppToC::CefV8ContextCppToC(CefV8Context* cls)
    : CefCppToC<CefV8ContextCppToC, CefV8Context, cef_v8context_t>(cls) {
  struct_.struct_.get_browser = v8context_get_browser;
  struct_.struct_.get_frame = v8context_get_frame;
  struct_.struct_.get_global = v8context_get_global;
  struct_.struct_.enter = v8context_enter;
  struct_.struct_.exit = v8context_exit;
  struct_.struct_.is_same = v8context_is_same;
}

#ifndef NDEBUG
template<> long CefCppToC<CefV8ContextCppToC, CefV8Context,
    cef_v8context_t>::DebugObjCt = 0;
#endif
