#include<stdio.h>
#include<algorithm>

using namespace std;

int main(void){
	int n, m, a, b;
	scanf("%d %d",&n,&m);
	int v[100000];
	for (int i = 0; i < n; i++){
		scanf("%d %d",&a,&b);
		if(i==0){
			v[0]=a*b;
		}else{
			v[i]=a*b+v[i-1];
		}
	}
	int c = 0, d;
	for (int i = 0; i < m; i++){
		scanf("%d",&d);
		while(v[c]<d)c++;
		printf("%d\n",(c+1));
	}
	return 0;
}