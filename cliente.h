#include <string>
using namespace std;
#ifndef CLIENTE_H
#define CLIENTE_H


class Cliente {
private:
    string Name;
    string Gmail;
    string PhoneNumber;
    string ID;

public:
    Cliente(string,string,string);
    string getName();
    string getGmail();
    string getPhoneNumber();
    string getID();
    
};
#endif
