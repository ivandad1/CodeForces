#include<stdio.h>
#include<algorithm>

using namespace std;
pair<int, int> x[10000];
int main(void){
	int n,s;
	scanf("%d %d",&s,&n);
	for (int i = 0; i < n; i++){
		scanf("%d %d",&x[i].first,&x[i].second);
	}
	sort(x,x+n);
	bool pos=true;
	for (int i = 0; i < n; i++){
		if(x[i].first<s){
			s+=x[i].second;
		}else{
			pos=false;
			break;
		}
	}
	if(pos)printf("YES\n");
	else printf("NO\n");
	return 0;
}