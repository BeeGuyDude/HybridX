#include "gasolineCar.h"

//Default constructor
GasolineCar::GasolineCar() {}

//Overridden Drive() method from base class Car
std::string GasolineCar::Drive() {
	return "Drive GasolineCar";
}

//Overridden FuelEfficiency() method
double GasolineCar::FuelEfficiency() {
	return 10;
}

//Refuel method for gasoline car
std::string GasolineCar::Refuel() {
	return "Refuel GasolineCar";
}	
