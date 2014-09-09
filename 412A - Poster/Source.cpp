#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<math.h>

using namespace std;

int main(void){
	int n,k;
	scanf("%d %d",&n,&k);
	char cad[101];
	getchar();
	scanf("%s",&cad);
	if(n-k<k-1){
		while(n-k>0){
			printf("RIGHT\n");
			k++;
		}
		for(int i=n-1;i>0;--i){
			printf("PRINT %c\n",cad[i]);
			printf("LEFT\n");
		}
		printf("PRINT %c",cad[0]);
	}else{
		while(k>1){
			printf("LEFT\n");
			k--;
		}
		for(int i=0;i<n-1;++i){
			printf("PRINT %c\n",cad[i]);
			printf("RIGHT\n");
		}
		printf("PRINT %c",cad[n-1]);
	}	
	return 0;
}
