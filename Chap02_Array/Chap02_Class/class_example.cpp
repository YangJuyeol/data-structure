#include "sports_car.h"


int main()
{
	Car	yourCar;
	 Car yourCar(100, "my car", 4);
	yourCar.display();
	yourCar.whereAmI();
	yourCar.gear = 5;
	yourCar.display();
	yourCar.changeGear();
	yourCar.display();
	

	SportsCar yourCar;
	yourCar.setTurbo(true);
	yourCar.speedUp();
	yourCar.display();
	yourCar.whereAmI();
	yourCar.

	return 0;
}