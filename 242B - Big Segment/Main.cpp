#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;
std::vector<pair< pair<int, int>, int> > x;

bool comparator (pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){
	if(a.first.first!=b.first.first)return a.first.first<b.first.first;
	return a.first.second<b.first.second;	 
}

int main(void){
	int n, min, max,j=0;
	pair<pair<int, int>, int> temp;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){		
		scanf("%d %d",&temp.first.first,&temp.first.second);
		temp.second=i+1;
		x.push_back(temp);
	}
	std::sort(x.begin(), x.end(), comparator);
	min=x[0].first.first;
	while(x[j].first.first==min)j++;
	max=x[j-1].first.second;
	bool con=true;
	for (int i = 0; i < n; i++){
		if(x[i].first.second>max)con=false;
	}
	if(con)printf("%d\n",x[j-1].second);
	else printf("-1\n");
	return 0;
}