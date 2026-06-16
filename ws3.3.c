#include <stdio.h>

int isPalindrome(int n){
	int tmp = n, rev = 0;
	if(n<0) return 0;
	while(n>0){
		rev = rev*10 + n%10;
		n/=10;
	} return rev == tmp;
	
}


int main(){
	int m,n,i;
	
	printf("Enter m and n: ");
	scanf("%d %d", &m, &n);
	
	if (m>n){
		int tmp = m; m = n; n = tmp;
	}
	printf ("Palidrome numbers in [%d,%d] are: \n",m,n);
	for (i = m; i< n ; i++){
		if(isPalindrome(i))
			printf("%d ",i);
	}printf ("\n");
	return 0;
}
