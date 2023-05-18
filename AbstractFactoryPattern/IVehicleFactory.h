#pragma once

#include "Vehicle.h"

class IVehicleFactory
{
public:
	IVehicleFactory() = default;
	~IVehicleFactory() = default;
	virtual void CreateBMWVehicle() = 0;
	virtual void CreateMercedesVehicle() = 0;
	virtual void CreateAudiVehicle() = 0;
};