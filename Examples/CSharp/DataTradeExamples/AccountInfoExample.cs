﻿namespace DataTradeExamples
{
    using System;
    using SoftFX.Extended;

    class AccountInfoExample : Example
    {
        public AccountInfoExample(string address, string username, string password)
            : base(address, username, password)
        {
        }

        protected override void RunExample()
        {
            while (true)
            {
                var info = this.Trade.Cache.AccountInfo;
                Console.WriteLine(info);
                System.Threading.Thread.Sleep(1000);
            }
        }
    }
}
