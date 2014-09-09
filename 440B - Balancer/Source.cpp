#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	long long int nums[50000], suma = 0;
	for(int i=0;i<n;++i){
		scanf("%I64d",&nums[i]);
		suma+=nums[i];
	}
	suma/=n;
	long long int total = 0;
	for(int i=1;i<n;++i){
		total+=abs(suma-nums[i-1]);
		nums[i]+=nums[i-1]-suma;
	}
	printf("%I64d",total);
	return 0;
}
