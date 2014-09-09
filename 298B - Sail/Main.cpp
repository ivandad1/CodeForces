#include<stdio.h>

int main(void){
    int n,x,y,fx,fy;
    char c;
    scanf("%d %d %d %d %d",&n, &x, &y, &fx, &fy);
    getchar();
    for(int i=0;i<n;i++){
        c=getchar();
        if(c=='N'){
            if(y<fy)y++;
        }
        if(c=='S'){
            if(y>fy)y--;
        }
        if(c=='E'){
            if(x<fx)x++;
        }
        if(c=='W'){
            if(x>fx)x--;
        }        
        if(x==fx && y==fy){
            printf("%d",(i+1));
            return 0;
        }        
    }
    printf("-1");
    return 0;
}