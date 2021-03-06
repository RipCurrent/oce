// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeFix_WireVertex_HeaderFile
#define _ShapeFix_WireVertex_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <ShapeAnalysis_WireVertex.hxx>
#include <Standard_Real.hxx>
#include <Handle_ShapeExtend_WireData.hxx>
#include <Standard_Integer.hxx>
class TopoDS_Wire;
class ShapeExtend_WireData;
class ShapeAnalysis_WireVertex;


//! Fixing disconnected edges in the wire
//! Fixes vertices in the wire on the basis of pre-analysis
//! made by ShapeAnalysis_WireVertex (given as argument).
//! The Wire has formerly been loaded in a ShapeExtend_WireData.
class ShapeFix_WireVertex 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ShapeFix_WireVertex();
  
  //! Loads the wire, ininializes internal analyzer
  //! (ShapeAnalysis_WireVertex) with the given precision,
  //! and performs analysis
  Standard_EXPORT   void Init (const TopoDS_Wire& wire, const Standard_Real preci) ;
  
  //! Loads the wire, ininializes internal analyzer
  //! (ShapeAnalysis_WireVertex) with the given precision,
  //! and performs analysis
  Standard_EXPORT   void Init (const Handle(ShapeExtend_WireData)& sbwd, const Standard_Real preci) ;
  
  //! Loads all the data on wire, already analysed by
  //! ShapeAnalysis_WireVertex
  Standard_EXPORT   void Init (const ShapeAnalysis_WireVertex& sawv) ;
  
  //! returns internal analyzer
  Standard_EXPORT  const  ShapeAnalysis_WireVertex& Analyzer()  const;
  
  //! returns data on wire (fixed)
  Standard_EXPORT  const  Handle(ShapeExtend_WireData)& WireData()  const;
  
  //! returns resulting wire (fixed)
  Standard_EXPORT   TopoDS_Wire Wire()  const;
  
  //! Fixes "Same" or "Close" status (same vertex may be set,
  //! without changing parameters)
  //! Returns the count of fixed vertices, 0 if none
  Standard_EXPORT   Standard_Integer FixSame() ;
  
  //! Fixes all statuses except "Disjoined", i.e. the cases in which a
  //! common value has been set, with or without changing parameters
  //! Returns the count of fixed vertices, 0 if none
  Standard_EXPORT   Standard_Integer Fix() ;




protected:





private:



  ShapeAnalysis_WireVertex myAnalyzer;


};







#endif // _ShapeFix_WireVertex_HeaderFile
