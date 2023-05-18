#pragma once

#include "ICarBuilder.h"

class CarEngineer 
{
private:
	ICarBuilder* m_carBuilder;
	
public:
	CarEngineer() = default;
	~CarEngineer();
	CarEngineer(ICarBuilder* pCarBuilder);
	Car* BuildCar();
	Car* GetCar();
};