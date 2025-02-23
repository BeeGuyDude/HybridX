#pragma once

#include "car.h"

class GasolineCar : virtual public Car {
	private:

	public:
		//Default constructor
		GasolineCar();
		
		//Override base class
		std::string Drive() override;

		//Add new classes specific to gasoline engine
		virtual double FuelEfficiency();
		virtual std::string Refuel();
};
