//Package.cpp 12/25/2021
#include "package.h"

Package::Package(string sender_n, string sender_addr,string scity,string sstate,string sZip, string recipient_n, string recipient_addr,
string rcity,string rstate,string rZip, double wei,double cost)

{
senderName = sender_n;
senderAddress = sender_addr;
senderCity = scity;
senderState = sstate;
senderZIP = sZip;
  
recipientName = recipient_n;
recipientAddress = recipient_addr;
recipientCity = rcity;
recipientState = rstate;
recipientZIP = rZip;

costPerOunce = 0.5;
if (wei > 0.0) {
weight = wei;
}
else {
weight = 0.0;
}

}
void Package::setsenderName(string sender_n)
{
senderName = sender_n;
}
string Package::getsenderName()
{
return senderName;
}


void Package::setsenderAddress(string sender_addr)
{
senderAddress = sender_addr;
}
string Package::getsenderAddress()
{
return senderAddress;
}


void Package::setsenderCity(string scity)
{
senderCity = scity;
}
string Package::getSendCity()
{
return senderCity;
}


void Package::setsenderState(string sstate)
{
senderState = sstate;
}
string Package::getsenderState()
{
return senderState;
}


void Package::setsenderZIP(string sZip)
{
senderZIP = sZip;
}
string Package::getsenderZIP()
{
return senderZIP;
}


void Package::setrecipientName(string recipient_n)
{
recipientName = recipient_n;
}
string Package::getrecipientName()
{
return recipientName;
}


void Package::setrecipientAddress(string recipient_addr)
{
recipientAddress = recipient_addr;
}
string Package::getrecipientAddress()
{
return recipientAddress;
}

void Package::setrecipientCity(string rcity)
{
recipientCity = rcity;
}
string Package::getrecipientCity()
{
return recipientCity;
}

void Package::setrecipientState(string rstate)
{
recipientState = rstate;
}
string Package::getrecipientState()
{
return recipientState;
}


void Package::setrecipientZIP(string rZip)
{
recipientZIP = rZip;
}
string Package::getrecipientZIP()
{
return recipientZIP;
}


void Package::setweight(double w)
{
weight = (w < 0.0) ? 0.0 : w;
}
double Package::getweight()
{
return weight;
}
void Package::setcostperounce(double cost)
{
costPerOunce = (cost < 0.0) ? 0.0 : cost;
}
double Package::getcostperounce()
{
return costPerOunce;
}
double Package::calculateCost()
{
double result;
result = weight * costPerOunce;
return result;
}




