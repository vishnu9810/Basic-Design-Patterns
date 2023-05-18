#pragma once

#include <iostream>
#include <string>

class Vehicle
{
	std::string m_vehicleType;
	std::string m_brandName;
public:
	Vehicle() = default;
	~Vehicle() = default;
	void SetVehicleType(std::string pVehicleType);
	void SetBrandName(std::string pBrandName);
	void CreateVehicle();
	void ShowVehicleDetails();
};