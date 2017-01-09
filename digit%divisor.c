#include <stdio.h>
int main(){
	printf("2\n");
	int digit;
	int divisor;
	int one;
	one = 2;
	for(digit = 3; digit <= 1000; digit += 2){
		for(divisor = 3; divisor < digit; divisor += 2){
			if(digit % divisor == 0){
				break;
				}
			}
		if(digit == divisor){
			printf("%d:   %d\n",one++,digit);
			}
		}
	return 0;
}
