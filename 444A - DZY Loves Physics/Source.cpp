#include<stdio.h>

using namespace std;

int main(void){
	int n, m;
	scanf("%d %d",&n,&m);
	double vals[501];
	for(int i=1;i<=n;++i){
		scanf("%lf",&vals[i]);
	}
	double max =0;
	while(m--){
		int a, b;
		double x;
		scanf("%d %d %lf",&a,&b,&x);
		double d = (vals[a]+vals[b])/x;
		if(d>max)
			max=d;
	}
	printf("%.10lf",max);
	return 0;
}
