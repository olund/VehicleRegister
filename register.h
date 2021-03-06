#ifndef REGISTER_H
#define REGISTER_H

#include "myvector.h"
#include "vehicle.h"
#include "filehandler.h"
#include "vehicle.h"
#include "boat.h"
#include "motorcycle.h"
#include "sailboat.h"

class Register
{
public:
    Register();
    ~Register();


    MyVector<Vehicle>& getVehicles() const;
    //MyVector<Vehicle>& getVehicles();

    FileHandler<Vehicle>& getFileHandler() const;

    int findVehicle(string el) const;

private:
    MyVector<Vehicle> *vehicles;
    FileHandler<Vehicle> *fileHandler;


};

#endif // REGISTER_H
