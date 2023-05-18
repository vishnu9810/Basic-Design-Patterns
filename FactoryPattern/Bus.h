#pragma once
#include "IVehicle.h"

class Bus : public IVehicle
{
public:
	Bus() = default;
	~Bus() = default;
	void CreateParts();
	void AssembleParts();
	void ApplyLogo();
	void Deliver();
};