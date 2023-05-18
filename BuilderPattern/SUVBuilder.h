#pragma once

#include "ICarBuilder.h"

class SUVBuilder : public ICarBuilder
{
public:
	SUVBuilder() = default;
	~SUVBuilder() = default;
	void BuildEngine();
	void BuildInfoDevice();
	void BuildBrakes();
	void BuildWheels();
	void BuildExterior();
	Car* GetCar();
};