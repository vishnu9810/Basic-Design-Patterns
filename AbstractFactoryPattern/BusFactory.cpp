#include "BusFactory.h"

void BusFactory::CreateAudiVehicle()
{
	Vehicle* vehicle = new Vehicle();
	vehicle->SetVehicleType("Bus");
	vehicle->SetBrandName("Audi");
	vehicle->CreateVehicle();
	vehicle->ShowVehicleDetails();
}

void BusFactory::CreateMercedesVehicle()
{
	Vehicle* vehicle = new Vehicle();
	vehicle->SetVehicleType("Bus");
	vehicle->SetBrandName("Mercedes");
	vehicle->CreateVehicle();
	vehicle->ShowVehicleDetails();
}

void BusFactory::CreateBMWVehicle()
{
	Vehicle* vehicle = new Vehicle();
	vehicle->SetVehicleType("Bus");
	vehicle->SetBrandName("BMW");
	vehicle->CreateVehicle();
	vehicle->ShowVehicleDetails();
}