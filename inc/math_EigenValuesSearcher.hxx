// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_EigenValuesSearcher_HeaderFile
#define _math_EigenValuesSearcher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfReal_HeaderFile
#include <Handle_TColStd_HArray2OfReal.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TColStd_HArray1OfReal;
class TColStd_HArray2OfReal;
class StdFail_NotDone;
class TColStd_Array1OfReal;
class math_Vector;


//! This class finds eigen values and vectors of <br>
//!          real symmetric tridiagonal matrix <br>
class math_EigenValuesSearcher  {
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

  
  Standard_EXPORT   math_EigenValuesSearcher(const TColStd_Array1OfReal& Diagonal,const TColStd_Array1OfReal& Subdiagonal);
  //! Returns Standard_True if computation is performed <br>
//!          successfully. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns the dimension of matrix <br>
  Standard_EXPORT     Standard_Integer Dimension() const;
  //! Returns the Index_th eigen value of matrix <br>
//!          Index must be in [1, Dimension()] <br>
  Standard_EXPORT     Standard_Real EigenValue(const Standard_Integer Index) const;
  //! Returns the Index_th eigen vector of matrix <br>
//!          Index must be in [1, Dimension()] <br>
  Standard_EXPORT     math_Vector EigenVector(const Standard_Integer Index) const;





protected:





private:



Handle_TColStd_HArray1OfReal myDiagonal;
Handle_TColStd_HArray1OfReal mySubdiagonal;
Standard_Boolean myIsDone;
Standard_Integer myN;
Handle_TColStd_HArray1OfReal myEigenValues;
Handle_TColStd_HArray2OfReal myEigenVectors;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif