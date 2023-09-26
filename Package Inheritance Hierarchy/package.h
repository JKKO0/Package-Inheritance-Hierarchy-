//Package.h 12/25/2021
#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
using std::string;


class Package {
private:

string senderName;
string senderAddress;
string senderCity;
string senderState;
string senderZIP;

string recipientName;
string recipientAddress;
string recipientCity;
string recipientState;
string recipientZIP;

double weight;
double costPerOunce;

public:
Package(string sender_n, string sender_addr,string scity,string sstate,string sZip, string recipient_n, string recipient_addr,
string rcity,string rstate,string rZip, double wei,double cost);

void setsenderName(string sender_n);
string getsenderName();

void setsenderAddress(string sender_addr);
string getsenderAddress();

void setsenderCity(string scity);
string getSendCity();

void setsenderState(string sstate);
string getsenderState();

void setsenderZIP(string sZip);
string getsenderZIP();

void setrecipientName(string recipient_n);
string getrecipientName();

void setrecipientAddress(string recipient_addr);
string getrecipientAddress();

void setrecipientCity(string rcity);
string getrecipientCity();

void setrecipientState(string rstate);
string getrecipientState();

void setrecipientZIP(string rZip);
string getrecipientZIP();

void setweight(double w);
double getweight();

void setcostperounce(double cost);
double getcostperounce();

virtual double calculateCost();
};


#endif


