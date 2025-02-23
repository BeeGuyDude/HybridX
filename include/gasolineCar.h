#pragma once

#include "car.h"

class GasolineCar : virtual public Car {
	private:

	public:
		//Default constructor
		GasolineCar();
		
		//Override base class
		std::string Drive() override;
		double FuelEfficiency() override;

		//Add new classes specific to gasoline engine
		virtual std::string Refuel();
};
