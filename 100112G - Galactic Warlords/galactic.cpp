#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

#define PI acos(-1.0)
#define INF 1e9
#define EPS 1e-9

struct point{
	double x, y;

	point() { x = y = 0; }

	point(double _x, double _y) : x(_x), y(_y) {}

	bool operator < (point other) const {
		if (fabs(x-other.x) > EPS)
			return x < other.x;
		return y < other.y;
	}

	bool operator == (point other) const {
		return fabs(x-other.x) < EPS && fabs(y-other.y) < EPS;
	}	
};

struct line { double a, b, c; };     

void pointsToLine(point p1, point p2, line &l) {
	if (fabs(p1.x - p2.x) < EPS) {             
		l.a = 1.0;   l.b = 0.0;   l.c = -p1.x;    
	} else {
		l.a = -(double)(p1.y - p2.y) / (p1.x - p2.x);
		l.b = 1.0;              
		l.c = -(double)(l.a * p1.x) - p1.y;
	} 
}

bool areParallel(line l1, line l2) { 
  return (fabs(l1.a-l2.a) < EPS) && (fabs(l1.b-l2.b) < EPS); 
}

bool areSame(line l1, line l2) {          
  return areParallel(l1 ,l2) && (fabs(l1.c - l2.c) < EPS); 
}

int main(void) {		
	int W, N;
	int x1, y1, x2, y2;
	vector<line> vec;
	scanf("%d %d",&W,&N);
	bool para = true;
	for (int i = 0; i < N; i++) {
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		line lin;
		pointsToLine(point(x1, y1), point(x2, y2), lin);
		int siz = vec.size();
		bool in = false;
		for (int j = 0; j < siz; j++){
			if(areSame(vec[j],lin)){
				in = true;		
				continue;
			}
			if(!areParallel(vec[j],lin))
				para = false;		
		}
		if(!in)vec.push_back(lin);			
	}
	int dif = vec.size();
	int infinites;
	if(para)infinites = dif + 1;
	else infinites = 2 * dif;
	int add = 0;
	while(infinites<W){		
		add++;
		if(para){
			infinites*=2;
			para=false;
		}else 
			infinites+=2;
	}
	printf("%d",add);	
	return 0;
}