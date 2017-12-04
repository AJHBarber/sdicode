#include <iostream>
#include "tour.h"

using namespace std;

//struct timeType
//{
//	int hr;
//	double min;
//	int sec;
//};
//struct tourType
//{
//	string cityName;
//	int distance;
//	timeType travelTime;
//};
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
