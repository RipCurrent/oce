// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepSweep_Revol_HeaderFile
#define _BRepSweep_Revol_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepSweep_Rotation_HeaderFile
#include <BRepSweep_Rotation.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_ConstructionError;
class TopoDS_Shape;
class gp_Ax1;
class Sweep_NumShape;
class TopLoc_Location;


//! Provides natural constructors to build BRepSweep <br>
//!          rotated swept Primitives. <br>
class BRepSweep_Revol  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Builds the Revol of meridian S axis A  and angle D. If <br>
//!          C is true S is copied. <br>
  Standard_EXPORT   BRepSweep_Revol(const TopoDS_Shape& S,const gp_Ax1& A,const Quantity_PlaneAngle D,const Standard_Boolean C = Standard_False);
  //! Builds the Revol of meridian S  axis A and angle 2*Pi. <br>
//!          If C is true S is copied. <br>
  Standard_EXPORT   BRepSweep_Revol(const TopoDS_Shape& S,const gp_Ax1& A,const Standard_Boolean C = Standard_False);
  //! Returns the TopoDS Shape attached to the Revol. <br>
  Standard_EXPORT     TopoDS_Shape Shape() ;
  //! Returns    the  TopoDS  Shape   generated  with  aGenS <br>
//!          (subShape  of the generating shape). <br>
  Standard_EXPORT     TopoDS_Shape Shape(const TopoDS_Shape& aGenS) ;
  //! Returns the first shape of the revol  (coinciding with <br>
//!          the generating shape). <br>
  Standard_EXPORT     TopoDS_Shape FirstShape() ;
  //! Returns the first shape of the revol  (coinciding with <br>
//!          the generating shape). <br>
  Standard_EXPORT     TopoDS_Shape FirstShape(const TopoDS_Shape& aGenS) ;
  //! Returns the TopoDS Shape of the top of the prism. <br>
  Standard_EXPORT     TopoDS_Shape LastShape() ;
  //! Returns the  TopoDS  Shape of the top  of  the  prism. <br>
//!          generated  with  aGenS  (subShape  of  the  generating <br>
//!          shape). <br>
  Standard_EXPORT     TopoDS_Shape LastShape(const TopoDS_Shape& aGenS) ;
  //! returns the axis <br>
  Standard_EXPORT     gp_Ax1 Axe() const;
  //! returns the angle. <br>
  Standard_EXPORT     Quantity_PlaneAngle Angle() const;





protected:





private:

  //! builds the NumShape. <br>
  Standard_EXPORT     Sweep_NumShape NumShape(const Standard_Real D) const;
  //! Builds the Location <br>
  Standard_EXPORT     TopLoc_Location Location(const gp_Ax1& Ax,const Standard_Real D) const;
  //! Builds the axis <br>
  Standard_EXPORT     gp_Ax1 Axe(const gp_Ax1& Ax,const Standard_Real D) const;
  //! computes the angle. <br>
  Standard_EXPORT     Standard_Real Angle(const Standard_Real D) const;


BRepSweep_Rotation myRotation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif