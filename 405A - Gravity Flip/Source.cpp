#include<stdio.h>
#include<algorithm>

using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	int vec[100];
	for(int i=0;i<n;++i)
		scanf("%d",&vec[i]);		
	sort(vec,vec+n);
	printf("%d",vec[0]);
	for(int i=1;i<n;++i)
		printf(" %d",vec[i]);
	return 0;
}
