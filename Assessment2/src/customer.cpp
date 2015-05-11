#include "customer.h"

    // Note the customer is only allowed to have one dvd copy.
    static const int    RENTLIMIT = 10,
                        MaxPin = 5;


customer::customer(string FName, string LName, string NewAddress, int Phone, string pin, bool isStaff)
{
    FirstName = FName;
    LastName = LName;
    Address = NewAddress;
    PhoneNumber = Phone;
    staff = isStaff;

    setUsername();
    setPassword(pin);
}

customer::~customer()
{
    //dtor
}

void customer::setUsername() {
    Username += FirstName + LastName;
}

void customer::setPassword(string pin) {
    if (staff == true) {
        Password = "today123";
    } else {
            Password = pin;

    }
}

void customer::rentMovie(string Movie) {


}

void customer::unrentMovie(string Movie) {

}

void customer::displayRentedMovies() {
}

string customer::getFirstName() const {
    return FirstName;
}

string customer::getLastName() const{
    return LastName;
}

string customer::getAddress() const{
    return Address;
}

string customer::getUsername() const{
    return Username;
}

string customer::getPassword() const{
    return Password;
}

int customer::getPhoneNumber() const{
    return PhoneNumber;
}

bool customer::isStaff(){
    if (staff == true) {
        return true;
    }
    return false;
}


