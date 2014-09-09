#include<stdio.h>
int v[1001];

void quickSort(int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = v[(left + right) / 2]; 
      while (i <= j) {
            while (v[i] < pivot)
                  i++;
            while (v[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = v[i];
                  v[i] = v[j];
                  v[j] = tmp;
                  i++;
                  j--;
            }
      };
      if (left < j)
            quickSort(left, j);
      if (i < right)
            quickSort(i, right);
}

int main(void){
	int n,x;
	scanf("%d %d",&n, &x);
	for (int i = 0; i < n; i++)scanf("%d",&v[i]);
	quickSort(0,n-1);
	int cont=0, times=0;
	for (int i = 0; i < n; i++){
		if(v[i]<x)cont++;
		else if(v[i]==x){
			times++;
		}else break;
	}	
	int ans=0,t;
	if(cont+times<n+1/2)t=x-1;
	else t=v[n-1]+1;
	while(v[((n+1)/2)-1]!=x){
		v[n]=x;
		n++;
		quickSort(0,n-1);
		ans++;
	}
	printf("%d\n",ans);
	return 0;
}