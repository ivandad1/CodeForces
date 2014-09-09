#include<stdio.h>
char t[3][3];

bool win(char c){
	int d1=0,d2=0,co[3];
	for (int i = 0; i < 3; i++){
		co[i]=0;
	}
	for (int i = 0; i < 3; i++){
		int cont=0;
		for (int j = 0; j < 3; j++){
			if(t[i][j]==c){
				co[j]++;
				cont++;
				if(i==j)d1++;
				if(i+j==2)d2++;
			}
		}
		if(cont==3)return true;	
	}
	if(d1==3 || d2==3)return true;
	for (int i = 0; i < 3; i++){
		if(co[i]==3)return true;
	}
	return false;
}

int main(void){
	bool ful=true;
	int c1=0,c2=0;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			scanf("%c",&t[i][j]);
			if(t[i][j]=='.')ful=false;
			else if(t[i][j]=='X')c1++;
			else c2++;			
		}
		getchar();
	}
	bool g1=win('X'),g2=win('0');
	if(c1!=c2 && c1!=c2+1)printf("illegal\n");
	else if(g1 && g2 || (g2 && c2<c1) || (g1 && c1==c2))printf("illegal\n");
	else if(g1)printf("the first player won\n");
	else if(g2)printf("the second player won\n");
	else if(c1+c2==9)printf("draw\n");
	else if(c1==c2)printf("first\n");
	else printf("second\n");
	return 0;
}