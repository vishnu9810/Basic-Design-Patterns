#include "SUVBuilder.h"

void SUVBuilder::BuildEngine()
{
	std::cout << "building suv engine" << std::endl;
	m_car.SetEngine("suv engine");
}

void SUVBuilder::BuildInfoDevice()
{
	std::cout << "building suv info device" << std::endl;
	m_car.SetInfoDevice("suv info device");
}

void SUVBuilder::BuildBrakes()
{
	std::cout << "building suv brakes" << std::endl;
	m_car.SetBrakes("suv brakes");
}

void SUVBuilder::BuildWheels()
{
	std::cout << "building suv wheels" << std::endl;
	m_car.SetWheels("suv wheels");
}

void SUVBuilder::BuildExterior()
{
	std::cout << "building suv exterior" << std::endl;
	m_car.SetExterior("suv exterior");
}

Car* SUVBuilder::GetCar()
{
	return &m_car;
}