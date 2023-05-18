#include "Car.h"

void Car::SetEngine(std::string engine)
{
	m_engine = engine;
}

void Car::SetInfoDevice(std::string infoDevice)
{
	m_infoDevice = infoDevice;
}

void Car::SetBrakes(std::string brakes)
{
	m_brakes = brakes;
}

void Car::SetWheels(std::string wheels)
{
	m_wheels = wheels;
}

void Car::SetExterior(std::string exterior)
{
	m_exterior = exterior;
}

void Car::showDetails()
{
	std::cout << "engine: " + m_engine << std::endl;
	std::cout << "info device: " + m_infoDevice << std::endl;
	std::cout << "brakes: " + m_brakes << std::endl;
	std::cout << "wheels: " + m_wheels << std::endl;
	std::cout << "exterior: " + m_exterior << std::endl;
}