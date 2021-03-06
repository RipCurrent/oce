// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TransferBRep_HSequenceOfTransferResultInfo_HeaderFile
#define _TransferBRep_HSequenceOfTransferResultInfo_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TransferBRep_HSequenceOfTransferResultInfo.hxx>

#include <TransferBRep_SequenceOfTransferResultInfo.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_TransferBRep_TransferResultInfo.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TransferBRep_TransferResultInfo;
class TransferBRep_SequenceOfTransferResultInfo;



class TransferBRep_HSequenceOfTransferResultInfo : public MMgt_TShared
{

public:

  
    TransferBRep_HSequenceOfTransferResultInfo();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(TransferBRep_TransferResultInfo)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(TransferBRep_HSequenceOfTransferResultInfo)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(TransferBRep_TransferResultInfo)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(TransferBRep_HSequenceOfTransferResultInfo)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(TransferBRep_TransferResultInfo)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(TransferBRep_HSequenceOfTransferResultInfo)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(TransferBRep_TransferResultInfo)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(TransferBRep_HSequenceOfTransferResultInfo)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(TransferBRep_HSequenceOfTransferResultInfo) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(TransferBRep_TransferResultInfo)& anItem) ;
  
  Standard_EXPORT  const  Handle(TransferBRep_TransferResultInfo)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(TransferBRep_TransferResultInfo)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  TransferBRep_SequenceOfTransferResultInfo& Sequence()  const;
  
      TransferBRep_SequenceOfTransferResultInfo& ChangeSequence() ;
  
  Standard_EXPORT   Handle(TransferBRep_HSequenceOfTransferResultInfo) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(TransferBRep_HSequenceOfTransferResultInfo)

protected:




private: 


  TransferBRep_SequenceOfTransferResultInfo mySequence;


};

#define Item Handle(TransferBRep_TransferResultInfo)
#define Item_hxx <TransferBRep_TransferResultInfo.hxx>
#define TheSequence TransferBRep_SequenceOfTransferResultInfo
#define TheSequence_hxx <TransferBRep_SequenceOfTransferResultInfo.hxx>
#define TCollection_HSequence TransferBRep_HSequenceOfTransferResultInfo
#define TCollection_HSequence_hxx <TransferBRep_HSequenceOfTransferResultInfo.hxx>
#define Handle_TCollection_HSequence Handle_TransferBRep_HSequenceOfTransferResultInfo
#define TCollection_HSequence_Type_() TransferBRep_HSequenceOfTransferResultInfo_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(TransferBRep_HSequenceOfTransferResultInfo) ShallowCopy(const Handle(TransferBRep_HSequenceOfTransferResultInfo)& me) {
 return me->ShallowCopy();
}



#endif // _TransferBRep_HSequenceOfTransferResultInfo_HeaderFile
