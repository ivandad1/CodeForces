#include<stdio.h>
#include<algorithm>
#include<vector>
#include<math.h>
#include<cstring>

using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	int v[1000000];
	memset(v,0,sizeof v);
	int Q=0;
	for(int i=2;i<=n;++i){
		int rd = n/i;
		int ts = n-rd*i;
		v[ts]++;	
		if(rd%2==1)
			v[i-1]++;		
	}
	if(v[n]%2==1)
		Q=n;	
	for(int i=n-1;i>0;--i){
		v[i]+=v[i+1];
		if(v[i]%2==1)
			Q^=i;		
	}	
	int p;
	while(n--){
		scanf("%d",&p);
		Q^=p;	
	}	
	printf("%d",Q);
	return 0;
}
