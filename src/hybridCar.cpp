#include "hybridCar.h"

//Default constructor
HybridCar::HybridCar() {}

//Overridden Drive() method
std::string HybridCar::Drive() override {
	return "Drive HybridCar";
}

//Overridden ChargeBattery() method from ElectricCar
std::string HybridCar::ChargeBattery() override {
	return "ChargeBattery HybridCar";
}

//Overridden FuelEfficiency() method from GasolineCar
double HybridCar::FuelEfficiency() override {
	return 10;
}

//Overridden Refuel() method from GasolineCar
std::string HybridCar::Refuel() override {
	return "Refuel HybridCar";
}

//SwitchMode method unique to HybridCar
std::string HybridCar::SwitchMode() {
	return "SwitchMode HybridCar";
}
