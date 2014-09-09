#include<stdio.h>
#include<algorithm>

using namespace std;

int main(void){
	int n, m;
	scanf("%d %d",&n,&m);
	int vec[60];
	for(int i=0;i<m;++i){
		scanf("%d",&vec[i]);
	}
	sort(vec, vec+m);
	int min = 1e6;
	for(int i=n-1;i<m;++i){
		if(vec[i]-vec[i-n+1]<min)
			min=vec[i]-vec[i-n+1];
	}
	printf("%d",min);
	return 0;
}
