#include<stdio.h>
#include<cstring>

using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	int v[100001];
	memset(v,0,sizeof v);
	while(n--){
		int x,k;
		scanf("%d %d",&x,&k);
		if(v[k]==x){
			v[k]=x+1;
		}else if(v[k]>x){
			continue;
		}else{				
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
