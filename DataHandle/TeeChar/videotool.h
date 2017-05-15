#if !defined(AFX_VIDEOTOOL_H__FBE2AF86_4A22_48A6_B785_E4A1FBC8E8FE__INCLUDED_)
#define AFX_VIDEOTOOL_H__FBE2AF86_4A22_48A6_B785_E4A1FBC8E8FE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CVideoTool wrapper class

class CVideoTool : public COleDispatchDriver
{
public:
	CVideoTool() {}		// Calls COleDispatchDriver default constructor
	CVideoTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CVideoTool(const CVideoTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void StartRecording(LPCTSTR FileName);
	void StopRecording();
	long GetFrameCount();
	BOOL GetIsRecording();
	CString GetCompression();
	void SetCompression(LPCTSTR lpszNewValue);
	long GetCompressionQuality();
	void SetCompressionQuality(long nNewValue);
	CString GetFileName();
	void SetFileName(LPCTSTR lpszNewValue);
	long GetFrameDuration();
	void SetFrameDuration(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIDEOTOOL_H__FBE2AF86_4A22_48A6_B785_E4A1FBC8E8FE__INCLUDED_)