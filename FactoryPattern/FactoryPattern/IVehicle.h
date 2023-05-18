#pragma once
#include <iostream>

enum EVEHICLE_TYPE
{
	CAR = 0,
	BUS,
	TRUCK
};

class IVehicle
{
public:
	IVehicle() = default;
	~IVehicle() = default;
	virtual void CreateParts() = 0;
	virtual void AssembleParts() = 0;
	virtual void ApplyLogo() = 0;
	virtual void Deliver() = 0;
};