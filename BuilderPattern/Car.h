#pragma once
#include <iostream>
#include <string>

class Car
{
	std::string m_engine;
	std::string m_infoDevice;
	std::string m_brakes;
	std::string m_wheels;
	std::string m_exterior;

public:
	Car() = default;
	~Car() = default;
	void SetEngine(std::string engine);
	void SetInfoDevice(std::string infoDevice);
	void SetBrakes(std::string brakes);
	void SetWheels(std::string wheels);
	void SetExterior(std::string exterior);
	void showDetails();
};