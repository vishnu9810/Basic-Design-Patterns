#pragma once

#include "IVehicleFactory.h"

class BusFactory : public IVehicleFactory
{
public:
	BusFactory() = default;
	~BusFactory() = default;
	void CreateBMWVehicle();
	void CreateMercedesVehicle();
	void CreateAudiVehicle();
};