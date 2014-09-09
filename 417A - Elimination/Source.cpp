#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<math.h>

using namespace std;

int main(void){
	int c,d,n,m,k;
	scanf("%d %d",&c,&d);
	scanf("%d %d",&n,&m);
	scanf("%d",&k);
	int fal = n*m-k;
	int p1 = 0, p2 = 0;
	int v[10001];
	v[0]=0;
	for(int i=1;i<=fal;++i)
		v[i]= min(v[i-1]+d, (i-n>0)?v[i-n]+c:c);
	printf("%d",v[fal<0?0:fal]);
	return 0;
}
