
// DataHandle.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDataHandleApp: 
// �йش����ʵ�֣������ DataHandle.cpp
//

class CDataHandleApp : public CWinApp
{
public:
	CDataHandleApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDataHandleApp theApp;