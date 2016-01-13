
// testDlg.h : 头文件
//

#pragma once


// CtestDlg 对话框
class CtestDlg : public CDialogEx
{
// 构造
public:
	CtestDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_TEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	double a,b,c,d,e;
	int color;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClicked1();
	CString m_str;
	double flag;
	double temp;
	afx_msg void OnBnClicked2();
	afx_msg void OnBnClicked3();
	afx_msg void OnBnClicked4();
	afx_msg void OnBnClicked5();
	afx_msg void OnBnClicked0();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedJieguo();
	afx_msg void OnBnClickedClacter();
	afx_msg void OnBnClickedMinu();
	afx_msg void OnBnClicked6();
	afx_msg void OnBnClicked9();
	afx_msg void OnBnClicked8();
	afx_msg void OnBnClicked7();
	afx_msg void OnBnClickedMinu2();
	afx_msg void OnBnClickedchufa();
	afx_msg void OnBnClickedchengfa();
	afx_msg void OnBnClickedbaifenhao();
	
	afx_msg void OnBnClickedbaifenhao2();
	afx_msg void OnBnClickedbaifenhao3();
	afx_msg void OnBnClickedClacter2();
protected:
	void mydelete(CString &ts);
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedClacter3();
	afx_msg void OnBnClickedClacter4();
protected:
	double temp1,temp2;
public:
	afx_msg void OnBnClickedClacter5();
	afx_msg void OnBnClickedClacter6();
	afx_msg void OnBnClickedClacter7();
	afx_msg void OnBnClickedClacter8();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

