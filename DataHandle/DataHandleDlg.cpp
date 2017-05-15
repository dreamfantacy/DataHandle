
// DataHandleDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "DataHandle.h"
#include "DataHandleDlg.h"
#include "SetDlg.h"
#include "SerialPort\SerialPort.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#define GetRandom( min, max ) ((rand() % (int)(((max)+1) - (min))) + (min))


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CDataHandleDlg 对话框



CDataHandleDlg::CDataHandleDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDataHandleDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDataHandleDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TCHART1, m_dataTeechar);
	DDX_Control(pDX, IDC_LIST_PRODUCT, m_ProductList);
}

BEGIN_MESSAGE_MAP(CDataHandleDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CDataHandleDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BTN_DATAPROCESS, &CDataHandleDlg::OnBnClickedBtnDataprocess)
	ON_COMMAND(IDM_SET, &CDataHandleDlg::OnSet)
	ON_COMMAND(ID_FILE_OPEN, &CDataHandleDlg::OnFileOpen)
	ON_COMMAND(ID_FILE_QUIT, &CDataHandleDlg::OnFileQuit)
	ON_COMMAND(ID_FILE_SAVE, &CDataHandleDlg::OnFileSave)
END_MESSAGE_MAP()


// CDataHandleDlg 消息处理程序

BOOL CDataHandleDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码
	m_Menu.LoadMenu(IDR_MENU);		//加载菜单
	SetMenu(&m_Menu);

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CDataHandleDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CDataHandleDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CDataHandleDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CDataHandleDlg::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	CDialog::OnOK();
}

//数据处理
void CDataHandleDlg::OnBnClickedBtnDataprocess()
{
	// TODO:  在此添加控件通知处理程序代码
	InitialChar();
}


void CDataHandleDlg::OnSet()
{
	// TODO:  在此添加命令处理程序代码
	CSetDlg dlg;
	if (dlg.DoModal() == IDOK)
	{

	}
}

//初始化图形
int CDataHandleDlg::InitialChar()
{
	m_dataTeechar.Series(0).Clear();
	m_dataTeechar.Series(1).Clear();
	m_dataTeechar.GetPage().SetMaxPointsPerPage(1440);

	m_dataTeechar.Series(0).SetColor(RGB(255, 0, 0));
	m_dataTeechar.Series(1).SetColor(RGB(0, 255, 0));

	CString csTime;
	for (int i = 0; i<12; i++)
	{
		csTime.Format("%d", i + 1);

		float fzVal = float(GetRandom(8000, 30000) / 100);
		m_dataTeechar.Series(0).AddXY(i, fzVal, csTime, i);
		fzVal = float(GetRandom(5000, 25000) / 100);
		m_dataTeechar.Series(1).AddXY(i, fzVal, csTime, i);
	}

	//m_tChar.GetAxis().GetLeft().SetMinMax(0, 300);
	m_dataTeechar.GetAxis().GetLeft().SetAutomaticMaximum(1);
	//其中m_dataTeechar.GetPage().SetMaxPointsPerPage(1440); 不知道这句是什么意思，在大项目集成中，有了它，有时会出bug，所以这句一般都不用了。
		return 1;

}

//打开文件并添加数据
void CDataHandleDlg::OnFileOpen()
{
	// TODO:  在此添加命令处理程序代码
	BOOL isOpen = TRUE;     //是否打开(否则为保存)  
	CString defaultDir = "";   //默认打开的文件路径  
	CString fileName = "";         //默认打开的文件名  
	CString filePath = "";
	CString filter = "文件 (*.doc; *.ppt; *.xls; *.txt)|*.doc;*.ppt;*.xls;*.txt||";   //文件过虑的类型  
	CFileDialog openFileDlg(isOpen, defaultDir, fileName, OFN_HIDEREADONLY | OFN_READONLY, filter, NULL);
	INT_PTR result = openFileDlg.DoModal();
	if (result == IDOK) {
		filePath = openFileDlg.GetPathName();
	}

	// 打开文件
	CStdioFile file;
	BOOL ret = file.Open(filePath, CFile::modeRead | CFile::shareDenyNone);
	if (!ret)
	{
		AfxMessageBox("打开文件失败");
		return;
	}
	file.SeekToBegin();

	// 循环读取文件
	CString strLine;
	while (file.ReadString(strLine))
	{
		//获取数据并处理
	}

	//从文件中获取产品号信息，并添加到列表中
	InitListBox();

	//从稳健中获取产品数据，并实时显示到图表中。

	// 关闭文件
	file.Close();
}

//程序退出
void CDataHandleDlg::OnFileQuit()
{
	// TODO:  在此添加命令处理程序代码
	CDialog::OnCancel();
}

//保存文件
void CDataHandleDlg::OnFileSave()
{
	// TODO:  在此添加命令处理程序代码
	//将数据写到文件中，并另存为。
}

//初始化列表控件数据
void CDataHandleDlg::InitListBox()
{
	m_ProductList.AddString("产品号1");
	m_ProductList.AddString("产品号2");
	m_ProductList.AddString("产品号3");
}
