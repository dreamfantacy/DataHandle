
// DataHandleDlg.h : ͷ�ļ�
//

#pragma once
#include "tchart1.h"
#include "TeeChar\tchart.h"
#include ".\TeeChar\series.h"
#include ".\TeeChar\page.h"
#include ".\TeeChar\ValueList.h"
#include ".\TeeChar\ToolList.h"
#include ".\TeeChar\Tools.h"
#include ".\TeeChar\AnnotationTool.h"
#include ".\TeeChar\Axes.h" 
#include ".\TeeChar\Axis.h"
#include "afxwin.h"



// CDataHandleDlg �Ի���
class CDataHandleDlg : public CDialog
{
// ����
public:
	CDataHandleDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_DATAHANDLE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedBtnDataprocess();
	afx_msg void OnSet();
	afx_msg void OnFileOpen();
	afx_msg void OnFileQuit();
	afx_msg void OnFileSave();

public:
	int			InitialChar();		//��ʼ��ͼ��
	void		InitListBox();		//��ʼ���б�ؼ�����
public:
	CMenu		m_Menu;
	CTChart		m_dataTeechar;
	CListBox	m_ProductList;
};
