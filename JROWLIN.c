#include <stdio.h>

int main(){
	double a, b, c, x;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	if (a == 0.0){
		if (b == c){
			printf("NWR");
		} else {
			printf("BR");
		}
	} else {
		x = c - b;
		x /= a;
		printf("%.2f", x);
	}
	
	return 0;
}
		
