 
#include "factoral.h"

int getFactoral(int n){

	int subTotal, i;
	i = n;
	if (n > 1){	
		while (i >=1){
			if (i == n){
				
				subTotal = n * (n-1); 
				i -=1;
			}
			else{
				subTotal = subTotal * i;
			}
			i -=1;
		}
	}
	else {
	 	subTotal = 1;
	}
	return subTotal;

}

