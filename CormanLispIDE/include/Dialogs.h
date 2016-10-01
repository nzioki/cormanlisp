//		-------------------------------
//		Copyright (c) Corman Technologies Inc.
//		See LICENSE.txt for license information.
//		-------------------------------
//
//		File:		RegistrationDialog.h
//		Contents:	Corman Lisp application source file
//		History:	10/13/98  RGC  Created.
//

#ifndef REGISTRATIONDIALOG_H
#define REGISTRATIONDIALOG_H

#include <afxext.h>
#include "../../license/license.h"

class AboutDialog : public CDialog
{
public:
	AboutDialog(UINT nIDTemplate);
	
	BOOL OnInitDialog();
	void OnLegalInfo();
	void OnCreditsInfo();
	void OnCormanNet();

	DECLARE_MESSAGE_MAP()
};

class LegalDialog : public CDialog
{
public:
	LegalDialog(UINT nIDTemplate);
	~LegalDialog();

	BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
private:
	BYTE* mappedFile;
};

class CreditsDialog : public CDialog
{
public:
	CreditsDialog(UINT nIDTemplate);
	~CreditsDialog();

	BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
private:
	BYTE* mappedFile;
};

class GotoLineDialog : public CDialog
{
public:
	GotoLineDialog(UINT nIDTemplate);
	BOOL OnInitDialog();
	void OnOK();
	DECLARE_MESSAGE_MAP()

public:
	CEdit* lineNumberEdit;
	int lineNumber_;
	int lineNumber();
};


#endif // REGISTRATIONDIALOG_H