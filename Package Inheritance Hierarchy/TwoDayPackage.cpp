// TwoDayPackage.cpp 12/25/2021

#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(string sender_n, string sender_addr,string scity,string sstate,string sZip, string recipient_n, string recipient_addr,string rcity,string rstate,string rZip, double wei,double cost,double flatFee)
:Package(sender_n, sender_addr,scity,sstate,sZip, recipient_n, recipient_addr,rcity,rstate,rZip ,wei,cost)
{
setFlatFee(2.0);
}

double TwoDayPackage::getFlatFee()
{
return flatFee;
}
void TwoDayPackage::setFlatFee(double flat_fee)
{
this->flatFee = flat_fee;
}

double TwoDayPackage::calculateCost()
{
double result;

result = getFlatFee() * getweight() + (getweight() * getcostperounce());

return result;
}


