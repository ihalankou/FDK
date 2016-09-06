﻿namespace DataTradeExamples
{
    class Program
    {
        static void Main()
        {
            var address = "tp.dev.soft-fx.eu";
            var username = "5";
            var password = "123qwe!";

            var example = new AccountInfoExample(address, username, password);

            //var example = new SendLimitOrderExample(address, username, password);
            //var example = new SendMarketOrderExample(address, username, password);
            //var example = new SendStopOrderExample(address, username, password);
            //var example = new CloseAllPositionsExample(address, username, password);
            //var example = new ClosePositionExample(address, username, password);
            //var example = new ClosePartiallyPositionExample(address, username, password);
            //var example = new DeletePendingOrderExample(address, username, password);
            //var example = new GetOrdersExample(address, username, password);
            //var example = new GetTradeTransactionReportsExample(address, username, password);
            //var example = new ModifyTradeRecordExample(address, username, password);
            //var example = new CloseByExample(address, username, password);

            using (example)
            {
                example.Run();
            }
        }
    }
}
