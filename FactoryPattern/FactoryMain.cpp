#include "VehicleFactory.h"

int main()
{
	VehicleFactory* vehicleFactory;

	std::cout << "let's create some cool vehicles today" << std::endl << std::endl;

	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "creating truck" << std::endl;
	vehicleFactory = new VehicleFactory(TRUCK);
	vehicleFactory->CreateVehicle();
	delete vehicleFactory;
	std::cout << "here's your truck.. enjoy buddy" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl << std::endl;

	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "creating car" << std::endl;
	vehicleFactory = new VehicleFactory(CAR);
	vehicleFactory->CreateVehicle();
	delete vehicleFactory;
	std::cout << "here's your brand new car.. don't drive when drunk *wink*" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl << std::endl;

	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "creating bus" << std::endl;
	vehicleFactory = new VehicleFactory(BUS);
	vehicleFactory->CreateVehicle();
	delete vehicleFactory;
	std::cout << "here's your shining bus.. take care of your passengers XD" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl << std::endl;

	return 0;
}