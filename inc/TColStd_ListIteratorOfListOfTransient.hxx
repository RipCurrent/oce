// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_ListIteratorOfListOfTransient_HeaderFile
#define _TColStd_ListIteratorOfListOfTransient_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_TColStd_ListNodeOfListOfTransient.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TColStd_ListOfTransient;
class Standard_Transient;
class TColStd_ListNodeOfListOfTransient;



class TColStd_ListIteratorOfListOfTransient 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColStd_ListIteratorOfListOfTransient();
  
  Standard_EXPORT TColStd_ListIteratorOfListOfTransient(const TColStd_ListOfTransient& L);
  
  Standard_EXPORT   void Initialize (const TColStd_ListOfTransient& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Handle(Standard_Transient)& Value()  const;


friend class TColStd_ListOfTransient;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item Handle(Standard_Transient)
#define Item_hxx <Standard_Transient.hxx>
#define TCollection_ListNode TColStd_ListNodeOfListOfTransient
#define TCollection_ListNode_hxx <TColStd_ListNodeOfListOfTransient.hxx>
#define TCollection_ListIterator TColStd_ListIteratorOfListOfTransient
#define TCollection_ListIterator_hxx <TColStd_ListIteratorOfListOfTransient.hxx>
#define Handle_TCollection_ListNode Handle_TColStd_ListNodeOfListOfTransient
#define TCollection_ListNode_Type_() TColStd_ListNodeOfListOfTransient_Type_()
#define TCollection_List TColStd_ListOfTransient
#define TCollection_List_hxx <TColStd_ListOfTransient.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _TColStd_ListIteratorOfListOfTransient_HeaderFile
