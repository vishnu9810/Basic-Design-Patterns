#include "SedanBuilder.h"

void SedanBuilder::BuildEngine()
{
	std::cout << "building sedan engine" << std::endl;
	m_car.SetEngine("sedan engine");
}

void SedanBuilder::BuildInfoDevice()
{
	std::cout << "building sedan info device" << std::endl;
	m_car.SetInfoDevice("sedan info device");
}

void SedanBuilder::BuildBrakes()
{
	std::cout << "building sedan brakes" << std::endl;
	m_car.SetBrakes("sedan brakes");
}

void SedanBuilder::BuildWheels()
{
	std::cout << "building sedan wheels" << std::endl;
	m_car.SetWheels("sedan wheels");
}

void SedanBuilder::BuildExterior()
{
	std::cout << "building sedan exterior" << std::endl;
	m_car.SetExterior("sedan exterior");
}

Car* SedanBuilder::GetCar()
{
	return &m_car;
}