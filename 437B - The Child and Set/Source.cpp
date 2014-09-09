#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main(void){
	int sum, limit;
	scanf("%d %d",&sum,&limit);
	int l = round(log(limit)/log(2)), dc[30], tp[20], suma = 0,nums[100000], px = 0, p2[20];
	p2[0]=1;
	for(int i=1;i<=l+1;++i)
		p2[i]=p2[i-1]*2;	
	for(int i=0;i<=l;++i){	
		dc[i]=ceil((limit-p2[i]+1)/(double)p2[i+1]);
		suma+=p2[i]*dc[i];
		tp[i]=p2[i];
	}
	if(suma<sum){
		printf("-1\n");
		return 0;
	}	
	while(sum>0)
		if(dc[l]>0 && p2[l]<=sum){
			nums[px]=tp[l];
			sum-=p2[l];
			tp[l]+=p2[l+1];
			dc[l]--;
			px++;				
		}else
			l--;		
	printf("%d\n%d",px,nums[0]);
	for(int i=1;i<px;++i)
		printf(" %d",nums[i]);
	return 0;
}
