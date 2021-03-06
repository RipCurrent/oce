// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PShort_SeqExplorerOfHSequenceOfShortReal_HeaderFile
#define _PShort_SeqExplorerOfHSequenceOfShortReal_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_PShort_SeqNodeOfHSequenceOfShortReal.hxx>
#include <Standard_Integer.hxx>
#include <Handle_PShort_HSequenceOfShortReal.hxx>
#include <Standard_ShortReal.hxx>
#include <Standard_Boolean.hxx>
class PShort_SeqNodeOfHSequenceOfShortReal;
class PShort_HSequenceOfShortReal;
class Standard_NoSuchObject;
class Standard_OutOfRange;



class PShort_SeqExplorerOfHSequenceOfShortReal 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT PShort_SeqExplorerOfHSequenceOfShortReal(const Handle(PShort_HSequenceOfShortReal)& S);
  
  Standard_EXPORT   Standard_ShortReal Value (const Standard_Integer Index) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const Standard_ShortReal& T) ;
  
  Standard_EXPORT   Standard_Integer Location (const Standard_Integer N, const Standard_ShortReal& T, const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;
  
  Standard_EXPORT   Standard_Integer Location (const Standard_Integer N, const Standard_ShortReal& T) ;




protected:





private:



  Handle(PShort_SeqNodeOfHSequenceOfShortReal) CurrentItem;
  Standard_Integer CurrentIndex;
  Handle(PShort_HSequenceOfShortReal) TheSequence;


};







#endif // _PShort_SeqExplorerOfHSequenceOfShortReal_HeaderFile
