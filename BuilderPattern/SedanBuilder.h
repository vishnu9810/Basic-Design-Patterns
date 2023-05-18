#pragma once

#include "ICarBuilder.h"

class SedanBuilder : public ICarBuilder
{
public:
	SedanBuilder() = default;
	~SedanBuilder() = default;
	void BuildEngine();
	void BuildInfoDevice();
	void BuildBrakes();
	void BuildWheels();
	void BuildExterior();
	Car* GetCar();
};