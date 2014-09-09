#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<cstring>
#include<algorithm>
#define lli long long int
using namespace std;

lli modpow(lli  b, lli  e, lli  m) {
    lli result = 1;
    while (e > 0) {
        if ((e & 1) == 1) {
            result = (result * b) % m;
        }
        b = (b * b) % m;
        e >>= 1;
	}	
	return result;
}

lli extended_gcd(lli a,lli b){
    lli x = 0, lastx = 1;
    while(b!=0){
        lli quotient = a / b;
		lli temp = b;
		b=a%b;
		a=temp;
		temp=x;
		x=lastx - quotient*x;
		lastx=temp;
	}
    return lastx;
}
lli m2[100000], mod = 1000000007;
lli modpow2(int d){
	if(m2[d]<1){
		m2[d]=(modpow2(d-1)*2)%mod;
	}
	return m2[d];
}

int main(void){
	m2[0]=1;
	m2[1]=2;
	int k;
	char a[100000];
	scanf("%s",&a);
	getchar();
	scanf("%d",&k);
	int la = strlen(a);
	int p2 = modpow(2,la,mod);
	lli p22 = (modpow(p2, k, mod)-1);
	int d = la-1;
	lli suma = 0;
	for(int i=d;i>-1;--i){
		if(a[i]=='0' || a[i]=='5'){
			lli p = extended_gcd(p2-1,mod);
			if(p<0)p=mod+p;
			suma+=(modpow2(i)*p)%mod;
			suma%=mod;
		}
	}
	suma=(suma*p22)%mod;
	printf("%I64d",suma);
	return 0;
}