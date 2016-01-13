
// testDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test.h"
#include "testDlg.h"
#include "afxdialogex.h"
#include "math.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
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
public:
//	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
//	ON_WM_TIMER()
END_MESSAGE_MAP()


// CtestDlg �Ի���




CtestDlg::CtestDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CtestDlg::IDD, pParent)
	, m_str(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CtestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_TEST, m_str);
}

BEGIN_MESSAGE_MAP(CtestDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_1, &CtestDlg::OnBnClicked1)
	ON_BN_CLICKED(IDC_2, &CtestDlg::OnBnClicked2)
	ON_BN_CLICKED(IDC_3, &CtestDlg::OnBnClicked3)
	ON_BN_CLICKED(IDC_4, &CtestDlg::OnBnClicked4)
	ON_BN_CLICKED(IDC_5, &CtestDlg::OnBnClicked5)
	ON_BN_CLICKED(IDC_0, &CtestDlg::OnBnClicked0)
	ON_BN_CLICKED(IDC_ADD, &CtestDlg::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_JIEGUO, &CtestDlg::OnBnClickedJieguo)
	ON_BN_CLICKED(IDC_CLACTER, &CtestDlg::OnBnClickedClacter)
	ON_BN_CLICKED(IDC_MINU, &CtestDlg::OnBnClickedMinu)
	ON_BN_CLICKED(IDC_6, &CtestDlg::OnBnClicked6)
	ON_BN_CLICKED(IDC_9, &CtestDlg::OnBnClicked9)
	ON_BN_CLICKED(IDC_8, &CtestDlg::OnBnClicked8)
	ON_BN_CLICKED(IDC_7, &CtestDlg::OnBnClicked7)
	ON_BN_CLICKED(IDC_MINU2, &CtestDlg::OnBnClickedMinu2)
	ON_BN_CLICKED(IDC_chufa, &CtestDlg::OnBnClickedchufa)
	ON_BN_CLICKED(IDC_chengfa, &CtestDlg::OnBnClickedchengfa)
	ON_BN_CLICKED(IDC_baifenhao, &CtestDlg::OnBnClickedbaifenhao)
	ON_BN_CLICKED(IDC_baifenhao2, &CtestDlg::OnBnClickedbaifenhao2)
	ON_BN_CLICKED(IDC_baifenhao3, &CtestDlg::OnBnClickedbaifenhao3)
	ON_BN_CLICKED(IDC_CLACTER2, &CtestDlg::OnBnClickedClacter2)
	ON_BN_CLICKED(IDC_BUTTON1, &CtestDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_CLACTER3, &CtestDlg::OnBnClickedClacter3)
	ON_BN_CLICKED(IDC_CLACTER4, &CtestDlg::OnBnClickedClacter4)
	ON_BN_CLICKED(IDC_CLACTER5, &CtestDlg::OnBnClickedClacter5)
	ON_BN_CLICKED(IDC_CLACTER6, &CtestDlg::OnBnClickedClacter6)
	ON_BN_CLICKED(IDC_CLACTER7, &CtestDlg::OnBnClickedClacter7)
	ON_BN_CLICKED(IDC_CLACTER8, &CtestDlg::OnBnClickedClacter8)
	ON_WM_TIMER()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()


// CtestDlg ��Ϣ�������

BOOL CtestDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

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

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);     // ����Сͼ��
	SetTimer(1,1000,NULL);
	c=-0.05;
	d=-0.05;
	e=-0.05;

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CtestDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CtestDlg::OnPaint()
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
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CtestDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CtestDlg::OnBnClicked1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"1";
	UpdateData(false);
}


void CtestDlg::OnBnClicked2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"2";
	UpdateData(false);
}


void CtestDlg::OnBnClicked3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"3";
	UpdateData(false);
}


void CtestDlg::OnBnClicked4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"4";
	UpdateData(false);
}


void CtestDlg::OnBnClicked5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"5";
	UpdateData(false);
}


