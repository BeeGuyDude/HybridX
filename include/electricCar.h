#pragma once

#include "car.h"

class ElectricCar : virtual public Car {
	public:
		//Default constructor
		ElectricCar();

		//Override inherited methods
		std::string Drive() override;
		
		//Define new methods unique to Car
		virtual std::string ChargeBattery();
	
};
