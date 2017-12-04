#ifndef TOUR_H_
#define TOUR_H_

//using namespace std;
#include <iostream>
#include <string>

struct timeType{
	int hr;
	int min;
	int sec;
};

struct tourType{
	std::string cityName;
	int distance;
	timeType travelTime;
};

int printTour(struct tourType);

#endif // TOUR_H_
