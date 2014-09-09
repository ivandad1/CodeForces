#include<stdio.h>

int main(void){
	int n, temp;
	int ch[4];
	for (int i = 0; i < 4; i++){
		ch[i]=0;
	}
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d",&temp);
		ch[temp-1]++;
	}
	int taxis=ch[3];
	taxis+=ch[2];
	ch[0]-=ch[2];
	taxis+=ch[1]/2;
	if(ch[1]%2!=0){
		taxis+=1;
		ch[0]-=2;
	}
	if(ch[0]>0){
		taxis+=ch[0]/4;
		if(ch[0]%4!=0)taxis++;
	}
	printf("%d\n",taxis);
	return 0;
}