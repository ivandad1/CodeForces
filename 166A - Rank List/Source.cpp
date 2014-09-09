#include<stdio.h>
#include<algorithm>

using namespace std;
#define ii pair<int, int>
bool compare(ii a, ii b){
	return a.first==b.first?a.second<b.second:a.first>b.first;
}

bool equal(ii a, ii b){
	return a.first==b.first && a.second==b.second;
}

int main(void){
	int n, k;
	scanf("%d %d",&n,&k);
	ii p[60];
	for(int i=0;i<n;i++)
		scanf("%d %d",&p[i].first,&p[i].second);	
	sort(p,p+n,compare);
	int r = 0;	
	for(int i=0;i<n;++i)
		if(equal(p[k-1],p[i]))
			r++;	
	printf("%d",r);
	return 0;
}
