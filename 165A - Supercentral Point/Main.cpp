#include<stdio.h>
#include<algorithm>

using namespace std;
pair<int, int> x[200];
int n;

bool iscentral(int j){
	bool u=false,d=false,r=false,l=false;
	for (int i = 0; i < n; i++){
		if(x[j].first==x[i].first && x[j].second>x[i].second)u=true;
		if(x[j].first==x[i].first && x[j].second<x[i].second)d=true;
		if(x[j].first<x[i].first && x[j].second==x[i].second)r=true;
		if(x[j].first>x[i].first && x[j].second==x[i].second)l=true;
	}
	if(u && d && r && l)return true;
	return false;
}

int main(void){
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d %d",&x[i].first,&x[i].second);
	}
	int cont=0;
	for (int i = 0; i < n; i++){
		if(iscentral(i))cont++;
	}
	printf("%d",cont);
	return 0;
}