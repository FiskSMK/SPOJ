#include <stdio.h>

int main() {
	int i=0,tab[9999];
	
	while (scanf("%i",&tab[i])!=EOF) i++;
	
	for (i--;i>=0;i--) printf("%i ",tab[i]);
	
	return 0;
	
}
