// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d_HeaderFile
#define _MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Standard_Integer.hxx>
#include <Handle_MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d.hxx>
class Standard_NoSuchObject;
class gp_Pnt2d;
class TColStd_MapIntegerHasher;
class MAT2d_DataMapOfIntegerPnt2d;
class MAT2d_DataMapNodeOfDataMapOfIntegerPnt2d;



class MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d();
  
  Standard_EXPORT MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d(const MAT2d_DataMapOfIntegerPnt2d& aMap);
  
  Standard_EXPORT   void Initialize (const MAT2d_DataMapOfIntegerPnt2d& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  gp_Pnt2d& Value()  const;




protected:





private:





};







#endif // _MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d_HeaderFile
