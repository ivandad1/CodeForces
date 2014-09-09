#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<vector>

using namespace std;

int main(void){
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	int mx[20001][12];
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			scanf("%d",&mx[i][j]);
		}
	}
	int nt[20001];
	int msg[12];
	memset(nt,0,sizeof nt);
	while(k--){
		int x,y;
		scanf("%d %d",&x,&y);
		x--;
		y--;
		nt[x]++;
		msg[y]++;
	}
	for(int i=0;i<n;++i){
		int total = 0;
		for(int j=0;j<m;++j){
			if(mx[i][j])
				total+=msg[j];
		}
		total-=nt[i];
		if(i>0){
			printf(" %d",total);
		}else{
			printf("%d",total);
		}
	}
	return 0;
}
