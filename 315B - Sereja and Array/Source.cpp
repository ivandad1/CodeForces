#include <stdio.h>

int main(){
	int n,m,o,y,z,i;
	long inc = 0;
	scanf("%d %d",&n,&m);
	long vec[100001];
	for (i = 1; i <= n; i++){
		scanf("%d",&vec[i]);
	}
	for (i = 0; i < m; i++){
		scanf("%d %d",&o,&y);
		if(o==1){
			scanf("%d",&z);
			vec[y]=z-inc;
		}else if(o==2){
			inc+=y;
		}else{
			printf("%I32d\n",(vec[y]+inc));
		}
	}
	return 0;
}