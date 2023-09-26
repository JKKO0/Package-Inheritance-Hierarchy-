// OvernightPackage.cpp 12/25/2021

#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(string sender_n, string sender_addr,string scity,string sstate,string sZip, string recipient_n, string recipient_addr,string rcity,string rstate,string rZip, double wei,double cost,double flatFee)

: Package(sender_n, sender_addr,scity,sstate,sZip, recipient_n, recipient_addr,rcity,rstate,rZip ,wei,cost)

{

setAdditionalCostPerOunce(5.0);

}

double OvernightPackage::getAdditionalCostPerOunce()

{

return additionalCostPerOunce;

}

void OvernightPackage::setAdditionalCostPerOunce(double delivery_fee)

{

additionalCostPerOunce = delivery_fee;

}

double OvernightPackage::calculateCost()

{

double result;

result = getAdditionalCostPerOunce() * getweight() + (getweight() * getcostperounce());

return result;

}




