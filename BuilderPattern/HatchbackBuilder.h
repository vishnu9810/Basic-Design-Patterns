#pragma once

#include "ICarBuilder.h"

class HatchbackBuilder : public ICarBuilder
{
public:
	HatchbackBuilder() = default;
	~HatchbackBuilder() = default;
	void BuildEngine();
	void BuildInfoDevice();
	void BuildBrakes();
	void BuildWheels();
	void BuildExterior();
	Car* GetCar();
};