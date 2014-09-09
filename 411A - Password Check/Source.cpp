#include<stdio.h>
#include<cstring>

using namespace std;
int main(void){
	char cad[101];
	scanf("%s",&cad);
	int leng = strlen(cad);
	bool dig = false, min = false, may = false;
	for(int i=0;i<leng;i++){
		if(cad[i]>='0' && cad[i]<='9')
			dig = true;
		if(cad[i]>='a' && cad[i]<='z')
			min = true;
		if(cad[i]>='A' && cad[i]<='Z')
			may = true;			
	}
	printf((dig && min && may && leng>4)?"Correct":"Too weak");
	return 0;
}
