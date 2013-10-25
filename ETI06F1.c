#include <stdio.h>


int main(){
	double r,d;
	scanf("%lf %lf",&r,&d);
	d/=2.0;
	printf("%lf\n",r);
	r=r*r-d*d;
	printf("%lf\n",r);
	r*=3.141592654;
	printf("%.2lf\n",r);
	return 0;
}
	
