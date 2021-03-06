#if !defined(AFX_ANTIALIASTOOL_H__60295A8D_E46B_4962_916F_6959EE98AC9E__INCLUDED_)
#define AFX_ANTIALIASTOOL_H__60295A8D_E46B_4962_916F_6959EE98AC9E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CTeePicture;
class CFilterItems;

/////////////////////////////////////////////////////////////////////////////
// CAntiAliasTool wrapper class

class CAntiAliasTool : public COleDispatchDriver
{
public:
	CAntiAliasTool() {}		// Calls COleDispatchDriver default constructor
	CAntiAliasTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CAntiAliasTool(const CAntiAliasTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CTeePicture GetBitmap();
	CFilterItems GetFilters();
	BOOL GetAntialias();
	void SetAntialias(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ANTIALIASTOOL_H__60295A8D_E46B_4962_916F_6959EE98AC9E__INCLUDED_)
