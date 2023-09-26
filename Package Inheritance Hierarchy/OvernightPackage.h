// OvernightPackage.h 12/25/2021

#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include "package.h"

class OvernightPackage : public Package {
private:
double additionalCostPerOunce;
public:
OvernightPackage(string sender_n, string sender_addr,string scity,string sstate,string sZip, string recipient_n, string recipient_addr,string rcity,string rstate,string rZip, double wei,double cost,double flatFee);
virtual double calculateCost();
double getAdditionalCostPerOunce();
void setAdditionalCostPerOunce(double delivery_fee);
};

#endif


