//
// Created by Mya on 10/04/2023.
//

#ifndef SOM_SMART_ORDER_MANAGER_DRIVER_H
#define SOM_SMART_ORDER_MANAGER_DRIVER_H

#include <list>
#include <string>

#include "Person.h"


class Driver : public Person {

private:
    int driverId;
    std::list<std::string> driverTrip;

public:

    //Construteur

    Driver(const std::string &lastname, const std::string &firstname, const std::string &address, int driverId,
           const std::list<std::string> &driverTrip);

    Driver(const std::string &lastname, const std::string &firstname, const std::string &address);

    Driver(const std::string &lastname, const std::string &firstname, const std::string &address, int driverId);

    //Destructeur

    ~Driver() override;

    void addTrip(const std::string& Trip);
    void modifyTrip(const std::string& oldTrip, const std::string& newTrip);
    void deleteTrip(const std::string& Trip);


};


#endif //SOM_SMART_ORDER_MANAGER_DRIVER_H
