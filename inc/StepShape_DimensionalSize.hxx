// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_DimensionalSize_HeaderFile
#define _StepShape_DimensionalSize_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepShape_DimensionalSize.hxx>

#include <Handle_StepRepr_ShapeAspect.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <MMgt_TShared.hxx>
class StepRepr_ShapeAspect;
class TCollection_HAsciiString;


//! Representation of STEP entity DimensionalSize
class StepShape_DimensionalSize : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepShape_DimensionalSize();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepRepr_ShapeAspect)& aAppliesTo, const Handle(TCollection_HAsciiString)& aName) ;
  
  //! Returns field AppliesTo
  Standard_EXPORT   Handle(StepRepr_ShapeAspect) AppliesTo()  const;
  
  //! Set field AppliesTo
  Standard_EXPORT   void SetAppliesTo (const Handle(StepRepr_ShapeAspect)& AppliesTo) ;
  
  //! Returns field Name
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  //! Set field Name
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& Name) ;




  DEFINE_STANDARD_RTTI(StepShape_DimensionalSize)

protected:




private: 


  Handle(StepRepr_ShapeAspect) theAppliesTo;
  Handle(TCollection_HAsciiString) theName;


};







#endif // _StepShape_DimensionalSize_HeaderFile
