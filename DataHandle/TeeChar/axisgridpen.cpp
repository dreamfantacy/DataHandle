// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "axisgridpen.h"


/////////////////////////////////////////////////////////////////////////////
// CAxisGridPen properties

/////////////////////////////////////////////////////////////////////////////
// CAxisGridPen operations

long CAxisGridPen::GetDrawEvery()
{
	long result;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CAxisGridPen::SetDrawEvery(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

double CAxisGridPen::GetZPosition()
{
	double result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CAxisGridPen::SetZPosition(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}
