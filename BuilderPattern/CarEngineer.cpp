#include "CarEngineer.h"

CarEngineer::CarEngineer(ICarBuilder* pCarBuilder)
{
	m_carBuilder = pCarBuilder;
}

CarEngineer::~CarEngineer()
{
	if (m_carBuilder != nullptr)
	{
		delete m_carBuilder;
		m_carBuilder = nullptr;
	}
}

Car* CarEngineer::BuildCar()
{
	if (m_carBuilder == nullptr)
	{
		std::cout << "builder not assigned. exiting..." << std::endl;
		return nullptr;
	}
	m_carBuilder->BuildEngine();
	m_carBuilder->BuildInfoDevice();
	m_carBuilder->BuildBrakes();
	m_carBuilder->BuildWheels();
	m_carBuilder->BuildExterior();
	return m_carBuilder->GetCar();
}

Car* CarEngineer::GetCar()
{
	if (m_carBuilder == nullptr)
	{
		std::cout << "builder not assigned. exiting..." << std::endl;
		return nullptr;
	}
	return m_carBuilder->GetCar();
}