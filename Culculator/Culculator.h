
// Culculator.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCulculatorApp:
// �йش����ʵ�֣������ Culculator.cpp
//

class CCulculatorApp : public CWinApp
{
public:
	CCulculatorApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCulculatorApp theApp;