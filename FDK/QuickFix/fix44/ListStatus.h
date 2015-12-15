#ifndef FIX44_LISTSTATUS_H
#define FIX44_LISTSTATUS_H

#include "Message.h"

namespace FIX44
{

  class ListStatus : public Message
  {
  public:
    ListStatus() : Message(MsgType()) {}
    ListStatus(const FIX::Message& m) : Message(m) {}
    ListStatus(const Message& m) : Message(m) {}
    ListStatus(const ListStatus& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("N"); }

    ListStatus(
      const FIX::ListID& aListID,
      const FIX::ListStatusType& aListStatusType,
      const FIX::NoRpts& aNoRpts,
      const FIX::ListOrderStatus& aListOrderStatus,
      const FIX::RptSeq& aRptSeq,
      const FIX::TotNoOrders& aTotNoOrders )
    : Message(MsgType())
    {
      set(aListID);
      set(aListStatusType);
      set(aNoRpts);
      set(aListOrderStatus);
      set(aRptSeq);
      set(aTotNoOrders);
    }

    FIELD_SET(*this, FIX::ListID);
    FIELD_SET_EX(std::string, ListID);
    FIELD_SET(*this, FIX::ListStatusType);
    FIELD_SET_EX(int, ListStatusType);
    FIELD_SET(*this, FIX::NoRpts);
    FIELD_SET_EX(int, NoRpts);
    FIELD_SET(*this, FIX::ListOrderStatus);
    FIELD_SET_EX(int, ListOrderStatus);
    FIELD_SET(*this, FIX::RptSeq);
    FIELD_SET_EX(int, RptSeq);
    FIELD_SET(*this, FIX::ListStatusText);
    FIELD_SET_EX(std::string, ListStatusText);
    FIELD_SET(*this, FIX::EncodedListStatusTextLen);
    FIELD_SET_EX(int, EncodedListStatusTextLen);
    FIELD_SET(*this, FIX::EncodedListStatusText);
    FIELD_SET_EX(std::string, EncodedListStatusText);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET_EX(FIX::UtcTimeStamp, TransactTime);
    FIELD_SET(*this, FIX::TotNoOrders);
    FIELD_SET_EX(int, TotNoOrders);
    FIELD_SET(*this, FIX::LastFragment);
    FIELD_SET_EX(bool, LastFragment);
    FIELD_SET(*this, FIX::NoOrders);
    FIELD_SET_EX(int, NoOrders);
    class NoOrders: public FIX::Group
    {
    public:
    NoOrders() : FIX::Group(73,11,FIX::message_order(11,526,14,39,636,151,84,6,103,58,354,355,0)) {}
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET_EX(std::string, ClOrdID);
      FIELD_SET(*this, FIX::SecondaryClOrdID);
      FIELD_SET_EX(std::string, SecondaryClOrdID);
      FIELD_SET(*this, FIX::CumQty);
      FIELD_SET_EX(double, CumQty);
      FIELD_SET(*this, FIX::OrdStatus);
      FIELD_SET_EX(char, OrdStatus);
      FIELD_SET(*this, FIX::WorkingIndicator);
      FIELD_SET_EX(bool, WorkingIndicator);
      FIELD_SET(*this, FIX::LeavesQty);
      FIELD_SET_EX(double, LeavesQty);
      FIELD_SET(*this, FIX::CxlQty);
      FIELD_SET_EX(double, CxlQty);
      FIELD_SET(*this, FIX::AvgPx);
      FIELD_SET_EX(double, AvgPx);
      FIELD_SET(*this, FIX::OrdRejReason);
      FIELD_SET_EX(int, OrdRejReason);
      FIELD_SET(*this, FIX::Text);
      FIELD_SET_EX(std::string, Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET_EX(int, EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
      FIELD_SET_EX(std::string, EncodedText);
    };
  };

}

#endif