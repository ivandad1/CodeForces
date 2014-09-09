#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<sstream>

using namespace std;

int main(void){
    std::stringstream strstream;
    int n, m;
    scanf("%d %d",&n,&m);
    int cant = 0;
    int ln = 1, lm = 1;
    bool nn = false;
    while(true){
        cant++;
        strstream<<ln<<" "<<lm<<"\n";
        bool som = false;
        if(nn){
            if(ln<n){
                ln++;
                som=true;
            }else if(lm<m){
                lm++;
                som=true;
            }   
            nn=false;
        }else{
            if(lm<m){
                lm++;
                som=true;
            }else if(ln<n){
                ln++;
                som=true;
            }   
            nn=true;
        }
        if(!som)break;
    }
    printf("%d\n",cant);
    printf("%s",strstream.str().c_str());
    return 0;
}