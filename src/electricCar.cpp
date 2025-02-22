#include "electricCar.h"

//Default constructor
ElectricCar::ElectricCar() {};

//Overridden Drive() method
std::string ElectricCar::Drive() override {
	return "Drive ElectricCar";	
}

//Electric charging method
std::string ElectricCar::ChargeBattery() {
	return "ChargeBattery ElectricCar";
}
