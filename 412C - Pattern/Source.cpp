#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<math.h>

using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	char cad[100000];
	char c[100000];
	getchar();
	scanf("%s",&cad);
	n--;
	int leng = strlen(cad);
	while(n--){
		getchar();
		scanf("%s",&c);
		for(int i=0;i<leng;++i){
			if(cad[i]==c[i]){
				continue;
			}
			if(cad[i]=='?'){
				cad[i]=c[i];
				continue;
			}
			if(c[i]=='?'){
				continue;
			}
			cad[i]='.';
		}
	}
	for(int i=0;i<leng;++i){
		if(cad[i]=='?'){
			cad[i]='a';
		}
		if(cad[i]=='.'){
			cad[i]='?';
		}
	}
	printf("%s",cad);
	return 0;
}
