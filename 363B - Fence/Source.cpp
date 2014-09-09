#include<stdio.h>

using namespace std;

int main(void){
	int n, k;
	scanf("%d %d",&n,&k);
	int v[150001];
	for(int i=0;i<n;++i)
		scanf("%d",&v[i]);	
	int sum = 0;
	for(int i=n-1;i>=n-k;--i)
		sum+=v[i];
	int min = sum;	
	int ind = n-k;
	for(int i=n-k-1;i>-1;--i){
		sum+=v[i]-v[i+k];
		if(sum<min){
			sum=min;
			ind = i;
		}
			
	}
	printf("%d",ind+1);
	return 0;
}
