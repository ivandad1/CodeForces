#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	int last=5, suma=5;
	while(suma<n){
		last=2*last;
		suma+=last;
	}	
	suma-=last;
	n=n-suma;
	int con=last/5;
	if(n%con==0)n--;
	n=n/con;
	n++;
	switch(n){
		case 1: printf("Sheldon\n");
			break;
		case 2: printf("Leonard\n");
			break;
		case 3: printf("Penny\n");
			break;
		case 4: printf("Rajesh\n");
			break;
		default: printf("Howard\n");
	}
	return 0;
}