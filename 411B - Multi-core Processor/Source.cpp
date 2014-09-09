#include<stdio.h>
#include<cstring>

using namespace std;

int main(void){
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	int mx[101][101];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;++j){
			scanf("%d",&mx[i][j]);
		}
	}
	bool cellb[101], coreb[101];
	memset(cellb, false, sizeof cellb);
	memset(coreb, false, sizeof coreb);
	int ap[101];
	int ans[101];
	memset(ans,0,sizeof ans);
	for(int i=0;i<m;++i){
		memset(ap,0,sizeof ap);
		for(int j=0;j<n;++j){
			if(!coreb[j]){				
				if(cellb[mx[j][i]]){
					coreb[j]=true;
					if(ans[j]==0)
						ans[j]=i+1;
					continue;
				}
				ap[mx[j][i]]++;
			}							
		}
		for(int t=1;t<=k;t++){
			if(ap[t]>1){
				cellb[t]=true;
				for(int j=0;j<n;++j){
					if(mx[j][i]==t){
						coreb[j]=true;
						if(ans[j]==0)
						ans[j]=i+1;
					}							
				}
			}
		}		
	}
	for(int i=0;i<n;i++){
		printf("%d\n",ans[i]);
	}
	return 0;
}
