#include<stdio.h>

int main(void){
    	int v[1001], n, temp; 
	scanf("%d",&n);
	for(int i=0;i<1001;i++)v[i]=0;
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		v[temp]++;
	}
	int max=(n+1)/2;
	for(int i=0;i<1001;i++){
		if(v[i]>max){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
   	return 0;

}