#include<stdio.h>
#include<algorithm>

using namespace std;
int mod = 1e9+7;
int main(void){
	int n;
	scanf("%d",&n);
	long long int t[2][2];
	t[0][0]=0;
	t[0][1]=1;	
	for(int i=1;i<n;++i){
		t[1][0]=3*t[0][1]%mod;
		t[1][1]=(t[0][0]+2*t[0][1])%mod;
		swap(t[1][0],t[0][0]);
		swap(t[1][1],t[0][1]);
	}
	printf("%I64d",t[0][0]);
	return 0;
}
