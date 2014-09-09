#include<stdio.h>
int v[100];

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
    int n,sum=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d",&v[i]);
        sum+=v[i];
    }
    quickSort(0,n-1);
    int cont=0, sump=0;
    for (int i = n-1; i >= 0; i--){
        if(sump<=(sum)/2){
            cont++;
            sump+=v[i];
        }else{
            break;
        }     
    }      
    printf("%d\n",cont);
    return 0;
}