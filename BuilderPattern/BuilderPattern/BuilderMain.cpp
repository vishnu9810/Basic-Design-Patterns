#include "CarEngineer.h"
#include "ICarBuilder.h"
#include "SUVBuilder.h"
#include "HatchbackBuilder.h"
#include "SedanBuilder.h"

int main()
{
	std::cout << "let's build some cars today buddy" << std::endl << std::endl;

	SUVBuilder* suvBuilder = new SUVBuilder();// SUV builder
	HatchbackBuilder* hatchbackBuilder = new HatchbackBuilder();// Hatchback builder
	SedanBuilder* sedanBuilder = new SedanBuilder();// Sedan builder

	CarEngineer* suvEngineer = new CarEngineer(suvBuilder);// engineer is responsible for building parts and integrating to form the end product using the assigned builder
	CarEngineer* sedanEngineer = new CarEngineer(sedanBuilder);
	CarEngineer* hatchbackEngineer = new CarEngineer(hatchbackBuilder);

	Car* currentCar = nullptr;

	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "building suv car" << std::endl;
	suvEngineer->BuildCar();
	std::cout << std::endl;
	currentCar = suvEngineer->GetCar();
	if (currentCar != nullptr)
	{
		currentCar->showDetails();
	}
	std::cout << "-----------------------------------------" << std::endl << std::endl;

	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "building sedan car" << std::endl;
	sedanEngineer->BuildCar();
	std::cout << std::endl;
	currentCar = sedanEngineer->GetCar();
	if (currentCar != nullptr)
	{
		currentCar->showDetails();
	}
	std::cout << "-----------------------------------------" << std::endl << std::endl;

	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "building hatchback car" << std::endl;
	hatchbackEngineer->BuildCar();
	std::cout << std::endl;
	currentCar = hatchbackEngineer->GetCar();
	if (currentCar != nullptr)
	{
		currentCar->showDetails();
	}
	std::cout << "-----------------------------------------" << std::endl;

	delete suvEngineer;
	delete sedanEngineer;
	delete hatchbackEngineer;

	return 0;
}