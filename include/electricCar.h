#pragma once

#include "car.h"

class ElectricCar : public Car {
	//Override inherited methods
	std::string Drive() override;
	
	//Define new methods unique to Car
	virtual std::string ChargeBattery();
	
}
