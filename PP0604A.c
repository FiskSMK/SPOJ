#include <stdio.h>

int main(){
	int t,n,i,w;
	double minr, r, sr;
	scanf("%d",&t);
	while (t--){
		scanf("%d",&n);
		int tab[n];
		sr=0;
		for (i=0;i<n;i++){
			scanf("%i",&tab[i]);
			sr += tab[i];
		}
		sr /= n;
		w = tab[0];
		minr = sr - tab[0];
		if (minr<0) minr = -minr;
		for (i=1;i<n;i++){
			r = sr - tab[i];
			if (r<0) r = -r;
			if (r < minr){
				minr = r;
				w = tab[i];
			}
		}
		printf("%i\n",w);
	}
	return 0;
}
		
