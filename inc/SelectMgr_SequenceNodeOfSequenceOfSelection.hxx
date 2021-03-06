// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_SequenceNodeOfSequenceOfSelection_HeaderFile
#define _SelectMgr_SequenceNodeOfSequenceOfSelection_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_SelectMgr_SequenceNodeOfSequenceOfSelection.hxx>

#include <Handle_SelectMgr_Selection.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class SelectMgr_Selection;
class SelectMgr_SequenceOfSelection;



class SelectMgr_SequenceNodeOfSequenceOfSelection : public TCollection_SeqNode
{

public:

  
    SelectMgr_SequenceNodeOfSequenceOfSelection(const Handle(SelectMgr_Selection)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(SelectMgr_Selection)& Value()  const;




  DEFINE_STANDARD_RTTI(SelectMgr_SequenceNodeOfSequenceOfSelection)

protected:




private: 


  Handle(SelectMgr_Selection) myValue;


};

#define SeqItem Handle(SelectMgr_Selection)
#define SeqItem_hxx <SelectMgr_Selection.hxx>
#define TCollection_SequenceNode SelectMgr_SequenceNodeOfSequenceOfSelection
#define TCollection_SequenceNode_hxx <SelectMgr_SequenceNodeOfSequenceOfSelection.hxx>
#define Handle_TCollection_SequenceNode Handle_SelectMgr_SequenceNodeOfSequenceOfSelection
#define TCollection_SequenceNode_Type_() SelectMgr_SequenceNodeOfSequenceOfSelection_Type_()
#define TCollection_Sequence SelectMgr_SequenceOfSelection
#define TCollection_Sequence_hxx <SelectMgr_SequenceOfSelection.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _SelectMgr_SequenceNodeOfSequenceOfSelection_HeaderFile
