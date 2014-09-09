#include<stdio.h>
#include<cstring>

using namespace std;

int main(void){
    int n;
    scanf("%d",&n);
    int m[20][20];
    memset(m,-1,sizeof m);
    m[n][n]=n;    
    for(int i=n;i>=0;i--){
        m[i][n]=i;
        m[2*n-i][n]=i;
        for(int j=i-1;j>=0;j--){
            m[i][n-i+j]=j;
            m[i][n-i+i+i-j]=j;
            m[2*n-i][n-i+j]=j;
            m[2*n-i][n-i+i+i-j]=j;
        }
    }
    
    for(int i=0;i<=2*n;i++){
        if(m[i][0]==-1)printf(" ");
        else printf("%d",m[i][0]);
        for(int j=1;j<=2*n;++j){
            if(m[i][j]==-1)printf("  ");
            else printf(" %d",m[i][j]);
            if(m[i][j]==0 && m[i][j+1]==-1)
                break;
        }
        printf("\n");
    }
    return 0;
}
