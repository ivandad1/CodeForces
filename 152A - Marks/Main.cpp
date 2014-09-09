#include<stdio.h>

int main(void){
	int n,m, v[100][100], x[100];
	scanf("%d %d",&n, &m);
	for (int i = 0; i < n; i++){
		getchar();
		for (int j = 0; j < m; j++)
			v[i][j]=(int)getchar()-48;
	}
	int cont=0;
	for (int i = 0; i < n; i++){		
		for (int j = 0; j < m; j++){
			bool mej=true;
			for (int k = 0; k < n; k++){
				if(v[i][j]<v[k][j]){
					mej=false;
					break;
				}
			}
			if(mej){
				cont++;
				break;
			}
		}
	}
	printf("%d",cont);
	return 0;
}