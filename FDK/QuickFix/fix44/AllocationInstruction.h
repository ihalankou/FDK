#ifndef FIX44_ALLOCATIONINSTRUCTION_H
#define FIX44_ALLOCATIONINSTRUCTION_H

#include "Message.h"

namespace FIX44
{

  class AllocationInstruction : public Message
  {
  public:
    AllocationInstruction() : Message(MsgType()) {}
    AllocationInstruction(const FIX::Message& m) : Message(m) {}
    AllocationInstruction(const Message& m) : Message(m) {}
    AllocationInstruction(const AllocationInstruction& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("J"); }

    AllocationInstruction(
      const FIX::AllocID& aAllocID,
      const FIX::AllocTransType& aAllocTransType,
      const FIX::AllocType& aAllocType,
      const FIX::AllocNoOrdersType& aAllocNoOrdersType,
      const FIX::Side& aSide,
      const FIX::Quantity& aQuantity,
      const FIX::AvgPx& aAvgPx,
      const FIX::TradeDate& aTradeDate )
    : Message(MsgType())
    {
      set(aAllocID);
      set(aAllocTransType);
      set(aAllocType);
      set(aAllocNoOrdersType);
      set(aSide);
      set(aQuantity);
      set(aAvgPx);
      set(aTradeDate);
    }

    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET_EX(std::string, AllocID);
    FIELD_SET(*this, FIX::AllocTransType);
    FIELD_SET_EX(char, AllocTransType);
    FIELD_SET(*this, FIX::AllocType);
    FIELD_SET_EX(int, AllocType);
    FIELD_SET(*this, FIX::SecondaryAllocID);
    FIELD_SET_EX(std::string, SecondaryAllocID);
    FIELD_SET(*this, FIX::RefAllocID);
    FIELD_SET_EX(std::string, RefAllocID);
    FIELD_SET(*this, FIX::AllocCancReplaceReason);
    FIELD_SET_EX(int, AllocCancReplaceReason);
    FIELD_SET(*this, FIX::AllocIntermedReqType);
    FIELD_SET_EX(int, AllocIntermedReqType);
    FIELD_SET(*this, FIX::AllocLinkID);
    FIELD_SET_EX(std::string, AllocLinkID);
    FIELD_SET(*this, FIX::AllocLinkType);
    FIELD_SET_EX(int, AllocLinkType);
    FIELD_SET(*this, FIX::BookingRefID);
    FIELD_SET_EX(std::string, BookingRefID);
    FIELD_SET(*this, FIX::AllocNoOrdersType);
    FIELD_SET_EX(int, AllocNoOrdersType);
    FIELD_SET(*this, FIX::PreviouslyReported);
    FIELD_SET_EX(bool, PreviouslyReported);
    FIELD_SET(*this, FIX::ReversalIndicator);
    FIELD_SET_EX(bool, ReversalIndicator);
    FIELD_SET(*this, FIX::MatchType);
    FIELD_SET_EX(std::string, MatchType);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET_EX(char, Side);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET_EX(std::string, Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET_EX(std::string, SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET_EX(std::string, SecurityID);
    FIELD_SET(*this, FIX::SecurityIDSource);
    FIELD_SET_EX(std::string, SecurityIDSource);
    FIELD_SET(*this, FIX::Product);
    FIELD_SET_EX(int, Product);
    FIELD_SET(*this, FIX::CFICode);
    FIELD_SET_EX(std::string, CFICode);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET_EX(std::string, SecurityType);
    FIELD_SET(*this, FIX::SecuritySubType);
    FIELD_SET_EX(std::string, SecuritySubType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDate);
    FIELD_SET_EX(std::string, MaturityDate);
    FIELD_SET(*this, FIX::CouponPaymentDate);
    FIELD_SET_EX(std::string, CouponPaymentDate);
    FIELD_SET(*this, FIX::IssueDate);
    FIELD_SET_EX(std::string, IssueDate);
    FIELD_SET(*this, FIX::RepoCollateralSecurityType);
    FIELD_SET_EX(int, RepoCollateralSecurityType);
    FIELD_SET(*this, FIX::RepurchaseTerm);
    FIELD_SET_EX(int, RepurchaseTerm);
    FIELD_SET(*this, FIX::RepurchaseRate);
    FIELD_SET_EX(double, RepurchaseRate);
    FIELD_SET(*this, FIX::Factor);
    FIELD_SET_EX(double, Factor);
    FIELD_SET(*this, FIX::CreditRating);
    FIELD_SET_EX(std::string, CreditRating);
    FIELD_SET(*this, FIX::InstrRegistry);
    FIELD_SET_EX(std::string, InstrRegistry);
    FIELD_SET(*this, FIX::CountryOfIssue);
    FIELD_SET(*this, FIX::StateOrProvinceOfIssue);
    FIELD_SET_EX(std::string, StateOrProvinceOfIssue);
    FIELD_SET(*this, FIX::LocaleOfIssue);
    FIELD_SET_EX(std::string, LocaleOfIssue);
    FIELD_SET(*this, FIX::RedemptionDate);
    FIELD_SET_EX(std::string, RedemptionDate);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET_EX(double, StrikePrice);
    FIELD_SET(*this, FIX::StrikeCurrency);
    FIELD_SET_EX(std::string, StrikeCurrency);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET_EX(char, OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET_EX(double, ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET_EX(double, CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET_EX(std::string, Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET_EX(int, EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET_EX(std::string, EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET_EX(std::string, SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET_EX(int, EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET_EX(std::string, EncodedSecurityDesc);
    FIELD_SET(*this, FIX::Pool);
    FIELD_SET_EX(std::string, Pool);
    FIELD_SET(*this, FIX::ContractSettlMonth);
    FIELD_SET(*this, FIX::CPProgram);
    FIELD_SET_EX(int, CPProgram);
    FIELD_SET(*this, FIX::CPRegType);
    FIELD_SET_EX(std::string, CPRegType);
    FIELD_SET(*this, FIX::DatedDate);
    FIELD_SET_EX(std::string, DatedDate);
    FIELD_SET(*this, FIX::InterestAccrualDate);
    FIELD_SET_EX(std::string, InterestAccrualDate);
    FIELD_SET(*this, FIX::NoSecurityAltID);
    FIELD_SET_EX(int, NoSecurityAltID);
    class NoSecurityAltID: public FIX::Group
    {
    public:
    NoSecurityAltID() : FIX::Group(454,455,FIX::message_order(455,456,0)) {}
      FIELD_SET(*this, FIX::SecurityAltID);
      FIELD_SET_EX(std::string, SecurityAltID);
      FIELD_SET(*this, FIX::SecurityAltIDSource);
      FIELD_SET_EX(std::string, SecurityAltIDSource);
    };
    FIELD_SET(*this, FIX::NoEvents);
    FIELD_SET_EX(int, NoEvents);
    class NoEvents: public FIX::Group
    {
    public:
    NoEvents() : FIX::Group(864,865,FIX::message_order(865,866,867,868,0)) {}
      FIELD_SET(*this, FIX::EventType);
      FIELD_SET_EX(int, EventType);
      FIELD_SET(*this, FIX::EventDate);
      FIELD_SET_EX(std::string, EventDate);
      FIELD_SET(*this, FIX::EventPx);
      FIELD_SET_EX(double, EventPx);
      FIELD_SET(*this, FIX::EventText);
      FIELD_SET_EX(std::string, EventText);
    };
    FIELD_SET(*this, FIX::DeliveryForm);
    FIELD_SET_EX(int, DeliveryForm);
    FIELD_SET(*this, FIX::PctAtRisk);
    FIELD_SET_EX(double, PctAtRisk);
    FIELD_SET(*this, FIX::NoInstrAttrib);
    FIELD_SET_EX(int, NoInstrAttrib);
    class NoInstrAttrib: public FIX::Group
    {
    public:
    NoInstrAttrib() : FIX::Group(870,871,FIX::message_order(871,872,0)) {}
      FIELD_SET(*this, FIX::InstrAttribType);
      FIELD_SET_EX(int, InstrAttribType);
      FIELD_SET(*this, FIX::InstrAttribValue);
      FIELD_SET_EX(std::string, InstrAttribValue);
    };
    FIELD_SET(*this, FIX::AgreementDesc);
    FIELD_SET_EX(std::string, AgreementDesc);
    FIELD_SET(*this, FIX::AgreementID);
    FIELD_SET_EX(std::string, AgreementID);
    FIELD_SET(*this, FIX::AgreementDate);
    FIELD_SET_EX(std::string, AgreementDate);
    FIELD_SET(*this, FIX::AgreementCurrency);
    FIELD_SET_EX(std::string, AgreementCurrency);
    FIELD_SET(*this, FIX::TerminationType);
    FIELD_SET_EX(int, TerminationType);
    FIELD_SET(*this, FIX::StartDate);
    FIELD_SET_EX(std::string, StartDate);
    FIELD_SET(*this, FIX::EndDate);
    FIELD_SET_EX(std::string, EndDate);
    FIELD_SET(*this, FIX::DeliveryType);
    FIELD_SET_EX(int, DeliveryType);
    FIELD_SET(*this, FIX::MarginRatio);
    FIELD_SET_EX(double, MarginRatio);
    FIELD_SET(*this, FIX::Quantity);
    FIELD_SET_EX(double, Quantity);
    FIELD_SET(*this, FIX::QtyType);
    FIELD_SET_EX(int, QtyType);
    FIELD_SET(*this, FIX::LastMkt);
    FIELD_SET(*this, FIX::TradeOriginationDate);
    FIELD_SET_EX(std::string, TradeOriginationDate);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET_EX(std::string, TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
    FIELD_SET_EX(std::string, TradingSessionSubID);
    FIELD_SET(*this, FIX::PriceType);
    FIELD_SET_EX(int, PriceType);
    FIELD_SET(*this, FIX::AvgPx);
    FIELD_SET_EX(double, AvgPx);
    FIELD_SET(*this, FIX::AvgParPx);
    FIELD_SET_EX(double, AvgParPx);
    FIELD_SET(*this, FIX::Spread);
    FIELD_SET(*this, FIX::BenchmarkCurveCurrency);
    FIELD_SET_EX(std::string, BenchmarkCurveCurrency);
    FIELD_SET(*this, FIX::BenchmarkCurveName);
    FIELD_SET_EX(std::string, BenchmarkCurveName);
    FIELD_SET(*this, FIX::BenchmarkCurvePoint);
    FIELD_SET_EX(std::string, BenchmarkCurvePoint);
    FIELD_SET(*this, FIX::BenchmarkPrice);
    FIELD_SET_EX(double, BenchmarkPrice);
    FIELD_SET(*this, FIX::BenchmarkPriceType);
    FIELD_SET_EX(int, BenchmarkPriceType);
    FIELD_SET(*this, FIX::BenchmarkSecurityID);
    FIELD_SET_EX(std::string, BenchmarkSecurityID);
    FIELD_SET(*this, FIX::BenchmarkSecurityIDSource);
    FIELD_SET_EX(std::string, BenchmarkSecurityIDSource);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET_EX(std::string, Currency);
    FIELD_SET(*this, FIX::AvgPxPrecision);
    FIELD_SET_EX(int, AvgPxPrecision);
    FIELD_SET(*this, FIX::NoPartyIDs);
    FIELD_SET_EX(int, NoPartyIDs);
    class NoPartyIDs: public FIX::Group
    {
    public:
    NoPartyIDs() : FIX::Group(453,448,FIX::message_order(448,447,452,802,0)) {}
      FIELD_SET(*this, FIX::PartyID);
      FIELD_SET_EX(std::string, PartyID);
      FIELD_SET(*this, FIX::PartyIDSource);
      FIELD_SET_EX(char, PartyIDSource);
      FIELD_SET(*this, FIX::PartyRole);
      FIELD_SET_EX(int, PartyRole);
      FIELD_SET(*this, FIX::NoPartySubIDs);
      FIELD_SET_EX(int, NoPartySubIDs);
      class NoPartySubIDs: public FIX::Group
      {
      public:
      NoPartySubIDs() : FIX::Group(802,523,FIX::message_order(523,803,0)) {}
        FIELD_SET(*this, FIX::PartySubID);
        FIELD_SET_EX(std::string, PartySubID);
        FIELD_SET(*this, FIX::PartySubIDType);
        FIELD_SET_EX(int, PartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET_EX(std::string, TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET_EX(FIX::UtcTimeStamp, TransactTime);
    FIELD_SET(*this, FIX::SettlType);
    FIELD_SET_EX(std::string, SettlType);
    FIELD_SET(*this, FIX::SettlDate);
    FIELD_SET_EX(std::string, SettlDate);
    FIELD_SET(*this, FIX::BookingType);
    FIELD_SET_EX(int, BookingType);
    FIELD_SET(*this, FIX::GrossTradeAmt);
    FIELD_SET_EX(double, GrossTradeAmt);
    FIELD_SET(*this, FIX::Concession);
    FIELD_SET_EX(double, Concession);
    FIELD_SET(*this, FIX::TotalTakedown);
    FIELD_SET_EX(double, TotalTakedown);
    FIELD_SET(*this, FIX::NetMoney);
    FIELD_SET_EX(double, NetMoney);
    FIELD_SET(*this, FIX::PositionEffect);
    FIELD_SET_EX(char, PositionEffect);
    FIELD_SET(*this, FIX::AutoAcceptIndicator);
    FIELD_SET_EX(bool, AutoAcceptIndicator);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET_EX(std::string, Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET_EX(int, EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET_EX(std::string, EncodedText);
    FIELD_SET(*this, FIX::NumDaysInterest);
    FIELD_SET_EX(int, NumDaysInterest);
    FIELD_SET(*this, FIX::AccruedInterestRate);
    FIELD_SET_EX(double, AccruedInterestRate);
    FIELD_SET(*this, FIX::AccruedInterestAmt);
    FIELD_SET_EX(double, AccruedInterestAmt);
    FIELD_SET(*this, FIX::TotalAccruedInterestAmt);
    FIELD_SET_EX(double, TotalAccruedInterestAmt);
    FIELD_SET(*this, FIX::InterestAtMaturity);
    FIELD_SET_EX(double, InterestAtMaturity);
    FIELD_SET(*this, FIX::EndAccruedInterestAmt);
    FIELD_SET_EX(double, EndAccruedInterestAmt);
    FIELD_SET(*this, FIX::StartCash);
    FIELD_SET_EX(double, StartCash);
    FIELD_SET(*this, FIX::EndCash);
    FIELD_SET_EX(double, EndCash);
    FIELD_SET(*this, FIX::LegalConfirm);
    FIELD_SET_EX(bool, LegalConfirm);
    FIELD_SET(*this, FIX::NoStipulations);
    FIELD_SET_EX(int, NoStipulations);
    class NoStipulations: public FIX::Group
    {
    public:
    NoStipulations() : FIX::Group(232,233,FIX::message_order(233,234,0)) {}
      FIELD_SET(*this, FIX::StipulationType);
      FIELD_SET_EX(std::string, StipulationType);
      FIELD_SET(*this, FIX::StipulationValue);
      FIELD_SET_EX(std::string, StipulationValue);
    };
    FIELD_SET(*this, FIX::YieldType);
    FIELD_SET_EX(std::string, YieldType);
    FIELD_SET(*this, FIX::Yield);
    FIELD_SET_EX(double, Yield);
    FIELD_SET(*this, FIX::YieldCalcDate);
    FIELD_SET_EX(std::string, YieldCalcDate);
    FIELD_SET(*this, FIX::YieldRedemptionDate);
    FIELD_SET_EX(std::string, YieldRedemptionDate);
    FIELD_SET(*this, FIX::YieldRedemptionPrice);
    FIELD_SET_EX(double, YieldRedemptionPrice);
    FIELD_SET(*this, FIX::YieldRedemptionPriceType);
    FIELD_SET_EX(int, YieldRedemptionPriceType);
    FIELD_SET(*this, FIX::TotNoAllocs);
    FIELD_SET_EX(int, TotNoAllocs);
    FIELD_SET(*this, FIX::LastFragment);
    FIELD_SET_EX(bool, LastFragment);
    FIELD_SET(*this, FIX::NoOrders);
    FIELD_SET_EX(int, NoOrders);
    class NoOrders: public FIX::Group
    {
    public:
    NoOrders() : FIX::Group(73,11,FIX::message_order(11,37,198,526,66,756,38,799,800,0)) {}
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET_EX(std::string, ClOrdID);
      FIELD_SET(*this, FIX::OrderID);
      FIELD_SET_EX(std::string, OrderID);
      FIELD_SET(*this, FIX::SecondaryOrderID);
      FIELD_SET_EX(std::string, SecondaryOrderID);
      FIELD_SET(*this, FIX::SecondaryClOrdID);
      FIELD_SET_EX(std::string, SecondaryClOrdID);
      FIELD_SET(*this, FIX::ListID);
      FIELD_SET_EX(std::string, ListID);
      FIELD_SET(*this, FIX::NoNested2PartyIDs);
      FIELD_SET_EX(int, NoNested2PartyIDs);
      class NoNested2PartyIDs: public FIX::Group
      {
      public:
      NoNested2PartyIDs() : FIX::Group(756,757,FIX::message_order(757,758,759,806,0)) {}
        FIELD_SET(*this, FIX::Nested2PartyID);
        FIELD_SET_EX(std::string, Nested2PartyID);
        FIELD_SET(*this, FIX::Nested2PartyIDSource);
        FIELD_SET_EX(char, Nested2PartyIDSource);
        FIELD_SET(*this, FIX::Nested2PartyRole);
        FIELD_SET_EX(int, Nested2PartyRole);
        FIELD_SET(*this, FIX::NoNested2PartySubIDs);
        FIELD_SET_EX(int, NoNested2PartySubIDs);
        class NoNested2PartySubIDs: public FIX::Group
        {
        public:
        NoNested2PartySubIDs() : FIX::Group(806,760,FIX::message_order(760,807,0)) {}
          FIELD_SET(*this, FIX::Nested2PartySubID);
          FIELD_SET_EX(std::string, Nested2PartySubID);
          FIELD_SET(*this, FIX::Nested2PartySubIDType);
          FIELD_SET_EX(int, Nested2PartySubIDType);
        };
      };
      FIELD_SET(*this, FIX::OrderQty);
      FIELD_SET_EX(double, OrderQty);
      FIELD_SET(*this, FIX::OrderAvgPx);
      FIELD_SET_EX(double, OrderAvgPx);
      FIELD_SET(*this, FIX::OrderBookingQty);
      FIELD_SET_EX(double, OrderBookingQty);
    };
    FIELD_SET(*this, FIX::NoExecs);
    FIELD_SET_EX(int, NoExecs);
    class NoExecs: public FIX::Group
    {
    public:
    NoExecs() : FIX::Group(124,32,FIX::message_order(32,17,527,31,669,29,0)) {}
      FIELD_SET(*this, FIX::LastQty);
      FIELD_SET_EX(double, LastQty);
      FIELD_SET(*this, FIX::ExecID);
      FIELD_SET_EX(std::string, ExecID);
      FIELD_SET(*this, FIX::SecondaryExecID);
      FIELD_SET_EX(std::string, SecondaryExecID);
      FIELD_SET(*this, FIX::LastPx);
      FIELD_SET_EX(double, LastPx);
      FIELD_SET(*this, FIX::LastParPx);
      FIELD_SET_EX(double, LastParPx);
      FIELD_SET(*this, FIX::LastCapacity);
      FIELD_SET_EX(char, LastCapacity);
    };
    FIELD_SET(*this, FIX::NoUnderlyings);
    FIELD_SET_EX(int, NoUnderlyings);
    class NoUnderlyings: public FIX::Group
    {
    public:
    NoUnderlyings() : FIX::Group(711,311,FIX::message_order(311,312,309,305,457,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,0)) {}
      FIELD_SET(*this, FIX::UnderlyingSymbol);
      FIELD_SET_EX(std::string, UnderlyingSymbol);
      FIELD_SET(*this, FIX::UnderlyingSymbolSfx);
      FIELD_SET_EX(std::string, UnderlyingSymbolSfx);
      FIELD_SET(*this, FIX::UnderlyingSecurityID);
      FIELD_SET_EX(std::string, UnderlyingSecurityID);
      FIELD_SET(*this, FIX::UnderlyingSecurityIDSource);
      FIELD_SET_EX(std::string, UnderlyingSecurityIDSource);
      FIELD_SET(*this, FIX::UnderlyingProduct);
      FIELD_SET_EX(int, UnderlyingProduct);
      FIELD_SET(*this, FIX::UnderlyingCFICode);
      FIELD_SET_EX(std::string, UnderlyingCFICode);
      FIELD_SET(*this, FIX::UnderlyingSecurityType);
      FIELD_SET_EX(std::string, UnderlyingSecurityType);
      FIELD_SET(*this, FIX::UnderlyingSecuritySubType);
      FIELD_SET_EX(std::string, UnderlyingSecuritySubType);
      FIELD_SET(*this, FIX::UnderlyingMaturityMonthYear);
      FIELD_SET(*this, FIX::UnderlyingMaturityDate);
      FIELD_SET_EX(std::string, UnderlyingMaturityDate);
      FIELD_SET(*this, FIX::UnderlyingCouponPaymentDate);
      FIELD_SET_EX(std::string, UnderlyingCouponPaymentDate);
      FIELD_SET(*this, FIX::UnderlyingIssueDate);
      FIELD_SET_EX(std::string, UnderlyingIssueDate);
      FIELD_SET(*this, FIX::UnderlyingRepoCollateralSecurityType);
      FIELD_SET_EX(int, UnderlyingRepoCollateralSecurityType);
      FIELD_SET(*this, FIX::UnderlyingRepurchaseTerm);
      FIELD_SET_EX(int, UnderlyingRepurchaseTerm);
      FIELD_SET(*this, FIX::UnderlyingRepurchaseRate);
      FIELD_SET_EX(double, UnderlyingRepurchaseRate);
      FIELD_SET(*this, FIX::UnderlyingFactor);
      FIELD_SET_EX(double, UnderlyingFactor);
      FIELD_SET(*this, FIX::UnderlyingCreditRating);
      FIELD_SET_EX(std::string, UnderlyingCreditRating);
      FIELD_SET(*this, FIX::UnderlyingInstrRegistry);
      FIELD_SET_EX(std::string, UnderlyingInstrRegistry);
      FIELD_SET(*this, FIX::UnderlyingCountryOfIssue);
      FIELD_SET(*this, FIX::UnderlyingStateOrProvinceOfIssue);
      FIELD_SET_EX(std::string, UnderlyingStateOrProvinceOfIssue);
      FIELD_SET(*this, FIX::UnderlyingLocaleOfIssue);
      FIELD_SET_EX(std::string, UnderlyingLocaleOfIssue);
      FIELD_SET(*this, FIX::UnderlyingRedemptionDate);
      FIELD_SET_EX(std::string, UnderlyingRedemptionDate);
      FIELD_SET(*this, FIX::UnderlyingStrikePrice);
      FIELD_SET_EX(double, UnderlyingStrikePrice);
      FIELD_SET(*this, FIX::UnderlyingStrikeCurrency);
      FIELD_SET_EX(std::string, UnderlyingStrikeCurrency);
      FIELD_SET(*this, FIX::UnderlyingOptAttribute);
      FIELD_SET_EX(char, UnderlyingOptAttribute);
      FIELD_SET(*this, FIX::UnderlyingContractMultiplier);
      FIELD_SET_EX(double, UnderlyingContractMultiplier);
      FIELD_SET(*this, FIX::UnderlyingCouponRate);
      FIELD_SET_EX(double, UnderlyingCouponRate);
      FIELD_SET(*this, FIX::UnderlyingSecurityExchange);
      FIELD_SET(*this, FIX::UnderlyingIssuer);
      FIELD_SET_EX(std::string, UnderlyingIssuer);
      FIELD_SET(*this, FIX::EncodedUnderlyingIssuerLen);
      FIELD_SET_EX(int, EncodedUnderlyingIssuerLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingIssuer);
      FIELD_SET_EX(std::string, EncodedUnderlyingIssuer);
      FIELD_SET(*this, FIX::UnderlyingSecurityDesc);
      FIELD_SET_EX(std::string, UnderlyingSecurityDesc);
      FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDescLen);
      FIELD_SET_EX(int, EncodedUnderlyingSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDesc);
      FIELD_SET_EX(std::string, EncodedUnderlyingSecurityDesc);
      FIELD_SET(*this, FIX::UnderlyingCPProgram);
      FIELD_SET_EX(std::string, UnderlyingCPProgram);
      FIELD_SET(*this, FIX::UnderlyingCPRegType);
      FIELD_SET_EX(std::string, UnderlyingCPRegType);
      FIELD_SET(*this, FIX::UnderlyingCurrency);
      FIELD_SET_EX(std::string, UnderlyingCurrency);
      FIELD_SET(*this, FIX::UnderlyingQty);
      FIELD_SET_EX(double, UnderlyingQty);
      FIELD_SET(*this, FIX::UnderlyingPx);
      FIELD_SET_EX(double, UnderlyingPx);
      FIELD_SET(*this, FIX::UnderlyingDirtyPrice);
      FIELD_SET_EX(double, UnderlyingDirtyPrice);
      FIELD_SET(*this, FIX::UnderlyingEndPrice);
      FIELD_SET_EX(double, UnderlyingEndPrice);
      FIELD_SET(*this, FIX::UnderlyingStartValue);
      FIELD_SET_EX(double, UnderlyingStartValue);
      FIELD_SET(*this, FIX::UnderlyingCurrentValue);
      FIELD_SET_EX(double, UnderlyingCurrentValue);
      FIELD_SET(*this, FIX::UnderlyingEndValue);
      FIELD_SET_EX(double, UnderlyingEndValue);
      FIELD_SET(*this, FIX::NoUnderlyingSecurityAltID);
      FIELD_SET_EX(int, NoUnderlyingSecurityAltID);
      class NoUnderlyingSecurityAltID: public FIX::Group
      {
      public:
      NoUnderlyingSecurityAltID() : FIX::Group(457,458,FIX::message_order(458,459,0)) {}
        FIELD_SET(*this, FIX::UnderlyingSecurityAltID);
        FIELD_SET_EX(std::string, UnderlyingSecurityAltID);
        FIELD_SET(*this, FIX::UnderlyingSecurityAltIDSource);
        FIELD_SET_EX(std::string, UnderlyingSecurityAltIDSource);
      };
    };
    FIELD_SET(*this, FIX::NoLegs);
    FIELD_SET_EX(int, NoLegs);
    class NoLegs: public FIX::Group
    {
    public:
    NoLegs() : FIX::Group(555,600,FIX::message_order(600,601,602,603,604,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,0)) {}
      FIELD_SET(*this, FIX::LegSymbol);
      FIELD_SET_EX(std::string, LegSymbol);
      FIELD_SET(*this, FIX::LegSymbolSfx);
      FIELD_SET_EX(std::string, LegSymbolSfx);
      FIELD_SET(*this, FIX::LegSecurityID);
      FIELD_SET_EX(std::string, LegSecurityID);
      FIELD_SET(*this, FIX::LegSecurityIDSource);
      FIELD_SET_EX(std::string, LegSecurityIDSource);
      FIELD_SET(*this, FIX::LegProduct);
      FIELD_SET_EX(int, LegProduct);
      FIELD_SET(*this, FIX::LegCFICode);
      FIELD_SET_EX(std::string, LegCFICode);
      FIELD_SET(*this, FIX::LegSecurityType);
      FIELD_SET_EX(std::string, LegSecurityType);
      FIELD_SET(*this, FIX::LegSecuritySubType);
      FIELD_SET_EX(std::string, LegSecuritySubType);
      FIELD_SET(*this, FIX::LegMaturityMonthYear);
      FIELD_SET(*this, FIX::LegMaturityDate);
      FIELD_SET_EX(std::string, LegMaturityDate);
      FIELD_SET(*this, FIX::LegCouponPaymentDate);
      FIELD_SET_EX(std::string, LegCouponPaymentDate);
      FIELD_SET(*this, FIX::LegIssueDate);
      FIELD_SET_EX(std::string, LegIssueDate);
      FIELD_SET(*this, FIX::LegRepoCollateralSecurityType);
      FIELD_SET_EX(int, LegRepoCollateralSecurityType);
      FIELD_SET(*this, FIX::LegRepurchaseTerm);
      FIELD_SET_EX(int, LegRepurchaseTerm);
      FIELD_SET(*this, FIX::LegRepurchaseRate);
      FIELD_SET_EX(double, LegRepurchaseRate);
      FIELD_SET(*this, FIX::LegFactor);
      FIELD_SET_EX(double, LegFactor);
      FIELD_SET(*this, FIX::LegCreditRating);
      FIELD_SET_EX(std::string, LegCreditRating);
      FIELD_SET(*this, FIX::LegInstrRegistry);
      FIELD_SET_EX(std::string, LegInstrRegistry);
      FIELD_SET(*this, FIX::LegCountryOfIssue);
      FIELD_SET(*this, FIX::LegStateOrProvinceOfIssue);
      FIELD_SET_EX(std::string, LegStateOrProvinceOfIssue);
      FIELD_SET(*this, FIX::LegLocaleOfIssue);
      FIELD_SET_EX(std::string, LegLocaleOfIssue);
      FIELD_SET(*this, FIX::LegRedemptionDate);
      FIELD_SET_EX(std::string, LegRedemptionDate);
      FIELD_SET(*this, FIX::LegStrikePrice);
      FIELD_SET_EX(double, LegStrikePrice);
      FIELD_SET(*this, FIX::LegStrikeCurrency);
      FIELD_SET_EX(std::string, LegStrikeCurrency);
      FIELD_SET(*this, FIX::LegOptAttribute);
      FIELD_SET_EX(char, LegOptAttribute);
      FIELD_SET(*this, FIX::LegContractMultiplier);
      FIELD_SET_EX(double, LegContractMultiplier);
      FIELD_SET(*this, FIX::LegCouponRate);
      FIELD_SET_EX(double, LegCouponRate);
      FIELD_SET(*this, FIX::LegSecurityExchange);
      FIELD_SET(*this, FIX::LegIssuer);
      FIELD_SET_EX(std::string, LegIssuer);
      FIELD_SET(*this, FIX::EncodedLegIssuerLen);
      FIELD_SET_EX(int, EncodedLegIssuerLen);
      FIELD_SET(*this, FIX::EncodedLegIssuer);
      FIELD_SET_EX(std::string, EncodedLegIssuer);
      FIELD_SET(*this, FIX::LegSecurityDesc);
      FIELD_SET_EX(std::string, LegSecurityDesc);
      FIELD_SET(*this, FIX::EncodedLegSecurityDescLen);
      FIELD_SET_EX(int, EncodedLegSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedLegSecurityDesc);
      FIELD_SET_EX(std::string, EncodedLegSecurityDesc);
      FIELD_SET(*this, FIX::LegRatioQty);
      FIELD_SET_EX(double, LegRatioQty);
      FIELD_SET(*this, FIX::LegSide);
      FIELD_SET_EX(char, LegSide);
      FIELD_SET(*this, FIX::LegCurrency);
      FIELD_SET_EX(std::string, LegCurrency);
      FIELD_SET(*this, FIX::LegPool);
      FIELD_SET_EX(std::string, LegPool);
      FIELD_SET(*this, FIX::LegDatedDate);
      FIELD_SET_EX(std::string, LegDatedDate);
      FIELD_SET(*this, FIX::LegContractSettlMonth);
      FIELD_SET(*this, FIX::LegInterestAccrualDate);
      FIELD_SET_EX(std::string, LegInterestAccrualDate);
      FIELD_SET(*this, FIX::NoLegSecurityAltID);
      FIELD_SET_EX(std::string, NoLegSecurityAltID);
      class NoLegSecurityAltID: public FIX::Group
      {
      public:
      NoLegSecurityAltID() : FIX::Group(604,605,FIX::message_order(605,606,0)) {}
        FIELD_SET(*this, FIX::LegSecurityAltID);
        FIELD_SET_EX(std::string, LegSecurityAltID);
        FIELD_SET(*this, FIX::LegSecurityAltIDSource);
        FIELD_SET_EX(std::string, LegSecurityAltIDSource);
      };
    };
    FIELD_SET(*this, FIX::NoAllocs);
    FIELD_SET_EX(int, NoAllocs);
    class NoAllocs: public FIX::Group
    {
    public:
    NoAllocs() : FIX::Group(78,79,FIX::message_order(79,661,573,366,80,467,81,539,208,209,161,360,361,12,13,479,497,153,154,119,737,120,736,155,156,742,741,136,576,635,780,172,169,170,171,85,0)) {}
      FIELD_SET(*this, FIX::AllocAccount);
      FIELD_SET_EX(std::string, AllocAccount);
      FIELD_SET(*this, FIX::AllocAcctIDSource);
      FIELD_SET_EX(int, AllocAcctIDSource);
      FIELD_SET(*this, FIX::MatchStatus);
      FIELD_SET_EX(char, MatchStatus);
      FIELD_SET(*this, FIX::AllocPrice);
      FIELD_SET_EX(double, AllocPrice);
      FIELD_SET(*this, FIX::AllocQty);
      FIELD_SET_EX(double, AllocQty);
      FIELD_SET(*this, FIX::IndividualAllocID);
      FIELD_SET_EX(std::string, IndividualAllocID);
      FIELD_SET(*this, FIX::ProcessCode);
      FIELD_SET_EX(char, ProcessCode);
      FIELD_SET(*this, FIX::NoNestedPartyIDs);
      FIELD_SET_EX(int, NoNestedPartyIDs);
      class NoNestedPartyIDs: public FIX::Group
      {
      public:
      NoNestedPartyIDs() : FIX::Group(539,524,FIX::message_order(524,525,538,804,0)) {}
        FIELD_SET(*this, FIX::NestedPartyID);
        FIELD_SET_EX(std::string, NestedPartyID);
        FIELD_SET(*this, FIX::NestedPartyIDSource);
        FIELD_SET_EX(char, NestedPartyIDSource);
        FIELD_SET(*this, FIX::NestedPartyRole);
        FIELD_SET_EX(int, NestedPartyRole);
        FIELD_SET(*this, FIX::NoNestedPartySubIDs);
        FIELD_SET_EX(int, NoNestedPartySubIDs);
        class NoNestedPartySubIDs: public FIX::Group
        {
        public:
        NoNestedPartySubIDs() : FIX::Group(804,545,FIX::message_order(545,805,0)) {}
          FIELD_SET(*this, FIX::NestedPartySubID);
          FIELD_SET_EX(std::string, NestedPartySubID);
          FIELD_SET(*this, FIX::NestedPartySubIDType);
          FIELD_SET_EX(int, NestedPartySubIDType);
        };
      };
      FIELD_SET(*this, FIX::NotifyBrokerOfCredit);
      FIELD_SET_EX(bool, NotifyBrokerOfCredit);
      FIELD_SET(*this, FIX::AllocHandlInst);
      FIELD_SET_EX(int, AllocHandlInst);
      FIELD_SET(*this, FIX::AllocText);
      FIELD_SET_EX(std::string, AllocText);
      FIELD_SET(*this, FIX::EncodedAllocTextLen);
      FIELD_SET_EX(int, EncodedAllocTextLen);
      FIELD_SET(*this, FIX::EncodedAllocText);
      FIELD_SET_EX(std::string, EncodedAllocText);
      FIELD_SET(*this, FIX::Commission);
      FIELD_SET_EX(double, Commission);
      FIELD_SET(*this, FIX::CommType);
      FIELD_SET_EX(char, CommType);
      FIELD_SET(*this, FIX::CommCurrency);
      FIELD_SET_EX(std::string, CommCurrency);
      FIELD_SET(*this, FIX::FundRenewWaiv);
      FIELD_SET_EX(char, FundRenewWaiv);
      FIELD_SET(*this, FIX::AllocAvgPx);
      FIELD_SET_EX(double, AllocAvgPx);
      FIELD_SET(*this, FIX::AllocNetMoney);
      FIELD_SET_EX(double, AllocNetMoney);
      FIELD_SET(*this, FIX::SettlCurrAmt);
      FIELD_SET_EX(double, SettlCurrAmt);
      FIELD_SET(*this, FIX::AllocSettlCurrAmt);
      FIELD_SET_EX(double, AllocSettlCurrAmt);
      FIELD_SET(*this, FIX::SettlCurrency);
      FIELD_SET_EX(std::string, SettlCurrency);
      FIELD_SET(*this, FIX::AllocSettlCurrency);
      FIELD_SET_EX(std::string, AllocSettlCurrency);
      FIELD_SET(*this, FIX::SettlCurrFxRate);
      FIELD_SET_EX(double, SettlCurrFxRate);
      FIELD_SET(*this, FIX::SettlCurrFxRateCalc);
      FIELD_SET_EX(char, SettlCurrFxRateCalc);
      FIELD_SET(*this, FIX::AllocAccruedInterestAmt);
      FIELD_SET_EX(double, AllocAccruedInterestAmt);
      FIELD_SET(*this, FIX::AllocInterestAtMaturity);
      FIELD_SET_EX(double, AllocInterestAtMaturity);
      FIELD_SET(*this, FIX::ClearingFeeIndicator);
      FIELD_SET_EX(std::string, ClearingFeeIndicator);
      FIELD_SET(*this, FIX::AllocSettlInstType);
      FIELD_SET_EX(int, AllocSettlInstType);
      FIELD_SET(*this, FIX::SettlDeliveryType);
      FIELD_SET_EX(int, SettlDeliveryType);
      FIELD_SET(*this, FIX::StandInstDbType);
      FIELD_SET_EX(int, StandInstDbType);
      FIELD_SET(*this, FIX::StandInstDbName);
      FIELD_SET_EX(std::string, StandInstDbName);
      FIELD_SET(*this, FIX::StandInstDbID);
      FIELD_SET_EX(std::string, StandInstDbID);
      FIELD_SET(*this, FIX::NoDlvyInst);
      FIELD_SET_EX(int, NoDlvyInst);
      class NoDlvyInst: public FIX::Group
      {
      public:
      NoDlvyInst() : FIX::Group(85,165,FIX::message_order(165,787,781,0)) {}
        FIELD_SET(*this, FIX::SettlInstSource);
        FIELD_SET_EX(char, SettlInstSource);
        FIELD_SET(*this, FIX::DlvyInstType);
        FIELD_SET_EX(char, DlvyInstType);
        FIELD_SET(*this, FIX::NoSettlPartyIDs);
        FIELD_SET_EX(int, NoSettlPartyIDs);
        class NoSettlPartyIDs: public FIX::Group
        {
        public:
        NoSettlPartyIDs() : FIX::Group(781,782,FIX::message_order(782,783,784,801,0)) {}
          FIELD_SET(*this, FIX::SettlPartyID);
          FIELD_SET_EX(std::string, SettlPartyID);
          FIELD_SET(*this, FIX::SettlPartyIDSource);
          FIELD_SET_EX(char, SettlPartyIDSource);
          FIELD_SET(*this, FIX::SettlPartyRole);
          FIELD_SET_EX(int, SettlPartyRole);
          FIELD_SET(*this, FIX::NoSettlPartySubIDs);
          FIELD_SET_EX(int, NoSettlPartySubIDs);
          class NoSettlPartySubIDs: public FIX::Group
          {
          public:
          NoSettlPartySubIDs() : FIX::Group(801,785,FIX::message_order(785,786,0)) {}
            FIELD_SET(*this, FIX::SettlPartySubID);
            FIELD_SET_EX(std::string, SettlPartySubID);
            FIELD_SET(*this, FIX::SettlPartySubIDType);
            FIELD_SET_EX(int, SettlPartySubIDType);
          };
        };
      };
      FIELD_SET(*this, FIX::NoMiscFees);
      FIELD_SET_EX(int, NoMiscFees);
      class NoMiscFees: public FIX::Group
      {
      public:
      NoMiscFees() : FIX::Group(136,137,FIX::message_order(137,138,139,891,0)) {}
        FIELD_SET(*this, FIX::MiscFeeAmt);
        FIELD_SET_EX(double, MiscFeeAmt);
        FIELD_SET(*this, FIX::MiscFeeCurr);
        FIELD_SET_EX(std::string, MiscFeeCurr);
        FIELD_SET(*this, FIX::MiscFeeType);
        FIELD_SET_EX(std::string, MiscFeeType);
        FIELD_SET(*this, FIX::MiscFeeBasis);
        FIELD_SET_EX(int, MiscFeeBasis);
      };
      FIELD_SET(*this, FIX::NoClearingInstructions);
      FIELD_SET_EX(int, NoClearingInstructions);
      class NoClearingInstructions: public FIX::Group
      {
      public:
      NoClearingInstructions() : FIX::Group(576,577,FIX::message_order(577,0)) {}
        FIELD_SET(*this, FIX::ClearingInstruction);
        FIELD_SET_EX(int, ClearingInstruction);
      };
    };
  };

}

#endif
