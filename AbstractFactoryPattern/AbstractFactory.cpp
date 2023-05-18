#include "AbstractFactory.h"

IVehicleFactory* AbstractFactory::CreateFactory(EVEHICLETYPE pVehicleType)
{
	IVehicleFactory* vehicleFactory = nullptr;
	if (pVehicleType == CAR)
		vehicleFactory = new CarFactory();
	else if (pVehicleType == BUS)
		vehicleFactory = new BusFactory();
	return vehicleFactory;
}