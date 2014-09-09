#include<stdio.h>
#include<cmath>
#include<cstring>
#include<stdlib.h>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int main(void){
	int n, m;
	scanf("%d %d",&n,&m);
	long long int d = 1;
	vector<int> v[51];
	for(int i=0;i<m;++i){
		int x, y;
		scanf("%d %d",&x,&y);
		v[y].push_back(x);
		v[x].push_back(y);
	}
	bool use[51];
	memset(use, false, sizeof use);
	queue<int> lista;
	for(int i=1;i<=n;++i){
		if(use[i])
			continue;	
		use[i]=true;	
		lista.push(i);
		while(!lista.empty()){
			int k = lista.front();
			lista.pop();
			for(int j=0;j<v[k].size();j++){
				if(!use[v[k][j]]){
					use[v[k][j]]=true;
					d*=2;
					lista.push(v[k][j]);
				}
			}
		}		
	}
	printf("%I64d",d);
	return 0;
}
