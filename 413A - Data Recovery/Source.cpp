#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<vector>

using namespace std;

int main(void){
	int n,m,min,max;
	scanf("%d %d %d %d",&n,&m,&min,&max);
	int rmin=10000, rmax=-1;
	for(int i=0;i<m;++i){
		int t;
		scanf("%d",&t);
		if(t<rmin)
			rmin=t;
		if(t>rmax)
			rmax=t;
	}
	if(rmin<min || rmax>max){	
		printf("Incorrect");
		return 0;
	}
	int ne = n-m;
	if(rmin==min || rmax==max){
		printf("Correct");
		return 0;
	}
	if(ne==1){
		printf("Incorrect");
		return 0;
	}
	printf("Correct");	
	return 0;
}
