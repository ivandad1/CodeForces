#include<stdio.h>

int abs(int n){
    if(n>=0)return n;
    return -n;
}


int main(void){
    int n, m, d, v[100][100];
    scanf("%d %d %d",&n, &m, &d);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&v[i][j]);            
        }
    }
    bool pos=true;
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            if((v[i][j]-v[0][0])%d!=0)pos=false;                     
        }
    }
    if(!pos){
        printf("-1");
    }else{
        int min=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int tot=0;
                for(int k=0;k<n;k++){
                    for(int l=0;l<m;l++){
                        tot+=(abs(v[i][j]-v[k][l]))/d;
                    }
                }
                if(min==-1)min=tot;
                else if(tot<min)min=tot;
            }
        }    
    printf("%d",min);   
    }
    
    return 0;
}