#include<stdio.h>

int main(void){
	int n, cont=1,max=1, h, m, lh, lm;
	scanf("%d",&n);
	scanf("%d %d",&lh,&lm);
	for (int i = 1; i < n; i++){
		scanf("%d %d",&h,&m);
		if(lh==h && lm==m)cont++;
		else{
			if(max<cont)max=cont;
			cont=1;
		}
		lh=h;lm=m;
	}
	if(max<cont)max=cont;
	printf("%d\n",max);
	return 0;
}