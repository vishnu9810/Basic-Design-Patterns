#include "Vehicle.h"

void Vehicle::SetVehicleType(std::string pVehicleType)
{
	m_vehicleType = pVehicleType;
}

void Vehicle::SetBrandName(std::string pBrandName)
{
	m_brandName = pBrandName;
}

void Vehicle::CreateVehicle()
{
	std::cout << "creating " << m_brandName << " " << m_vehicleType << "..." << std::endl;
}

void Vehicle::ShowVehicleDetails()
{
	std::cout << "here is your brand new " << m_brandName << " " << m_vehicleType << ". enjoy your ride !!" << std::endl;
}