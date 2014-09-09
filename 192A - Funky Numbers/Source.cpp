#include<stdio.h>

using namespace std;
int main(void){
	int n;
	scanf("%d",&n);
	int v[100000];
	v[1]=1;
	int k=1;
	while(v[k]<n){
		k++;
		v[k]=v[k-1]+k;
	}
	for(int i=1;i<k;++i){
		for(int j=i;j<k;++j){
			if(n==v[i]+v[j]){
				printf("YES");
				return 0;
			}
		}
	}
	printf("NO");
	return 0;
}
