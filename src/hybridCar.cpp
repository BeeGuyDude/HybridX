#include "hybridCar.h"

//Default constructor
HybridCar::HybridCar() {}

//Overridden Drive() method
std::string HybridCar::Drive() {
	return "Drive HybridCar";
}

//Overridden ChargeBattery() method from ElectricCar
std::string HybridCar::ChargeBattery() {
	return "ChargeBattery HybridCar";
}

//Overridden FuelEfficiency() method from GasolineCar
double HybridCar::FuelEfficiency() {
	return 10;
}

//Overridden Refuel() method from GasolineCar
std::string HybridCar::Refuel() {
	return "Refuel HybridCar";
}

//SwitchMode method unique to HybridCar
std::string HybridCar::SwitchMode() {
	return "SwitchMode HybridCar";
}
