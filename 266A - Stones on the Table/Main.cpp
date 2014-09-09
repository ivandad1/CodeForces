#include<stdio.h>

int main(void){
    char s[50], last;
    int n;
    scanf("%d",&n);
    scanf("%s",&s);
    last=s[0];
    int ans=0;
    for (int i=1;i<n;i++){
        if(s[i]==last){
            ans++;              
        }else{
            last=s[i];
        }
    }
    printf("%d\n",ans);
    return 0;
}