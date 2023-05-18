#pragma once

#include "Car.h"

class ICarBuilder
{
protected:
	Car m_car;

public:
	ICarBuilder() = default;
	~ICarBuilder() = default;
	virtual void BuildEngine() = 0;
	virtual void BuildInfoDevice() = 0;
	virtual void BuildBrakes() = 0;
	virtual void BuildWheels() = 0;
	virtual void BuildExterior() = 0;
	virtual Car* GetCar() = 0;
};