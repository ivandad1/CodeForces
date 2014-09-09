#include<stdio.h>
#include<cmath>
#include<cstring>
#include<stdlib.h>
#include<algorithm>
#include<vector>

using namespace std;

int main(void){
	int n, m;
	scanf("%d %d",&n,&m);
	char cad[101];
	for(int i=0;i<n;++i){
		getchar();
		scanf("%s",&cad);
		for(int j=0;j<m;++j){
			if(cad[j]=='.'){
				printf((i+j)%2==0?"B":"W");
			}else{
				printf("-");
			}
		}
		printf("\n");
	}
	return 0;
}
