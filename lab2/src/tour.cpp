#include <iostream>
#include "tour.h"

int main()
{
	tourType destination;
	destination.distance = 130;
	destination.cityName = "Nottingham";
	destination.travelTime.hr = 3;
	destination.travelTime.min= 15;
	printTour(destination);
	return 0; 
}
