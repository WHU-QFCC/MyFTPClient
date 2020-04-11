
// MyFtpClientDlg.h: 头文件
//

#pragma once


// CMyFtpClientDlg 对话框
class CMyFtpClientDlg : public CDialogEx
{
// 构造
public:
	CMyFtpClientDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MYFTPCLIENT_DIALOG };
#endif

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
	BOOL Download(CString strSName, CString strDName);
	BOOL Upload(CString strSName, CString strDName);
	void UpdateDir();

	afx_msg void OnQuery();
	afx_msg void OnUpload();
	afx_msg void OnDownload();
	afx_msg void OnSelchangeListFile();


private:
	CStatic m_staFtp;
	CStatic m_staName;
	CStatic m_staPwd;
	CString m_strFtp;
	CEdit m_editFtp;
	CString m_strName;
	CEdit m_editName;
	CString m_strPwd;
	CEdit m_editPwd;
	CButton m_btnQuery;
	CButton m_btnDownload;
	CButton m_btnUpload;
	CListBox m_listFile;	
	CButton m_exit;
	CString dir;
public:
	afx_msg void OnClickedIdcancle();
private:
	CButton m_nextdir;
	CButton m_predir;
public:
	afx_msg void OnClickedNxtdir();
	afx_msg void OnClickedPredir();
};
