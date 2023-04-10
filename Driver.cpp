//
// Created by Mya on 10/04/2023.
//

#include <list>
#include <string>

#include "Driver.h"


//Constructeurs

Driver::Driver(const std::string &lastname, const std::string &firstname, const std::string &address, int driverId,
               const std::list<std::string> &driverTrip) : Person(lastname, firstname, address), driverId(driverId),
                                                           driverTrip(driverTrip) {}

Driver::Driver(const std::string &lastname, const std::string &firstname, const std::string &address) : Person(lastname,
                                                                                                               firstname,
                                                                                                               address) {}

Driver::Driver(const std::string &lastname, const std::string &firstname, const std::string &address, int driverId)
        : Person(lastname, firstname, address), driverId(driverId) {}


//Destructeur

Driver::~Driver() {

}

//Ajouter un trajet

void Driver::addTrip(const std::string& Trip)
{
    Driver::driverTrip.push_back(Trip);
}

//Modifier un trajet

void Driver::modifyTrip(const std::string &oldTrip, const std::string &newTrip)
{
    for(auto it = driverTrip.begin(); it != driverTrip.end(); ++it)
    {
        if(*it == oldTrip)
        {
            *it == newTrip;
            return;
        }
    }
}

//Supprimer Trajet

void Driver::deleteTrip(const std::string &Trip)
{
    driverTrip.remove(Trip);
}


