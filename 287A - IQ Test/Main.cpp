#include<stdio.h>

int main(void){
	int cont;
	char t[4][4];
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			scanf("%c",&t[i][j]);
		}
		getchar();
	}
	bool pos=false;
	for (int i = 1; i < 4; i++){
		for (int j = 1; j < 4; j++){
			cont=0;
			if(t[i][j]=='#')cont++;
			if(t[i-1][j]=='#')cont++;
			if(t[i][j-1]=='#')cont++;
			if(t[i-1][j-1]=='#')cont++;
			if(cont!=2){
				pos=true;
				break;
			}
		}
	}
	if(pos)printf("YES\n");
	else printf("NO\n");
	return 0;
}