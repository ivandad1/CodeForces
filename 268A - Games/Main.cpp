#include<stdio.h>
#include<algorithm>

using namespace std;

int main(void){
	int n, cont=0;
	scanf("%d",&n);
	pair<int, int> x[30];
	for (int i = 0; i < n; i++)
		scanf("%d %d",&x[i].first,&x[i].second);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if(i!=j && x[i].first==x[j].second)cont++;
	printf("%d",cont);	
	return 0;
}