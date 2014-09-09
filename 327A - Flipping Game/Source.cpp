#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;
int main(void){
    int n,t;
    scanf("%d",&n);
    int maxhere=0, maxsofar=0;
    int ones=0;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        if(t==0)t=1;
        else {
            t=-1;
            ones++;
        }
        maxhere = max(maxhere+t,0);
        maxsofar = max(maxsofar,maxhere);
    }
    if(maxsofar==0)printf("%d",ones-1);
    else printf("%d",maxsofar+ones);
    return 0;
}