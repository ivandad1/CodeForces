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
	int n;
	scanf("%d",&n);
	long long int en = 0;
	long long int ah = 0;
	long long int ts = 0;
	while(n--){
		long long int x;
		scanf("%I64d",&x);
		long long int ne = ah-x;
		ah=x;
		en+=ne;
		if(en<0){			
			ts-=en;	
			en=0;	
		}
	}
	printf("%I64d\n",ts);
	return 0;
}

