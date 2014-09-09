#include<stdio.h>
#include<cstring>

using namespace std;

int main(void){
	int n;
	bool m[100001];
	memset(m, false, sizeof m);
	scanf("%d",&n);
	n--;
	while(n--){
		int x;
		scanf("%d",&x);
		m[x]=true;
	}
	for(int i=1;;i++)
		if(!m[i]){
			printf("%d",i);
			return 0;
		}
	return 0;
}
