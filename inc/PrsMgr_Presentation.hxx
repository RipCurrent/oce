// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PrsMgr_Presentation_HeaderFile
#define _PrsMgr_Presentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_PrsMgr_Presentation.hxx>

#include <Handle_PrsMgr_PresentationManager.hxx>
#include <Handle_PrsMgr_Prs.hxx>
#include <PrsMgr_PresentableObjectPointer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_PrsMgr_PresentableObject.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Handle_Geom_Transformation.hxx>
#include <Quantity_Length.hxx>
#include <Handle_Prs3d_ShadingAspect.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Handle_Graphic3d_Structure.hxx>
#include <Handle_Graphic3d_DataStructureManager.hxx>
#include <Handle_Prs3d_Projector.hxx>
class PrsMgr_PresentationManager;
class PrsMgr_Prs;
class PrsMgr_PresentableObject;
class Geom_Transformation;
class Prs3d_ShadingAspect;
class Prs3d_Presentation;
class Graphic3d_Structure;
class Graphic3d_DataStructureManager;
class Prs3d_Projector;



class PrsMgr_Presentation : public MMgt_TShared
{

public:

  
  //! Destructor
  Standard_EXPORT virtual   void Destroy() ;
~PrsMgr_Presentation()
{
  Destroy();
}
  
     const  Handle(Prs3d_Presentation)& Presentation()  const;
  
  //! returns the PresentationManager in which the presentation has been created.
     const  Handle(PrsMgr_PresentationManager)& PresentationManager()  const;
  
      void SetUpdateStatus (const Standard_Boolean theStat) ;
  
      Standard_Boolean MustBeUpdated()  const;

friend class PrsMgr_PresentationManager;
friend class PrsMgr_PresentableObject;
friend class PrsMgr_Prs;


  DEFINE_STANDARD_RTTI(PrsMgr_Presentation)

protected:




private: 

  
  Standard_EXPORT PrsMgr_Presentation(const Handle(PrsMgr_PresentationManager)& thePresentationManager, const Handle(PrsMgr_PresentableObject)& thePresentableObject);
  
  Standard_EXPORT virtual   void Display() ;
  
  //! Displays myStructure.
  Standard_EXPORT   void Display (const Standard_Boolean theIsHighlight) ;
  
  Standard_EXPORT virtual   void Erase() ;
  
  Standard_EXPORT virtual   void SetVisible (const Standard_Boolean theValue) ;
  
  Standard_EXPORT virtual   void Highlight() ;
  
  Standard_EXPORT virtual   void Unhighlight()  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsHighlighted()  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsDisplayed()  const;
  
  Standard_EXPORT virtual   Standard_Integer DisplayPriority()  const;
  
  Standard_EXPORT virtual   void SetDisplayPriority (const Standard_Integer aNewPrior) ;
  
  //! Set Z layer ID for the presentation
  Standard_EXPORT virtual   void SetZLayer (const Standard_Integer theLayerId) ;
  
  //! Get Z layer ID for the presentation
  Standard_EXPORT virtual   Standard_Integer GetZLayer()  const;
  
  //! removes the whole content of the presentation.
  //! Does not remove the other connected presentations.
  Standard_EXPORT virtual   void Clear() ;
  
  Standard_EXPORT virtual   void Color (const Quantity_NameOfColor theColor) ;
  
  Standard_EXPORT   void BoundBox()  const;
  
  Standard_EXPORT   void Connect (const Handle(PrsMgr_Presentation)& theOther)  const;
  
  Standard_EXPORT   void Transform (const Handle(Geom_Transformation)& theTrsf)  const;
  
  Standard_EXPORT   void Place (const Quantity_Length theX, const Quantity_Length theY, const Quantity_Length theZ)  const;
  
  Standard_EXPORT   void Multiply (const Handle(Geom_Transformation)& theTrsf)  const;
  
  Standard_EXPORT   void Move (const Quantity_Length theX, const Quantity_Length theY, const Quantity_Length theZ)  const;
  
  Standard_EXPORT   void SetShadingAspect (const Handle(Prs3d_ShadingAspect)& theShadingAspect)  const;
  
  Standard_EXPORT   void Compute (const Handle(Graphic3d_Structure)& theStructure) ;
  
  Standard_EXPORT   Handle(Graphic3d_Structure) Compute (const Handle(Graphic3d_DataStructureManager)& theProjector) ;
  
  Standard_EXPORT   Handle(Graphic3d_Structure) Compute (const Handle(Graphic3d_DataStructureManager)& theProjector, const Handle(Geom_Transformation)& theTrsf) ;
  
  Standard_EXPORT   void Compute (const Handle(Graphic3d_DataStructureManager)& theProjector, const Handle(Graphic3d_Structure)& theGivenStruct) ;
  
  Standard_EXPORT   void Compute (const Handle(Graphic3d_DataStructureManager)& theProjector, const Handle(Geom_Transformation)& theTrsf, const Handle(Graphic3d_Structure)& theGivenStruct) ;
  
  Standard_EXPORT static   Handle(Prs3d_Projector) Projector (const Handle(Graphic3d_DataStructureManager)& theProjector) ;

  Handle(PrsMgr_PresentationManager) myPresentationManager;
  Handle(PrsMgr_Prs) myStructure;
  PrsMgr_PresentableObjectPointer myPresentableObject;
  Standard_Boolean myMustBeUpdated;
  Standard_Integer myBeforeHighlightState;


};


#include <PrsMgr_Presentation.lxx>





#endif // _PrsMgr_Presentation_HeaderFile
