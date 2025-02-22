#pragma once

#include "electricCar.h"
#include "gasolineCar.h"

class HybridCar : public ElectricCar, public GasolineCar {
	private:

	public:
		//Override publically inherited methods
		std::string Drive() override;
		std::string ChargeBattery() override;
		double FuelEfficiency() override;
		std::string Refuel() override;

		//Implement unique methods for hybrid
		std::string SwitchMode();
};
