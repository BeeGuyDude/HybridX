#include "electricCar.h"

//Default constructor
ElectricCar::ElectricCar() {};

//Overridden Drive() method
std::string ElectricCar::Drive() {
	return "Drive ElectricCar";	
}

//Overridden FuelEfficiency() method
double ElectricCar::FuelEfficiency() {
	return 10;
}

//Electric charging method
std::string ElectricCar::ChargeBattery() {
	return "ChargeBattery ElectricCar";
}
