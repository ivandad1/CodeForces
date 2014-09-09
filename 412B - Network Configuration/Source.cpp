#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<math.h>

using namespace std;

bool compare(int a, int b){
	return a>b;
}

int main(void){
	int n,k;
	scanf("%d %d",&n,&k);
	int v[101];
	for(int i=0;i<n;++i){
		scanf("%d",&v[i]);
	}
	sort(v,v+n, compare);
	printf("%d",v[k-1]);
	return 0;
}
