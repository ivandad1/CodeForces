#include<stdio.h>

using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	int v[] = {0,0,0};
	while(n--){
		int x, y, z;
		scanf("%d %d %d",&x,&y,&z);
		v[0]+=x;
		v[1]+=y;
		v[2]+=z;
	}
	
	if(v[0] || v[1] || v[2])
		printf("NO");
	else
		printf("YES");
	return 0;
}
