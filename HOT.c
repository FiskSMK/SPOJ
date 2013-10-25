#include <stdio.h>

int d, h;
int min = 100000;
int tab[1000][2];

void hot ( int i, int koszt ) {
	int km = tab[i][0];
	koszt += tab[i][1];
	if ( km+800 >= d ){
		if (min > koszt) {
			min = koszt;
			return;
		}
	} else {
		while ( tab[++i][0]-km <= 800){
			hot (i, koszt);
		}
	}
}

void hot0(){
	if (d<=800){
		min = 0;
		return;
	}
	int i = 0;
	while ( tab[i][0] <= 800){
		hot (i, 0);
		i++;
	}
}

int main()
{
	scanf("%i", &d);
	scanf("%i", &h);
	
	int i;
	
	for (i=0; i<h; i++) {
		scanf("%i", &tab[i][0]);
		scanf("%i", &tab[i][1]);
	}
	
	hot0();
	
	printf("%i", min);
	
	return 0;
}

