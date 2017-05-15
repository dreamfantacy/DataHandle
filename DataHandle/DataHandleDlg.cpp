
// DataHandleDlg.cpp : ʵ���ļ�
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


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// CDataHandleDlg �Ի���



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


// CDataHandleDlg ��Ϣ�������

BOOL CDataHandleDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������
	m_Menu.LoadMenu(IDR_MENU);		//���ز˵�
	SetMenu(&m_Menu);

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CDataHandleDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CDataHandleDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CDataHandleDlg::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialog::OnOK();
}

//���ݴ���
void CDataHandleDlg::OnBnClickedBtnDataprocess()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	InitialChar();
}


void CDataHandleDlg::OnSet()
{
	// TODO:  �ڴ���������������
	CSetDlg dlg;
	if (dlg.DoModal() == IDOK)
	{

	}
}

//��ʼ��ͼ��
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
	//����m_dataTeechar.GetPage().SetMaxPointsPerPage(1440); ��֪�������ʲô��˼���ڴ���Ŀ�����У�����������ʱ���bug���������һ�㶼�����ˡ�
		return 1;

}

//���ļ����������
void CDataHandleDlg::OnFileOpen()
{
	// TODO:  �ڴ���������������
	BOOL isOpen = TRUE;     //�Ƿ��(����Ϊ����)  
	CString defaultDir = "";   //Ĭ�ϴ򿪵��ļ�·��  
	CString fileName = "";         //Ĭ�ϴ򿪵��ļ���  
	CString filePath = "";
	CString filter = "�ļ� (*.doc; *.ppt; *.xls; *.txt)|*.doc;*.ppt;*.xls;*.txt||";   //�ļ����ǵ�����  
	CFileDialog openFileDlg(isOpen, defaultDir, fileName, OFN_HIDEREADONLY | OFN_READONLY, filter, NULL);
	INT_PTR result = openFileDlg.DoModal();
	if (result == IDOK) {
		filePath = openFileDlg.GetPathName();
	}

	// ���ļ�
	CStdioFile file;
	BOOL ret = file.Open(filePath, CFile::modeRead | CFile::shareDenyNone);
	if (!ret)
	{
		AfxMessageBox("���ļ�ʧ��");
		return;
	}
	file.SeekToBegin();

	// ѭ����ȡ�ļ�
	CString strLine;
	while (file.ReadString(strLine))
	{
		//��ȡ���ݲ�����
	}

	//���ļ��л�ȡ��Ʒ����Ϣ������ӵ��б���
	InitListBox();

	//���Ƚ��л�ȡ��Ʒ���ݣ���ʵʱ��ʾ��ͼ���С�

	// �ر��ļ�
	file.Close();
}

//�����˳�
void CDataHandleDlg::OnFileQuit()
{
	// TODO:  �ڴ���������������
	CDialog::OnCancel();
}

//�����ļ�
void CDataHandleDlg::OnFileSave()
{
	// TODO:  �ڴ���������������
	//������д���ļ��У������Ϊ��
}

//��ʼ���б�ؼ�����
void CDataHandleDlg::InitListBox()
{
	m_ProductList.AddString("��Ʒ��1");
	m_ProductList.AddString("��Ʒ��2");
	m_ProductList.AddString("��Ʒ��3");
}
