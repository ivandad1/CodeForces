#include<stdio.h>

int m[3][3];

bool isMagic(){
	int f[3]={0,0,0},c[3]={0,0,0}, d1=0, d2=0;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if(i==j)d1+=m[i][j];
			if(3-j==i+1)d2+=m[i][j];
			f[i]+=m[i][j];
			c[j]+=m[i][j];
		}
	}
	return f[0]==f[1] && f[1]==f[2] && f[2]==c[0] && c[0]==c[1] && c[1]==c[2] && c[2]==d1 && d1==d2;
}

int main(void){	
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d",&m[i][j]);
	for (int i = 0; i < 100001; i++){
		m[0][0]=i;
		m[1][1]=i+m[0][1]+m[0][2]-m[1][0]-m[1][2];
		m[2][2]=m[0][1]+m[0][2]-m[1][1];
		if(isMagic())break;
	}
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}