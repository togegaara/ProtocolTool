#pragma once
#include "afxwin.h"


// SocketTool dialog

class SocketTool : public CDialogEx
{
	DECLARE_DYNAMIC(SocketTool)

public:
	SocketTool(CWnd* pParent = NULL);   // standard constructor
	virtual ~SocketTool();

// Dialog Data
	enum { IDD = IDD_DIALOG_TCP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CComboBox m_CComboBoxTcp;
	afx_msg void OnCbnSelchangeComboTcpcs();
	void Addlist();
	virtual BOOL Create(LPCTSTR lpszTemplateName, CWnd* pParentWnd = NULL);
	virtual BOOL OnInitDialog();
};
