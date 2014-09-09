#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
#include<cstring>

using namespace std;

int main(void){
	int n, m, x, array[100001], ans[100001];
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;++i)
		scanf("%d",&array[i]);	
	bool used[100001];
	memset(used,false,sizeof used);
	ans[n]=1;
	used[array[n]]=true;
	for(int i=n-1;i>0;--i){
		if(used[array[i]])
			ans[i]=ans[i+1];
		else{		
			used[array[i]]=true;
			ans[i]=ans[i+1]+1;			
		}		
	}
	while(scanf("%d",&x)==1)	
		printf("%d\n",ans[x]);	
	return 0;
}
