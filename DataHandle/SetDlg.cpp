// SetDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "DataHandle.h"
#include "SetDlg.h"
#include "afxdialogex.h"


// CSetDlg �Ի���

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


// CSetDlg ��Ϣ�������


void CSetDlg::OnBnClickedBtnSend()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CSetDlg::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialog::OnOK();
}
