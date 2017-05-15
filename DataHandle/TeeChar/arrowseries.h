// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPointer;
class CValueList;

/////////////////////////////////////////////////////////////////////////////
// CArrowSeries wrapper class

class CArrowSeries : public COleDispatchDriver
{
public:
	CArrowSeries() {}		// Calls COleDispatchDriver default constructor
	CArrowSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CArrowSeries(const CArrowSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CPointer GetPointer();
	BOOL GetDark3D();
	void SetDark3D(BOOL bNewValue);
	long GetTransparency();
	void SetTransparency(long nNewValue);
	BOOL GetFastPoint();
	void SetFastPoint(BOOL bNewValue);
	long GetTreatNulls();
	void SetTreatNulls(long nNewValue);
	long GetArrowHeight();
	void SetArrowHeight(long nNewValue);
	long GetArrowWidth();
	void SetArrowWidth(long nNewValue);
	CValueList GetEndXValues();
	CValueList GetEndYValues();
	CValueList GetStartXValues();
	CValueList GetStartYValues();
	long AddArrow(double X0, double Y0, double X1, double Y1, LPCTSTR ALabel, unsigned long Value);
	long GetArrowPercent();
	void SetArrowPercent(long nNewValue);
};
