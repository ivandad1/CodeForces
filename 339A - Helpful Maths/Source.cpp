#include<stdio.h>
#include<cstring>

int main(void){
    char cad[100];
    scanf("%s",cad);
    int n = strlen(cad);
    int nums[4] = {0,0,0,0};
    for(int i=0;i<n;i+=2){
        nums[cad[i]-'0']++;
    }
    if(nums[1]>0){
        printf("1");
        nums[1]--;
    }else if(nums[2]>0){
        printf("2");
        nums[2]--;
    }else{
        printf("3");
        nums[3]--;
    }
    for(int i=1;i<=3;i++){
        while(nums[i]--)
            printf("+%d",i);    
    }
    return 0;
}
