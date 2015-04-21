#include "vehicle.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;
using std::endl;

Vehicle::Vehicle() {
    this->make = "Unknown";
    this->model = "Unknown";
    this->yearMade = -1;
    this->nrOfPassengers = -1;
}

Vehicle::Vehicle(string make, string model, int yearMade, int nrOfPassgengers) {
    this->make = make;
    this->model = model;
    this->yearMade = yearMade;
    this->nrOfPassengers = nrOfPassgengers;
}

Vehicle::~Vehicle() { std::cout << "Vehicle destructor; " << std::endl; }

string Vehicle::toString() {
    stringstream ss;
    ss << "Make: " << this->make << endl;
    ss << "Model: " << this->model << endl;
    ss << "Year made: " << this->yearMade << endl;
    ss << "Number of passengers: " << this->nrOfPassengers << endl;

    return ss.str();
}



/* GETTERS AND SETTERS */
void Vehicle::setMake(string make) { this->make = make; }
string Vehicle::getMake() const { return this->make; }
void Vehicle::setModel(string model) { this->model = model; }
string Vehicle::getModel() const { return this->model; }
void Vehicle::setYearMade(int yearMade) { this->yearMade = yearMade; }
int Vehicle::getYearMade() const { return this->yearMade; }
void Vehicle::setNrOfPassengers(int nrOfPassengers) { this->nrOfPassengers = nrOfPassengers; }
int Vehicle::getNrOfPassengers() const { return this->nrOfPassengers; }






