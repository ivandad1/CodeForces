#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int lli;

int main(void){
	int n, s;
	scanf("%d %d",&n,&s);
	int md = 0;
	bool can = false;
	for(int i=0;i<n;++i){
		int x, y;
		scanf("%d %d",&x,&y);
		if(x==s && y==0){
			can = true;
		}
		if(x<s){	
			can = true;
			if(y!=0)
				md=max(md,100-y);
		}
	}
	printf("%d\n",can?md:-1);
	return 0;
}

