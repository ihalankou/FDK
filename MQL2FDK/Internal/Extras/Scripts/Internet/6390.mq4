//+------------------------------------------------------------------+
//|                                                                  |
//|                      Copyright © 2010,                           |
//|                                                                  |
//+------------------------------------------------------------------+
#property copyright " www.Forexyangu.com"
#property link      "http://www.metaquotes.net"

//+------------------------------------------------------------------+
//| expert initialization function                                   |
//+------------------------------------------------------------------+
/*****************************************************-----READ THIS-------******************************************************
 *******************************************************************************************************************************/
 //-----------------------------------------------------------------------------------------------------------------------------
/*DONATE TO SUPPORT MY FREE PROJECTS AND TO RECEIVE NON OPEN PROJECTS AND ADVANCED VERSIONS OF EXISTING PROJECTS WHEN AVAILABLE: 
//------------------------------------------------------------------------------------------------------------------------------
__my moneybookers email is admin@forexyangu.com anyone can easily join moneybookers and pay people via their email
through numerous payment methods__*/
//------------------------------------------------------------------------------------------------------------------------------
//SUPPORT AND INQUIRIES EMAIL:        admin@forexyangu.com
//------------------------------------------------------------------------------------------------------------------------------
/*******************************************************************************************************************************
 *************************************************--------END------*************************************************************/
 
 
 

//+------------------------------------------------------------------+
//| expert start function                                            |
//+------------------------------------------------------------------+


int start()
  {
  //alert criteria
   
 if ((iSAR(NULL, 0, 0.02, 0.2, 0)<iClose(NULL,0,0))&&(iSAR(NULL, 0, 0.02, 0.2, 1)>iClose(NULL,0,1))) //Signal Buy
 {

   
   PlaySound("alert.wav");
     // Alarm
 
 }
 if ((iSAR(NULL, 0, 0.02, 0.2, 0)>iClose(NULL,0,0))&&(iSAR(NULL, 0, 0.02, 0.2, 1)<iClose(NULL,0,1))) //Signal Sell
 {

   
   PlaySound("alert.wav");
      // Alarm 
 

 }




//----------
return(0);
  }