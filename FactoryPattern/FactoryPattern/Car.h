#pragma once
#include "IVehicle.h"

class Car : public IVehicle
{
public:
	Car() = default;
	~Car() = default;
	void CreateParts();
	void AssembleParts();
	void ApplyLogo();
	void Deliver();
};