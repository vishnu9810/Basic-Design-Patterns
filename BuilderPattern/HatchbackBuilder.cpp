#include "HatchbackBuilder.h"

void HatchbackBuilder::BuildEngine()
{
	std::cout << "building hatchback engine" << std::endl;
	m_car.SetEngine("hatchback engine");
}

void HatchbackBuilder::BuildInfoDevice()
{
	std::cout << "building hatchback info device" << std::endl;
	m_car.SetInfoDevice("hatchback info device");
}

void HatchbackBuilder::BuildBrakes()
{
	std::cout << "building hatchback brakes" << std::endl;
	m_car.SetBrakes("hatchback brakes");
}

void HatchbackBuilder::BuildWheels()
{
	std::cout << "building hatchback wheels" << std::endl;
	m_car.SetWheels("hatchback wheels");
}

void HatchbackBuilder::BuildExterior()
{
	std::cout << "building hatchback exterior" << std::endl;
	m_car.SetExterior("hatchback exterior");
}

Car* HatchbackBuilder::GetCar()
{
	return &m_car;
}