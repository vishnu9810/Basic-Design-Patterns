#pragma once

#include "IVehicleFactory.h"

class CarFactory : public IVehicleFactory
{
public:
	CarFactory() = default;
	~CarFactory() = default;
	void CreateBMWVehicle();
	void CreateMercedesVehicle();
	void CreateAudiVehicle();
};