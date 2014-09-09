#include<stdio.h>
#include<cstring>

using namespace std;
int main(void){
    char cad[110];
    scanf("%s",&cad);
    getchar();
    char cad2[110];
    scanf("%s",&cad2);
    int leng = strlen(cad);
    if(strlen(cad2)!=leng){
        printf("NO");
        return 0;
    }
    for(int i=0;i<leng;++i){
        if(cad[i]!=cad2[leng-i-1]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
