#ifndef CUSTOMERCOLLECTION_H
#define CUSTOMERCOLLECTION_H
#include "customer.h"

using namespace std;

class customerCollection
{
    public:
        customerCollection();
        virtual ~customerCollection();



    void printCustomerList(const vector<customer>&);

    private:

        vector<customer> customerArchive;

        void addCustomers(vector<customer>&);
};

#endif // CUSTOMERCOLLECTION_H
