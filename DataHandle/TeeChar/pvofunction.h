// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CPVOFunction wrapper class

class CPVOFunction : public COleDispatchDriver
{
public:
	CPVOFunction() {}		// Calls COleDispatchDriver default constructor
	CPVOFunction(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPVOFunction(const CPVOFunction& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetPercentage();
	void SetPercentage(BOOL bNewValue);
	long GetPeriod2();
	void SetPeriod2(long nNewValue);
};
