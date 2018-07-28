// SocketTool.cpp : implementation file
//

#include "stdafx.h"
#include "ProtocolTools.h"
#include "SocketTool.h"
#include "afxdialogex.h"


// SocketTool dialog

IMPLEMENT_DYNAMIC(SocketTool, CDialogEx)

SocketTool::SocketTool(CWnd* pParent /*=NULL*/)
	: CDialogEx(SocketTool::IDD, pParent)
{
	
}

SocketTool::~SocketTool()
{
}

void SocketTool::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO_TCPCS, m_CComboBoxTcp);
}


BEGIN_MESSAGE_MAP(SocketTool, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO_TCPCS, &SocketTool::OnCbnSelchangeComboTcpcs)
END_MESSAGE_MAP()


// SocketTool message handlers
void SocketTool::OnCbnSelchangeComboTcpcs()
{
	// TODO: Add your control notification handler code here
}

void SocketTool::Addlist()
{
	// TODO: Add your control notification handler code here
	m_CComboBoxTcp.AddString(L"Tcp_Client");
	m_CComboBoxTcp.AddString(L"Tcp_Server");
}


BOOL SocketTool::Create(LPCTSTR lpszTemplateName, CWnd* pParentWnd)
{
	// TODO: Add your specialized code here and/or call the base class
	
	BOOL bCreat = CDialogEx::Create(lpszTemplateName, pParentWnd);
	return bCreat;
}


BOOL SocketTool::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Add extra initialization here
	Addlist();
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}
