//
// Created by Mya on 10/04/2023.
//

#ifndef SOM_SMART_ORDER_MANAGER_PERSON_H
#define SOM_SMART_ORDER_MANAGER_PERSON_H

#include <string>


class Person {

private:
    //Attributs
    std::string lastname;
    std::string firstname;
    std::string address;

public:
    //Constructeurs

    Person(const std::string &lastname, const std::string &firstname, const std::string &address);

    Person();

    //Destructeur

    virtual ~Person();

    //Setters

    void setLastname(const std::string &lastname);
    void setFirstname(const std::string &firstname);
    void setAddress(const std::string &address);

    //Getters

    const std::string &getLastname() const;
    const std::string &getFirstname() const;
    const std::string &getAddress() const;


};


#endif //SOM_SMART_ORDER_MANAGER_PERSON_H
