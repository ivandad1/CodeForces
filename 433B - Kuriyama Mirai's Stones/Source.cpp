#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	long long int v[100001], u[100001];
	for(int i=1;i<=n;++i){
		scanf("%I64d",&v[i]);
		u[i]=v[i];
	}
	sort(u+1,u+n+1);
	v[0]=0;u[0]=0;
	for(int i=1;i<=n;++i){
		v[i]=v[i-1]+v[i];
		u[i]=u[i-1]+u[i];
	}
	int m;
	scanf("%d",&m);
	while(m--){
		int l,r,t;
		scanf("%d %d %d",&t,&l,&r);
		printf("%I64d\n",t==1?v[r]-v[l-1]:u[r]-u[l-1]);
	}
	return 0;
}
