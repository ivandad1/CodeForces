#include<stdio.h>
#include<math.h>

double dist(int x1, int y1, int x2, int y2){
	return sqrt(pow(x1-x2,2.0)+pow(y1-y2,2.0));
}

int main(void){
	int n,k, lx, ly, x , y;
	scanf("%d %d",&n,&k);
	scanf("%d %d",&lx,&ly);
	double total=0;
	for (int i = 1; i < n; i++){
		scanf("%d %d",&x,&y);
		total+=dist(x,y,lx,ly);
		lx=x;ly=y;
	}
	total*=k;
	total/=50;
	printf("%0.8f",total);
	return 0;
}