#include<stdio.h>
#include<iostream>
#include<cstring>

using namespace std;

int main(void){
	char s[100001];
	int num[100001];
	num[0]=0;
	cin>>s;
	int n = strlen(s);
	for (int i = 1; i < n; i++){
		if(s[i-1]==s[i])
			num[i]=num[i-1]+1;
		else
			num[i]=num[i-1];		
	}
	getchar();
	int m, l,r;
	scanf("%d",&m);
	for (int i = 0; i < m; i++){
		scanf("%d %d",&l,&r);
		printf("%d\n",num[r-1]-num[l-1]);
	}
	return 0;
}