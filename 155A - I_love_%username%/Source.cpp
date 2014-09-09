#include<stdio.h>

using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	int min;
	scanf("%d",&min);
	int max = min;
	int amz = 0;
	for(int i=1;i<n;++i){
		int x;
		scanf("%d",&x);
		if(x<min){
			min=x;
			amz++;
		}
		if(x>max){
			max=x;
			amz++;
		}				
	}
	printf("%d",amz);
	return 0;	
}
