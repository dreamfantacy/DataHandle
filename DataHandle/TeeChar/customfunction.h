// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CCustomFunction wrapper class

class CCustomFunction : public COleDispatchDriver
{
public:
	CCustomFunction() {}		// Calls COleDispatchDriver default constructor
	CCustomFunction(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCustomFunction(const CCustomFunction& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetNumPoints();
	void SetNumPoints(long nNewValue);
	double GetStartX();
	void SetStartX(double newValue);
	double GetX();
	void SetX(double newValue);
};
