// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CPnts_MyRootFunction_HeaderFile
#define _CPnts_MyRootFunction_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <CPnts_MyGaussFunction.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <CPnts_RealFunction.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>


//! Implements a function for the Newton algorithm to find the
//! solution of Integral(F) = L
//! (compute Length  and Derivative of the curve for Newton)
class CPnts_MyRootFunction  : public math_FunctionWithDerivative
{
public:

  DEFINE_STANDARD_ALLOC

  
    CPnts_MyRootFunction();
  
  //! F  is a pointer on a  function  D is a client data
  //! Order is the order of integration to use
  Standard_EXPORT   void Init (const CPnts_RealFunction& F, const Standard_Address D, const Standard_Integer Order) ;
  
  //! We want to solve Integral(X0,X,F(X,D)) = L
  Standard_EXPORT   void Init (const Standard_Real X0, const Standard_Real L) ;
  
  //! We want to solve Integral(X0,X,F(X,D)) = L
  //! with given tolerance
  Standard_EXPORT   void Init (const Standard_Real X0, const Standard_Real L, const Standard_Real Tol) ;
  
  //! This is Integral(X0,X,F(X,D)) - L
  Standard_EXPORT   Standard_Boolean Value (const Standard_Real X, Standard_Real& F) ;
  
  //! This is F(X,D)
  Standard_EXPORT   Standard_Boolean Derivative (const Standard_Real X, Standard_Real& Df) ;
  
  Standard_EXPORT   Standard_Boolean Values (const Standard_Real X, Standard_Real& F, Standard_Real& Df) ;




protected:





private:



  CPnts_MyGaussFunction myFunction;
  Standard_Real myX0;
  Standard_Real myL;
  Standard_Integer myOrder;
  Standard_Real myTol;


};


#include <CPnts_MyRootFunction.lxx>





#endif // _CPnts_MyRootFunction_HeaderFile