void CtestDlg::OnBnClicked0()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"0";
	UpdateData(false);
}


void CtestDlg::OnBnClickedAdd()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	flag=1;
	UpdateData(true);
	temp=_ttof(m_str);
	m_str="";
	UpdateData(false);
}


void CtestDlg::OnBnClickedJieguo()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
   UpdateData(true);
   if(flag==1)
   {
	   temp=temp+_ttof(m_str);
   }
   if(flag==2)
   {
	  temp=temp-_ttof(m_str);
   }
   if(flag==3)
   {
	  temp=temp/_ttof(m_str);
   }
    if(flag==4)
   {
	  temp=temp*_ttof(m_str);
   }
	 if(flag==5)
   {
	  temp=temp/100;
   }
   mydelete(m_str);
   UpdateData(false);
}


void CtestDlg::OnBnClickedClacter()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_str="";
	UpdateData(false);
}


void CtestDlg::OnBnClickedMinu()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	if(m_str.Find(L".")==-1)
	m_str=m_str+L".";
	UpdateData(false);
}


void CtestDlg::OnBnClicked6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"6";
	UpdateData(false);
}


void CtestDlg::OnBnClicked9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"9";
	UpdateData(false);
}


void CtestDlg::OnBnClicked8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"8";
	UpdateData(false);
}


void CtestDlg::OnBnClicked7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"7";
	UpdateData(false);
}


void CtestDlg::OnBnClickedMinu2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	flag=2;
	UpdateData(true);
	temp=_ttof(m_str);
	m_str="";
	UpdateData(false);
}


void CtestDlg::OnBnClickedchufa()
{
	flag=3;
	UpdateData(true);
	temp=_ttof(m_str);
	m_str="";
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CtestDlg::OnBnClickedchengfa()
{
	flag=4;
	UpdateData(true);
	temp=_ttof(m_str);
	m_str="";
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CtestDlg::OnBnClickedbaifenhao()
{
	flag=5;
	UpdateData(true);
	temp=_ttof(m_str);
	m_str="";
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}

void CtestDlg::OnBnClickedbaifenhao2()
{
	flag=6;
	UpdateData(true);
	temp=_ttof(m_str);
	m_str="";
	temp=sqrt(temp);
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CtestDlg::OnBnClickedbaifenhao3()
{
	flag=7;
	UpdateData(true);
	temp=_ttof(m_str);
	m_str="";
	temp=temp*temp;
	mydelete(m_str);
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CtestDlg::OnBnClickedClacter2()
{
	flag=8;
	UpdateData(true);
	temp=_ttof(m_str);
	m_str="";
	temp=0-temp;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
void  CtestDlg::mydelete(CString &ts)
{
	ts.Delete(0);
	m_str.Format(L"%lf",temp);
	while(m_str.Right(1)=="0")
    m_str.Delete(m_str.GetLength()-1,1);
	while(m_str.Right(1)==".")
	m_str.Delete(m_str.GetLength()-1,1);
}



void CtestDlg::OnBnClickedButton1()
{
	flag=9;
	UpdateData(true);
	temp=_ttof(m_str);
	m_str="";
	temp=1/temp;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CtestDlg::OnBnClickedClacter3()
{
	flag=10;
	UpdateData(true);
	temp=_ttof(m_str);
	m_str="";
	temp1=temp;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CtestDlg::OnBnClickedClacter4()
{
	flag=11;
	temp=_ttof(m_str);
	m_str="";
	temp2=0-temp;
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CtestDlg::OnBnClickedClacter5()
{
	flag=12;
	UpdateData(true);
	temp=0;
	temp=temp1+temp2;
	mydelete(m_str);
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CtestDlg::OnBnClickedClacter6()
{
	UpdateData(true);
	if(!m_str.IsEmpty())
	{
		m_str=m_str.Left(m_str.GetLength()-1);
	}
	 UpdateData(false);
	 // TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CtestDlg::OnBnClickedClacter7()
{
	CAboutDlg dlgchaoge;
	dlgchaoge.DoModal();
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CtestDlg::OnBnClickedClacter8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDC *pDC;
	pDC=GetDC();
	pDC->SetWindowOrg(0-150,0-150);
	CPen *oldpen;
	CPen pen(PS_SOLID,3,RGB(0,0,255));
	oldpen=pDC->SelectObject(&pen);
	pDC->Ellipse(-100,100,100,-100);
	pDC->Ellipse(-1,-1,1,1);
	pDC->TextOutW(90,-6,L"3");
	pDC->TextOutW(-98,-8,L"9");
	pDC->TextOutW(-8,-99,L"12");
	pDC->TextOutW(-2,83,L"6");
	for(int i=0;i<12;i++)
	{
		double l=90,ag=i*3.1415926/6;
		double a=l*sin(ag)+1,b=-l*cos(ag)+1,c=l*sin(ag)-1,d=-l*cos(ag)-1;
		pDC->Ellipse(a,b,c,d);
	}

}


//void CAboutDlg::OnTimer(UINT_PTR nIDEvent)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//
//	CDialogEx::OnTimer(nIDEvent);
//}
void CtestDlg::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	TRACE("X=%d,Y=%d\n",point.x,point.y);
	CDialogEx::OnMouseMove(nFlags, point);
}


void CtestDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
    CDC *pDC;
    pDC=GetDC();
	pDC->SetWindowOrg(0-150,0-150);
	CPen *oldpen;
	CPen groundpen(PS_SOLID,4,RGB(255,255,255));
	CPen pen(PS_SOLID,3,RGB(0,0,225));
	oldpen=pDC->SelectObject(&pen);
	pDC->Ellipse(-100,100,100,-100);
	CPen ppen(PS_SOLID,3,RGB(100,100,200));
	oldpen=pDC->SelectObject(&ppen);
	pDC->Ellipse(-1,1,1,-1);
	pDC->TextOutW(90,-8,L"3");
	pDC->TextOutW(-98,-8,L"9");
	pDC->TextOutW(-8,-99.5,L"12");
	pDC->TextOutW(-2,83,L"6");
	double L1=80,L2=70,L3=50;          //miaozhen
	oldpen=pDC->SelectObject(&groundpen);
	a=L1*sin(c);
	b=-L1*cos(c);
	pDC->MoveTo(0,0);
	pDC->LineTo(a,b);
	CPen secpen(PS_SOLID,3,RGB(225,225,0));
	oldpen=pDC->SelectObject(&secpen);
	c=c+3.1415926/30;
	a=L1*sin(c);
	b=-L1*cos(c);
	pDC->MoveTo(0,0);
	pDC->LineTo(a,b);
    oldpen=pDC->SelectObject(&groundpen);//fenzhen
	a=L2*sin(e);
	b=-L2*cos(e);
	pDC->MoveTo(0,0);
	pDC->LineTo(a,b);
	CPen minpen(PS_SOLID,3,RGB(225,0,225));
	oldpen=pDC->SelectObject(&minpen);
	e=e+3.1415926/1800;
	a=L2*sin(e);
	b=-L2*cos(e);
	pDC->MoveTo(0,0);
	pDC->LineTo(a,b);
	oldpen=pDC->SelectObject(&groundpen);//shizhen
	a=L3*sin(d);
	b=-L3*cos(d);
	pDC->MoveTo(0,0);
	pDC->LineTo(a,b);
	CPen hpen(PS_SOLID,3,RGB(0,225,0));
	oldpen=pDC->SelectObject(&hpen);
	d=d+3.1415926/21600;
	a=L3*sin(d);
	b=-L3*cos(d);
	pDC->MoveTo(0,0);
	pDC->LineTo(a,b);
    CDialogEx::OnTimer(nIDEvent);
	
}


