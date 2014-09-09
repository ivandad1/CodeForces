#include<stdio.h>
#include<algorithm>

int main(void){
	int n, m[12],i=12, s=0;
	scanf("%d",&n);
	for (int i = 0; i < 12; i++){
		scanf("%d",&m[i]);
	}
	std::sort(m,m+12);
	while(i>0 && s<n){
		i--;
		s+=m[i];
	}
	if(i>-1 && s>=n)printf("%d",12-i);
	else printf("-1");
	return 0;
}