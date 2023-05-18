#include "VehicleFactory.h"

VehicleFactory::VehicleFactory(EVEHICLE_TYPE pVehicleType)
{
	m_vehicleType = pVehicleType;
}

void VehicleFactory::CreateVehicle()
{
	IVehicle* vehicle = nullptr;
	switch (m_vehicleType)
	{
	case CAR:
		vehicle = new Car();
		break;
	case BUS:
		vehicle = new Bus();
		break;
	case TRUCK:
		vehicle = new Truck();
		break;
	default:
		std::cout << "invalid vehicle type" << std::endl;
		return;
	}

	vehicle->CreateParts();
	vehicle->AssembleParts();
	vehicle->ApplyLogo();
	vehicle->Deliver();
}