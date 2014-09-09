#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>

using namespace std;

#define lli long long int

lli p10[20], uns[20];

int numcif(lli a){
	int nc = 0;
	while(a>0){
		a/=10;
		nc++;
	}
	return nc;
}

int dp(lli num, int unos, bool can){
	int nc = numcif(num);	
	if(num==0)
		return unos;	
	if(num/p10[nc]<6)
		can = false;	
	lli cnum = num, cnc = nc;
	int cunos = unos;
	while(cnum>=p10[nc]){
		cnum-=uns[nc];
		cunos+=nc;
	}
	lli d = dp(abs(cnum),cunos,!can);
	lli c = 1e5;
	if(can)	
		c = dp(uns[nc+1]-num,unos+nc+1, false);		
	return min(c,d);
}

int main(void){
	p10[1]=1;
	uns[0]=0;
	for(int i=1;i<17;++i)
		uns[i]=10*uns[i-1]+1;		
	for(int i=2;i<17;++i)
		p10[i]=10*p10[i-1];
	lli n;
	scanf("%I64d",&n);	
	printf("%d",dp(n,0,true));
	return 0;
}
