#if !defined(AFX_TEELISTBOXSECTION_H__F0AC2A25_C180_4AF8_A854_EBCB53AD1B10__INCLUDED_)
#define AFX_TEELISTBOXSECTION_H__F0AC2A25_C180_4AF8_A854_EBCB53AD1B10__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CTeeListBoxSection wrapper class

class CTeeListBoxSection : public COleDispatchDriver
{
public:
	CTeeListBoxSection() {}		// Calls COleDispatchDriver default constructor
	CTeeListBoxSection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTeeListBoxSection(const CTeeListBoxSection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetWidth();
	void SetWidth(long nNewValue);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEELISTBOXSECTION_H__F0AC2A25_C180_4AF8_A854_EBCB53AD1B10__INCLUDED_)
