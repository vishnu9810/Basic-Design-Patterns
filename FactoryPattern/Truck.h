#pragma once
#include "IVehicle.h"

class Truck : public IVehicle
{
public:
	Truck() = default;
	~Truck() = default;
	void CreateParts();
	void AssembleParts();
	void ApplyLogo();
	void Deliver();
};