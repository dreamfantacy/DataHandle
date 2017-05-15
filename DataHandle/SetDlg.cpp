// SetDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "DataHandle.h"
#include "SetDlg.h"
#include "afxdialogex.h"


// CSetDlg 对话框

IMPLEMENT_DYNAMIC(CSetDlg, CDialog)

CSetDlg::CSetDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSetDlg::IDD, pParent)
{

}

CSetDlg::~CSetDlg()
{
}

void CSetDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSetDlg, CDialog)
	ON_BN_CLICKED(IDC_BTN_SEND, &CSetDlg::OnBnClickedBtnSend)
	ON_BN_CLICKED(IDOK, &CSetDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CSetDlg 消息处理程序


void CSetDlg::OnBnClickedBtnSend()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CSetDlg::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	CDialog::OnOK();
}
