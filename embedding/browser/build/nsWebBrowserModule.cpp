/* -*- Mode: IDL; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 2 -*-
 *
 * The contents of this file are subject to the Mozilla Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/MPL/
 * 
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 * 
 * The Original Code is the Mozilla browser.
 * 
 * The Initial Developer of the Original Code is Netscape
 * Communications, Inc.  Portions created by Netscape are
 * Copyright (C) 1999, Mozilla.  All Rights Reserved.
 * 
 * Contributor(s):
 *   Travis Bogard <travis@netscape.com>
 */

#include "nsIModule.h"
#include "nsIGenericFactory.h"

#include "nsWebBrowser.h"
#include "nsWebBrowserSetup.h"



// Factory Constructors

NS_GENERIC_FACTORY_CONSTRUCTOR(nsWebBrowser)
NS_GENERIC_FACTORY_CONSTRUCTOR(nsWebBrowserSetup)


// Component Table

static nsModuleComponentInfo components[] =
{
   { "WebBrowser Component", NS_WEBBROWSER_CID, 
      NS_WEBBROWSER_PROGID, nsWebBrowserConstructor },
   { "WebBrowserSetup Component", NS_WEBBROWSER_SETUP_CID, 
      NS_WEBBROWSER_SETUP_PROGID, nsWebBrowserSetupConstructor }
};


// NSGetModule implementation.

NS_IMPL_NSGETMODULE("Browser Embedding Module", components)



