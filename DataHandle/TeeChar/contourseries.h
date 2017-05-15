// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CValueList;
class CBrush1;
class CPen1;
class CContourLevels;
class CSmoothPoints;
class CContourMarks;
class CChartHiddenPen;
class CPointer;

/////////////////////////////////////////////////////////////////////////////
// CContourSeries wrapper class

class CContourSeries : public COleDispatchDriver
{
public:
	CContourSeries() {}		// Calls COleDispatchDriver default constructor
	CContourSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CContourSeries(const CContourSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long AddXYZ(double AX, double AY, double AZ, LPCTSTR AXLabel, unsigned long Value);
	double MaxZValue();
	double MinZValue();
	long GetTimesZOrder();
	void SetTimesZOrder(long nNewValue);
	CValueList GetZValues();
	double GetZValue(long Index);
	void SetZValue(long Index, double newValue);
	CBrush1 GetBrush();
	CPen1 GetPen();
	void AddArrayXYZ(const VARIANT& XArray, const VARIANT& YArray, const VARIANT& ZArray);
	void AddArrayGrid(long NumX, long NumZ, const VARIANT& XZArray);
	long CalcZPos(long ValueIndex);
	long AddPalette(double Value, unsigned long Color);
	unsigned long GetStartColor();
	void SetStartColor(unsigned long newValue);
	unsigned long GetEndColor();
	void SetEndColor(unsigned long newValue);
	long GetPaletteSteps();
	void SetPaletteSteps(long nNewValue);
	BOOL GetUsePalette();
	void SetUsePalette(BOOL bNewValue);
	BOOL GetUseColorRange();
	void SetUseColorRange(BOOL bNewValue);
	void ClearPalette();
	void CreateDefaultPalette(long NumSteps);
	unsigned long GetSurfacePaletteColor(double Y);
	unsigned long GetMidColor();
	void SetMidColor(unsigned long newValue);
	void CreateRangePalette();
	long GetPaletteStyle();
	void SetPaletteStyle(long nNewValue);
	BOOL GetUsePaletteMin();
	void SetUsePaletteMin(BOOL bNewValue);
	double GetPaletteMin();
	void SetPaletteMin(double newValue);
	double GetPaletteStep();
	void SetPaletteStep(double newValue);
	void InvertPalette();
	void AddCustomPalette(const VARIANT& colorArray);
	long GetNumXValues();
	void SetNumXValues(long nNewValue);
	long GetNumZValues();
	void SetNumZValues(long nNewValue);
	double GetXZValue(long X, long Z);
	BOOL GetIrregularGrid();
	void SetIrregularGrid(BOOL bNewValue);
	void SmoothGrid3D();
	BOOL GetReuseGridIndex();
	void SetReuseGridIndex(BOOL bNewValue);
	void FillGridIndex(long StartIndex);
	long GetNumLevels();
	void SetNumLevels(long nNewValue);
	BOOL GetYPositionLevel();
	void SetYPositionLevel(BOOL bNewValue);
	double GetYPosition();
	void SetYPosition(double newValue);
	CContourLevels GetLevels();
	BOOL GetAutomaticLevels();
	void SetAutomaticLevels(BOOL bNewValue);
	void CreateAutoLevels();
	CSmoothPoints GetSmoothing();
	CContourMarks GetContourMarks();
	CChartHiddenPen GetFrame();
	CPointer GetPointer();
	long GetTransparency();
	void SetTransparency(long nNewValue);
	BOOL GetLegendLines();
	void SetLegendLines(BOOL bNewValue);
	unsigned long GetLinesColor();
	void SetLinesColor(unsigned long newValue);
};
