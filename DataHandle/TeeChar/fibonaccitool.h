#if !defined(AFX_FIBONACCITOOL_H__8F8BF5D9_828E_4B5C_A914_54317CE5BA39__INCLUDED_)
#define AFX_FIBONACCITOOL_H__8F8BF5D9_828E_4B5C_A914_54317CE5BA39__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CTeeFont;
class CFibonacciLevels;
class CPen1;

/////////////////////////////////////////////////////////////////////////////
// CFibonacciTool wrapper class

class CFibonacciTool : public COleDispatchDriver
{
public:
	CFibonacciTool() {}		// Calls COleDispatchDriver default constructor
	CFibonacciTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CFibonacciTool(const CFibonacciTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetSeries();
	void SetSeries(const VARIANT& newValue);
	long GetDrawStyle();
	void SetDrawStyle(long nNewValue);
	double GetEndX();
	void SetEndX(double newValue);
	double GetEndY();
	void SetEndY(double newValue);
	long GetLabelsAngle();
	void SetLabelsAngle(long nNewValue);
	CTeeFont GetLabelsFont();
	CFibonacciLevels GetLevels();
	BOOL GetShowLabels();
	void SetShowLabels(BOOL bNewValue);
	double GetStartX();
	void SetStartX(double newValue);
	double GetStartY();
	void SetStartY(double newValue);
	CPen1 GetTrendPen();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FIBONACCITOOL_H__8F8BF5D9_828E_4B5C_A914_54317CE5BA39__INCLUDED_)
