#include<stdio.h>

int main(void){
	int lo[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	for (int i = 1; i < 4; i++)
		for (int j = 1; j < 4; j++)
			scanf("%d", &lo[i][j]);

	for (int i = 1; i < 4; i++){
		for (int j = 1; j < 4; j++){
			int s=lo[i][j]+lo[i-1][j]+lo[i][j-1]+lo[i+1][j]+lo[i][j+1];
			printf("%d",(s+1)%2);
		}
		printf("\n");
	}
	return 0;
}