#define CATCH_CONFIG_MAIN

#include "catch2/catch.hpp"
#include "hybridCar.h"

TEST_CASE("Electric Car Tests", "[ElectricCar]") {
	//Test constructing a standard ElectricCar object
	ElectricCar eCar;

	//Test calling the overridden methods contained within an electric car
	REQUIRE(eCar.Drive() == "Drive ElectricCar");
	
	//Test calling the custom methods implemented by this class
	REQUIRE(eCar.ChargeBattery() == "ChargeBattery ElectricCar");

	//Test reassigning inherited class pointer to inheriting object
	Car* car_p;
	car_p = &eCar;
	REQUIRE(car_p->Drive() == "Drive ElectricCar");
}

TEST_CASE("Gasoline Car Tests", "[GasolineCar]") {
	//Test constructing a standard GasolineCar object
	GasolineCar gCar;
	
	//Test calling the overridden methods contained within a gasoline car
	REQUIRE(gCar.Drive() == "Drive GasolineCar");

	//Test calling the custom methods implemented by this class
	REQUIRE(gCar.Refuel() == "Refuel GasolineCar");
	REQUIRE(gCar.FuelEfficiency() == 10);

	//Test reassigning inherited class pointer to inheriting object
	Car* car_p;
	car_p = &gCar;
	REQUIRE(car_p->Drive() == "Drive GasolineCar");
}

TEST_CASE("Hybrid Car Tests", "[HybridCar]") {
	//Test constructing a standard HybridCar object
	HybridCar hCar;

	//Test calling the overridden methods contained within a hybrid car
	REQUIRE(hCar.Drive() == "Drive HybridCar");
	REQUIRE(hCar.ChargeBattery() == "ChargeBattery HybridCar");
	REQUIRE(hCar.Refuel() == "Refuel HybridCar");
	REQUIRE(hCar.FuelEfficiency() == 10);

	//Test calling the custom methods implemented by this class
	REQUIRE(hCar.SwitchMode() == "SwitchMode HybridCar");

	//Test reassigning inherited class pointers to inheriting object
	Car* car_p;
	ElectricCar* e_car_p;
	GasolineCar* g_car_p;
	car_p = &hCar;
	e_car_p = &hCar;
	g_car_p = &hCar;
	REQUIRE(car_p->Drive() == "Drive HybridCar");
	REQUIRE(e_car_p->ChargeBattery() == "ChargeBattery HybridCar");
	REQUIRE(g_car_p->Refuel() == "Refuel HybridCar");

	//Confirm that multiple inheriting object still throws errors when implemented methods are called from pointers

}
