#pragma once


class CFixExecutionReport : private FIX44::ExecutionReport
{
public:
	double GetFxExecutedVolume() const;
	Nullable<double> GetFxInitialVolume() const;
	double GetFxLeavesVolume() const;
	Nullable<double> GetFxTradeAmount() const;
	Nullable<double> GetFxAveragePrice() const;
	Nullable<double> GetFxPrice() const;
	Nullable<double> GetFxStopPrice() const;
	Nullable<double> GetFxTakeProfit() const;
	Nullable<double> GetFxStopLoss() const;
	double GetFxTradePrice() const;
	double GetFxBalance() const;
	double GetFxCommission() const;
	double GetFxAgentCommission() const;
	double GetFxSwap() const;
public:
	Nullable<CDateTime> GetFxExpiration() const;
	Nullable<CDateTime> GetCreatedDateTime() const;
	Nullable<CDateTime> GetModifiedDateTime() const;
public:
	std::string GetFxOrderId() const;
	std::string GetFxClientOrderId() const;
	std::string GetFxSymbol() const;
	std::string GetFxText() const;
	std::string GetFxClosePositionRequestId() const;
	std::string GetComment() const;
public:
	void GetAssets(vector<CAssetInfo>& assets) const;
public:
	FxExecutionType GetFxExecutionType() const;
	FxOrderStatus GetFxOrderStatus() const;
	FxTradeRecordSide GetFxSide() const;
	FxOrderType GetFxOrderType() const;
	FxRejectReason GetFxRejectReason() const;
public:
	int32 GetFxReportsNumber() const;
public:
	bool TryGetMassStatusRequestId(string& st) const;
};