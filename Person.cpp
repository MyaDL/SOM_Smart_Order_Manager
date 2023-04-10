//
// Created by Mya on 10/04/2023.
//

#include "Person.h"
#include <string>

using namespace std;

//Constructeurs

Person::Person(const string &lastname, const string &firstname, const string &address) : lastname(lastname),
                                                                                         firstname(firstname),
                                                                                         address(address) {}

Person::Person() {}

//Destructeur

Person::~Person() {

}

//Setters

void Person::setLastname(const string &lastname) {
    Person::lastname = lastname;
}

void Person::setFirstname(const string &firstname) {
    Person::firstname = firstname;
}

void Person::setAddress(const string &address) {
    Person::address = address;
}

//Getters

const string &Person::getLastname() const {
    return lastname;
}

const string &Person::getFirstname() const {
    return firstname;
}

const string &Person::getAddress() const {
    return address;
}






