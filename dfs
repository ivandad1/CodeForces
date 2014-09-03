#include<stdio.h>
#include<cstring>
#include<vector>
#include<queue>

using namespace std;
queue<int> lista[200000];
bool d[200000];

void dfs(int num){
	d[num]=true;
	while(!lista[num].empty()){
		int p = lista[num].front();
		lista[num].pop();
		if(!d[p])
			dfs(p);
	}
}

int main(void){
	int cases;
	scanf("%d",&cases);
	while(cases--){		
		int n, m, l;
		scanf("%d %d %d",&n,&m,&l);
		memset(d,false,sizeof d);		
		int x,y;
		for(int i=1;i<=n;++i)
			while(!lista[i].empty())
				lista[i].pop();	
		for(int i=0;i<m;++i){
			scanf("%d %d",&x,&y);
			lista[x].push(y);
		}
		for(int i=0;i<l;++i){
			scanf("%d",&x);
			dfs(x);
		}
		int total = 0;
		for(int i=1;i<=n;++i)
			if(d[i]==true)total++;		
		printf("%d\n",total);
	}
	return 0;
}
