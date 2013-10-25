#include <stdio.h>

int main(){
	int t,n,n0,i,tab[5];
	scanf("%d",&t);
	while (t--){
		scanf("%d",&n);
		n0 = n;
		i = 0;
		while (n){
			tab[i++] = n % 16;
			n /= 16;
		}
		while (i--){
			switch (tab[i]){
				case 15:
					printf("%c", 'F');
					break;
				case 14:
					printf("%c", 'E');
					break;
				case 13:
					printf("%c", 'D');
					break;
				case 12:
					printf("%c", 'C');
					break;
				case 11:
					printf("%c", 'B');
					break;
				case 10:
					printf("%c", 'A');
					break;
				default:
					printf("%i", tab[i]);
					break;
			}
		}
		printf(" ");
		i = 0;
		while (n0){
			tab[i++] = n0 % 11;
			n0 /= 11;
		}
		while (i--){
			switch (tab[i]){
				case 10:
					printf("%c", 'A');
					break;
				default:
					printf("%i", tab[i]);
					break;
			}
		}
		printf("\n");
	}
	return 0;
}
		

