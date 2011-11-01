// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TransferBRep_OrientedShapeMapper_HeaderFile
#define _TransferBRep_OrientedShapeMapper_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TransferBRep_OrientedShapeMapper_HeaderFile
#include <Handle_TransferBRep_OrientedShapeMapper.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Transfer_Finder_HeaderFile
#include <Transfer_Finder.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Transfer_Finder_HeaderFile
#include <Handle_Transfer_Finder.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class TopoDS_Shape;
class TopTools_OrientedShapeMapHasher;
class TransferBRep_ShapeInfo;
class Transfer_Finder;
class Standard_Type;



class TransferBRep_OrientedShapeMapper : public Transfer_Finder {

public:

  
  Standard_EXPORT   TransferBRep_OrientedShapeMapper(const TopoDS_Shape& akey);
  
  Standard_EXPORT    const TopoDS_Shape& Value() const;
  
  Standard_EXPORT     Standard_Boolean Equates(const Handle(Transfer_Finder)& other) const;
  
  Standard_EXPORT   virtual  Handle_Standard_Type ValueType() const;
  
  Standard_EXPORT   virtual  Standard_CString ValueTypeName() const;




  DEFINE_STANDARD_RTTI(TransferBRep_OrientedShapeMapper)

protected:




private: 


TopoDS_Shape theval;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif