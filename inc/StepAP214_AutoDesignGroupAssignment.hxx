// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AutoDesignGroupAssignment_HeaderFile
#define _StepAP214_AutoDesignGroupAssignment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepAP214_AutoDesignGroupAssignment.hxx>

#include <Handle_StepAP214_HArray1OfAutoDesignGroupedItem.hxx>
#include <StepBasic_GroupAssignment.hxx>
#include <Handle_StepBasic_Group.hxx>
#include <Standard_Integer.hxx>
class StepAP214_HArray1OfAutoDesignGroupedItem;
class StepBasic_Group;
class StepAP214_AutoDesignGroupedItem;



class StepAP214_AutoDesignGroupAssignment : public StepBasic_GroupAssignment
{

public:

  
  //! Returns a AutoDesignGroupAssignment
  Standard_EXPORT StepAP214_AutoDesignGroupAssignment();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_Group)& aAssignedGroup, const Handle(StepAP214_HArray1OfAutoDesignGroupedItem)& aItems) ;
  
  Standard_EXPORT   void SetItems (const Handle(StepAP214_HArray1OfAutoDesignGroupedItem)& aItems) ;
  
  Standard_EXPORT   Handle(StepAP214_HArray1OfAutoDesignGroupedItem) Items()  const;
  
  Standard_EXPORT   StepAP214_AutoDesignGroupedItem ItemsValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbItems()  const;




  DEFINE_STANDARD_RTTI(StepAP214_AutoDesignGroupAssignment)

protected:




private: 


  Handle(StepAP214_HArray1OfAutoDesignGroupedItem) items;


};







#endif // _StepAP214_AutoDesignGroupAssignment_HeaderFile
