#include <iostream>

#include "AbstractFactory.h"
#include "IVehicleFactory.h"

int main()
{
	std::cout << "Let us create some branded cars and buses today" << std::endl << std::endl;

	IVehicleFactory* carFactory = AbstractFactory::CreateFactory(CAR);// this factory is responsible for creating all types of cars
	IVehicleFactory* busFactory = AbstractFactory::CreateFactory(BUS);// this factory is responsible for creating all types of buses

	std::cout << "-----------------------------------------------" << std::endl;
	carFactory->CreateBMWVehicle();
	std::cout << "-----------------------------------------------" << std::endl << std::endl;

	std::cout << "-----------------------------------------------" << std::endl;
	busFactory->CreateAudiVehicle();
	std::cout << "-----------------------------------------------" << std::endl << std::endl;

	std::cout << "-----------------------------------------------" << std::endl;
	carFactory->CreateMercedesVehicle();
	std::cout << "-----------------------------------------------" << std::endl << std::endl;

	std::cout << "-----------------------------------------------" << std::endl;
	busFactory->CreateBMWVehicle();
	std::cout << "-----------------------------------------------" << std::endl << std::endl;

	return 0;
}