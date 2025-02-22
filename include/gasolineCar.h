#pragma once

#include "car.h"

class GasolineCar : public Car {
	private:

	public:
		//Override base class
		std::string Drive() override;

		//Add new classes specific to gasoline engine
		virtual double FuelEfficiency();
		virtual std::string Refuel();
};
