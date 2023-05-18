#include "CarFactory.h"

void CarFactory::CreateAudiVehicle()
{
	Vehicle* vehicle = new Vehicle();
	vehicle->SetVehicleType("Car");
	vehicle->SetBrandName("Audi");
	vehicle->CreateVehicle();
	vehicle->ShowVehicleDetails();
}

void CarFactory::CreateMercedesVehicle()
{
	Vehicle* vehicle = new Vehicle();
	vehicle->SetVehicleType("Car");
	vehicle->SetBrandName("Mercedes");
	vehicle->CreateVehicle();
	vehicle->ShowVehicleDetails();
}

void CarFactory::CreateBMWVehicle()
{
	Vehicle* vehicle = new Vehicle();
	vehicle->SetVehicleType("Car");
	vehicle->SetBrandName("BMW");
	vehicle->CreateVehicle();
	vehicle->ShowVehicleDetails();
}