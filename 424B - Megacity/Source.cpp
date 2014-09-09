#include<stdio.h>
#include<algorithm>
#include<vector>
#include<math.h>
#include<cstring>

using namespace std;

bool compare(pair<double, int> a, pair<double, int> b){
	return a.first<b.first;	
}

int main(void){
	int n,s;
	scanf("%d %d", &n,&s);
	vector<pair<double, int> > dist;
	for(int i = 0;i<n;++i){
		int x,y,k;
		scanf("%d %d %d",&x,&y,&k);
		dist.push_back(make_pair(hypot(x,y),k));		
	}
	sort(dist.begin(),dist.end(), compare);
	double ld = 0;
	int i=0;
	while(s<1000000 && i<n){
		ld = dist[i].first;
		s+=dist[i].second;
		i++;
	}
	if(s>=1000000){
		printf("%lf",ld);
	}else{
		printf("-1");
	}
	return 0;
}
