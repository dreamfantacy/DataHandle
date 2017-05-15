// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CTeeShape;
class CFramedBorder;
class CNumericMarker;

/////////////////////////////////////////////////////////////////////////////
// CNumericGauge wrapper class

class CNumericGauge : public COleDispatchDriver
{
public:
	CNumericGauge() {}		// Calls COleDispatchDriver default constructor
	CNumericGauge(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CNumericGauge(const CNumericGauge& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CTeeShape GetFace();
	CFramedBorder GetFrame();
	double GetValue();
	void SetValue(double newValue);
	long GetDigitalFont();
	void SetDigitalFont(long nNewValue);
	CNumericMarker GetTextMarker();
	CNumericMarker GetUnitsMarker();
	CNumericMarker GetValueMarker();
};
