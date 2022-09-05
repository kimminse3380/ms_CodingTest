#include<stdio.h>

int main(void){
	int n, v,cnt;
	scanf("%d", &n);
	int memo[n];
	for(int i=0; i<n; i++){
		scanf("%d", &memo[i]);
	}
	
	scanf("%d", &v);
	for(int j=0; j<n; j++){
		if(memo[j]==v){
			cnt++;
		}
	}
	printf("%d", cnt);
}