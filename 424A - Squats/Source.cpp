#include<stdio.h>
#include<algorithm>
#include<vector>
#include<math.h>
#include<cstring>

using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	getchar();
	char cad[201];
	scanf("%s",&cad);
	int tot = 0;
	for(int i=0;i<n;i++){
		if(cad[i]=='x'){
			tot++;
		}
	}
	printf("%d\n",abs(n/2-tot));
	for(int i=0;i<n;i++){
		if(tot<n/2 && cad[i]=='X'){
			tot++;
			cad[i]='x';
			
		}else if(tot>n/2 && cad[i]=='x'){
			tot--;
			cad[i]='X';
		}else if (tot==n/2){
			break;
		}
	}
	printf("%s",cad);
	return 0;
}
