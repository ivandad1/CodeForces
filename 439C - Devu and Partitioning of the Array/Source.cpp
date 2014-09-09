#include<stdio.h>
#include<vector>

using namespace std;

int main(void){
	int n,k,p;
	scanf("%d %d %d",&n,&k,&p);
	vector<int> par, impar;
	for(int i=0;i<n;++i){
		int x;
		scanf("%d",&x);
		(x%2?impar:par).push_back(x);
	}
	int pares = par.size(), impares = impar.size();
	int pl = 0;
	impares-=(k-p);
	if(impares%2==0 && impares>=0)
		pares+=impares/2;
	else{
		printf("NO");
		return 0;
	}
	if(pares<p){
		printf("NO");
		return 0;
	}
	printf("YES\n");
	pares = par.size(), impares = impar.size();
	int ind = k-p, in = 0;
	if(p==0)
		ind--;
	for(int i=0;i<ind;++i)
		printf("1 %d\n",impar[i]);	
	if(p==0){		
		printf("%d",impares-ind+pares-in);
		for(int i=ind;i<impares;++i)
			printf(" %d",impar[i]);	
		for(int i=in;i<pares;++i)
			printf(" %d",par[i]);
		return 0;
	}
	for(int i=0;i<p-1;++i)
		if(ind<impares){
			printf("2 %d %d\n",impar[ind], impar[ind+1]);
			ind+=2;
		}else{
			printf("1 %d\n",par[in]);
			in++;
		}		
	if(impares-ind+pares-in>0)
		printf("%d",impares-ind+pares-in);
	for(int i=ind;i<impares;++i)
		printf(" %d",impar[i]);	
	for(int i=in;i<pares;++i)
		printf(" %d",par[i]);	
	return 0;
}
