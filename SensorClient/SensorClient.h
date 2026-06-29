
// SensorClient.h : fichier d'en-tête principal pour l'application SensorClient
//
#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'stdafx.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"       // symboles principaux


// CSensorClientApp:
// Consultez SensorClient.cpp pour l'implémentation de cette classe
//

class CSensorClientApp : public CWinApp
{
public:
	CSensorClientApp();


// Substitutions
public:
	virtual BOOL InitInstance();

// Implémentation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSensorClientApp theApp;
