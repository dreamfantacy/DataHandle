
// DataHandleDlg.h : 头文件
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



// CDataHandleDlg 对话框
class CDataHandleDlg : public CDialog
{
// 构造
public:
	CDataHandleDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_DATAHANDLE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
	int			InitialChar();		//初始化图形
	void		InitListBox();		//初始化列表控件数据
public:
	CMenu		m_Menu;
	CTChart		m_dataTeechar;
	CListBox	m_ProductList;
};
