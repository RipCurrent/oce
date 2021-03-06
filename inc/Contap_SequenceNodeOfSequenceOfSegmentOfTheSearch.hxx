// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch_HeaderFile
#define _Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch.hxx>

#include <Contap_TheSegmentOfTheSearch.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class Contap_TheSegmentOfTheSearch;
class Contap_SequenceOfSegmentOfTheSearch;



class Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch : public TCollection_SeqNode
{

public:

  
    Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch(const Contap_TheSegmentOfTheSearch& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Contap_TheSegmentOfTheSearch& Value()  const;




  DEFINE_STANDARD_RTTI(Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch)

protected:




private: 


  Contap_TheSegmentOfTheSearch myValue;


};

#define SeqItem Contap_TheSegmentOfTheSearch
#define SeqItem_hxx <Contap_TheSegmentOfTheSearch.hxx>
#define TCollection_SequenceNode Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch
#define TCollection_SequenceNode_hxx <Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch.hxx>
#define Handle_TCollection_SequenceNode Handle_Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch
#define TCollection_SequenceNode_Type_() Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch_Type_()
#define TCollection_Sequence Contap_SequenceOfSegmentOfTheSearch
#define TCollection_Sequence_hxx <Contap_SequenceOfSegmentOfTheSearch.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch_HeaderFile
