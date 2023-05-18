#pragma once
#include "Car.h"
#include "Bus.h"
#include "Truck.h"

class VehicleFactory
{
	EVEHICLE_TYPE m_vehicleType;
public:
	VehicleFactory() = default;
	~VehicleFactory() = default;
	VehicleFactory(EVEHICLE_TYPE pVehicleType);
	void CreateVehicle();
};