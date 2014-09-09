#include<stdio.h>

using namespace std;

void max(int* v, int cif, int mm){
	for(int i=0;i<cif-1;++i){
		int mt = v[i], p = 0;
		for(int j=i;j<cif;++j)
			if(mt<v[j]){
				if(j-i<=mm){
					mt = v[j];
					p=j;
				}else
					break;										
			}		
		if(p!=0){
			for(int k=p;k>i;--k)
				v[k]=v[k-1];			
			v[i]=mt;
			mm-=p-i;
		}
	}
}

int main(void){
	int num[20];
	int cif = 0;
	while(true){
		char c = getchar();
		if(c==' ')
			break;
		num[cif]=c-'0';
		cif++;
	}
	int mm;
	scanf("%d",&mm);
	max(num,cif,mm);
	for(int i=0;i<cif;++i)
		printf("%d",num[i]);	
	return 0;
}
