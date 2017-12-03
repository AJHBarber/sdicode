#include <iostream> 

#include "factoral.h"

int main()
{
	int n,total;
	
	std::cout << "Please enter a number between 1-20 ";
	std::cin >> n;
	
	if((n>1)&&(n<20)){
		total = getFactoral(n);
		std::cout<<total<<std::endl;
	}
	else{
		std::cout<<"not a number between 1 and 20"<< std::endl;
	}
	return 0;
}
