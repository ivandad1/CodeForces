#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>

using namespace std;

typedef vector<int> vi;

int values[100001];
int father[100001];

vi nod[100001];

int gcd(int a, int b){
	return b==0?a:gcd(b,a%b);
}

int ind(int k, int v){
	if(k==0){
		return -1;
	}
	int g = gcd(values[k],v);
	if(g>1){
		return k;
	}
	return ind(father[k],v);
}

void define(int k){
	int size = nod[k].size();
	for(int i=0;i<size;++i){
		int m = nod[k][i];
		if(father[m]==-1){
			father[m]=k;
			define(m);
		}
	}
}

int main(void){
	memset(father,-1,sizeof father);
	int n, q;
	scanf("%d %d",&n,&q);
	for(int i=1;i<=n;++i){
		scanf("%d",&values[i]);
	}
	for(int i=1;i<n;++i){
		int x, y;
		scanf("%d %d",&x,&y);
		nod[x].push_back(y);
		nod[y].push_back(x);
	}
	father[1]=0;
	define(1);
	while(q--){
		int type;
		scanf("%d",&type);
		if(type==1){
			int v;
			scanf("%d",&v);
			printf("%d\n",ind(father[v],values[v]));
		}else{
			int v, w;
			scanf("%d %d",&v,&w);
			values[v]=w;
		}
	}
	return 0;
}

