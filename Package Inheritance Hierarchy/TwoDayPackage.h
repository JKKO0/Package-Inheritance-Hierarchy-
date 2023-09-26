// TwoDayPackage.h 12/25/2021
#ifndef TWODAY_H
#define TWODAY_H

#include "package.h"

class TwoDayPackage : public Package {
private:
double flatFee;
public:
TwoDayPackage(string sender_n, string sender_addr,string scity,string sstate,string sZip, string recipient_n, string recipient_addr,
string rcity,string rstate,string rZip, double wei,double cost,double flatFee);
double getFlatFee();
void setFlatFee(double flatFee);
virtual double calculateCost();
};

#endif

