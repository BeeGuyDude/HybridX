#pragma once

#include <string.h>
#include <iostream>

class Car {
	private:
		//Base class, no member variables needed
	public: 
		virtual std::string Drive() = 0;
		virtual double FuelEfficiency() = 0;
};
