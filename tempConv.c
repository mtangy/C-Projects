#include <stdio.h>

void main(){
	
	float celci;
	float limit = 200;

	for(float fahr = 0.0; fahr <= limit; fahr+=20){
		celci = (5.0/9.0)*(fahr-32.0);
		printf("%4.2f\t%4.2f\n",fahr,celci);
	}
}



