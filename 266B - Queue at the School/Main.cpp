#include<stdio.h>
#include<vector>

using namespace std;

int main(void){
	char temp;
	int n, t;
	vector<char> vec;
	scanf("%d %d\n", &n, &t);
	for (int i = 0; i < n; i++){
		vec.push_back(getchar());
	}
	for (int j = 0; j < t; j++){
		for (int i = n-1; i > 0; i--){		
			if(vec[i]=='G' && vec[i-1]=='B'){
				temp=vec[i];
				vec[i]=vec[i-1];
				vec[i-1]=temp;
				i--;
			}
		}
	}
	
	for (int i = 0; i < n; i++){
		printf("%c",vec[i]);
	}
	return 0;
}