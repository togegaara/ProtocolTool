
// ProtocolTools.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CProtocolToolsApp: 
// �йش����ʵ�֣������ ProtocolTools.cpp
//

class CProtocolToolsApp : public CWinApp
{
public:
	CProtocolToolsApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CProtocolToolsApp theApp;