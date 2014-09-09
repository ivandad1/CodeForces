#include<stdio.h>

int main(void){
	int n, cont=0, m[30][30], sf, sc;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d",&m[i][j]);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			sf=0;sc=0;
			for (int k = 0; k < n; k++){
				sf+=m[k][j];
			}
			for (int k = 0; k < n; k++){
				sc+=m[i][k];
			}
			if(sf>sc)cont++;
		}
	}
	printf("%d",cont);		
	return 0;
}