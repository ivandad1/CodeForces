#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main(void){
	int r,g,b;
	scanf("%d %d %d",&r,&g,&b);
	int cant = 0;
	int aux1 = int(r/3);
	int aux2 = int(g/3);
	int aux3 = int(b/3);
	int aux = min(aux1, min(aux2,aux3))-1;
	if(aux==-1)aux++;
	r-=3*aux;
	g-=3*aux;
	b-=3*aux;
	cant = 3*aux;
	int ma = cant;
	aux = min(r,min(g,b));
	for(int i=0;i<=aux;i++){
		int cant2 = cant;
		int cr=r-i,cg=g-i,cb=b-i;
		cant2+=i;
		cant2+=int(cr/3)+int(cg/3)+int(cb/3);
		cr%=3;cg%=3;cb%=3;
		cant2+=min(cr,min(cg,cb));
		if(cant2>ma)ma=cant2;
	}
	printf("%d",ma);
	return 0;
}