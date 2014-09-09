#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    char f[1000];
    getchar();
    for(int i=0;i<n;i++){
        scanf("%c",&f[i]);
    }
    int fl=-1, ll=-1, fr=-1,lr=-1;
    for(int i=0;i<n;i++){
        if(f[i]=='R'){
            lr=i;
            if(fr==-1)fr=i;
        } 
        if(f[i]=='L'){
            ll=i;
            if(fl==-1)fl=i;
        }               
    }
    if(lr==-1){
        printf("%d %d",ll+1,fl);
    }else if (ll==-1){
        printf("%d %d",fr+1,lr+2);
    }else{
        printf("%d %d",fr+1,lr+1);
    }
    return 0;
}