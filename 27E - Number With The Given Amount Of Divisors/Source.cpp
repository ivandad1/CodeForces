#include<stdio.h>
#include<cstring>
#include<bitset>
#include<vector>
#include<cmath>
#include<algorithm>
#include<map>
#define lli long long int

using namespace std;

int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53 };
int n;
lli ans = 1e18;
map<lli, bool> mp;

void maxdiv(int* exp, int plc, int pas, lli num){
    if (pas == plc)
        plc++;
    exp[pas]++;
    num*= primes[pas];
    if(num<0)
    	return;    	
    if (num>ans || mp[num])
        return;        
    mp[num]=true;
    
    int nd = 1;
    for (int i = 0; i<plc; ++i)
        nd *= (exp[i] + 1); 
        
        
    if (nd==n){
        ans = min(num, ans);
    }           
    
    
    maxdiv(exp, plc, 0, num);
    exp[0]--;
    for (int i = pas; i<plc; ++i){
        if (exp[i - 1]>exp[i]){
            maxdiv(exp, plc, i, num);
            exp[i]--;
        }
    }
    maxdiv(exp, plc, plc, num);
    exp[plc]--; 
}

int main(void){
    scanf("%d", &n);
    if(n==1){
        printf("1\n");
        return 0;
    }
    int exp[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    maxdiv(exp, 0, 0, 1);
    printf("%I64d\n", ans); 
    return 0;
}
