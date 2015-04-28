#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>


using namespace std;

class customer
{
    public:
        customer();
        virtual ~customer();


    private:
    // Note the customer is only allowed to have one dvd copy.
    const int RentLimit = 10;

    string  FName,
            LName,
            Address,
            rentingrecord[RentLimit];

    int phone;




};

#endif // CUSTOMER_H
