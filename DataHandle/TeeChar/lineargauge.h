// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CTeeShape;
class CFramedBorder;
class CGaugePointerRange;
class CGaugeSeriesPointer;

/////////////////////////////////////////////////////////////////////////////
// CLinearGauge wrapper class

class CLinearGauge : public COleDispatchDriver
{
public:
	CLinearGauge() {}		// Calls COleDispatchDriver default constructor
	CLinearGauge(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CLinearGauge(const CLinearGauge& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CTeeShape GetFace();
	CFramedBorder GetFrame();
	double GetValue();
	void SetValue(double newValue);
	CGaugePointerRange GetGreenLine();
	BOOL GetHorizontal();
	void SetHorizontal(BOOL bNewValue);
	double GetMaximum();
	void SetMaximum(double newValue);
	double GetMinimum();
	void SetMinimum(double newValue);
	long GetMinorTickDistance();
	void SetMinorTickDistance(long nNewValue);
	CGaugeSeriesPointer GetMinorTicks();
	CGaugePointerRange GetRedLine();
	CGaugeSeriesPointer GetTicks();
	CGaugeSeriesPointer GetMaxValueIndicator();
	BOOL GetUseValueColorPalette();
	void SetUseValueColorPalette(BOOL bNewValue);
	CTeeShape GetValueArea();
};
