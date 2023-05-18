#pragma once

#include "IVehicleFactory.h"
#include "CarFactory.h"
#include "BusFactory.h"

enum EVEHICLETYPE
{
	CAR = 0,
	BUS
};

class AbstractFactory
{
public:
	AbstractFactory() = default;
	~AbstractFactory() = default;
	static IVehicleFactory* CreateFactory(EVEHICLETYPE pVehicleType);
};