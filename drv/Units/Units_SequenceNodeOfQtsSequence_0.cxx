// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Units_SequenceNodeOfQtsSequence.hxx>

#include <Standard_Type.hxx>

#include <Units_Quantity.hxx>
#include <Units_QtsSequence.hxx>

 


IMPLEMENT_STANDARD_TYPE(Units_SequenceNodeOfQtsSequence)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_SeqNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Units_SequenceNodeOfQtsSequence)


IMPLEMENT_DOWNCAST(Units_SequenceNodeOfQtsSequence,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Units_SequenceNodeOfQtsSequence)


#define SeqItem Handle(Units_Quantity)
#define SeqItem_hxx <Units_Quantity.hxx>
#define TCollection_SequenceNode Units_SequenceNodeOfQtsSequence
#define TCollection_SequenceNode_hxx <Units_SequenceNodeOfQtsSequence.hxx>
#define Handle_TCollection_SequenceNode Handle_Units_SequenceNodeOfQtsSequence
#define TCollection_SequenceNode_Type_() Units_SequenceNodeOfQtsSequence_Type_()
#define TCollection_Sequence Units_QtsSequence
#define TCollection_Sequence_hxx <Units_QtsSequence.hxx>
#include <TCollection_SequenceNode.gxx>

