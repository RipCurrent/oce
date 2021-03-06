// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_PointOnCurveOnSurface_HeaderFile
#define _PBRep_PointOnCurveOnSurface_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PBRep_PointOnCurveOnSurface.hxx>

#include <Handle_PGeom2d_Curve.hxx>
#include <Standard_Boolean.hxx>
#include <PBRep_PointsOnSurface.hxx>
#include <Standard_Real.hxx>
#include <Handle_PGeom_Surface.hxx>
class PGeom2d_Curve;
class PGeom_Surface;
class PTopLoc_Location;


class PBRep_PointOnCurveOnSurface : public PBRep_PointsOnSurface
{

public:

  
  Standard_EXPORT PBRep_PointOnCurveOnSurface(const Standard_Real P, const Handle(PGeom2d_Curve)& C, const Handle(PGeom_Surface)& S, const PTopLoc_Location& L);
  
  Standard_EXPORT   Handle(PGeom2d_Curve) PCurve()  const;
  
  //! Returns True
  Standard_EXPORT virtual   Standard_Boolean IsPointOnCurveOnSurface()  const;

PBRep_PointOnCurveOnSurface( )
{
  
}
PBRep_PointOnCurveOnSurface(const Storage_stCONSTclCOM& a) : PBRep_PointsOnSurface(a)
{
  
}
    Handle(PGeom2d_Curve) _CSFDB_GetPBRep_PointOnCurveOnSurfacemyPCurve() const { return myPCurve; }
    void _CSFDB_SetPBRep_PointOnCurveOnSurfacemyPCurve(const Handle(PGeom2d_Curve)& p) { myPCurve = p; }



  DEFINE_STANDARD_RTTI(PBRep_PointOnCurveOnSurface)

protected:




private: 


  Handle(PGeom2d_Curve) myPCurve;


};







#endif // _PBRep_PointOnCurveOnSurface_HeaderFile
