#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
#include<cstring>

using namespace std;

int main(void){
	int n, x[3];
	int ans[4001];
	scanf("%d %d %d %d",&n,&x[0],&x[1],&x[2]);
	memset(ans,0,sizeof ans);
	ans[x[0]]=1;ans[x[1]]=1;ans[x[2]]=1;
	for(int i=1;i<=n;++i){
		for(int j=0;j<3;++j){
			if(i-x[j]>-1 && ans[i-x[j]]>0){
				ans[i]=max(ans[i],ans[i-x[j]]+1);
			}
		}
	}
	printf("%d",ans[n]);
	return 0;
}
