#include <stdio.h>

int main() {
	int x,n,p,i,t;long long pot;
	scanf("%i",&t);
	
	while(t--){
		scanf("%i %i %i",&x,&n,&p);
		pot=1;
		for(i=1;i<=n;i++) pot*=x;
		printf("%ll\n",pot%p);
	}
	return 0;
}
		
