#include <stdio.h>

int isPrime(int n){
	int i;
	if(n <= 1) return 0;
	for (i = 2; i*i <= n; i++)
		if (n % i == 0) return 0;
	return 1;
}

int GCD(int a, int  b){
	int i;
	while (b != 0){
		i = b;
		b = a % b;
		a = i;
	} return a;
}

int LCM(int a, int b){
	return a / GCD(a,b) * b;
}
int main(){
	int m,n,i;
	int found = 0;
	int limit;
	
	printf("Enter m = "); scanf("%d",&m);
	printf("Enter n = "); scanf("%d",&n);
	
	printf ("Common prime dividers of %d and %d: ", m, n);
	if(m < n)
		limit = m;
	else 
		limit = n;
	
	for ( i =2; i <= limit; i++){
		if(isPrime(i) && m % i == 0 && n % i == 0){
			printf("%d ",i);
			found = 1;
		}	
	}
	
	if(found == 0)
		printf("none");
	printf ("\n");
	
	printf ("GCD(%d, %d) = %d\n", m, n,GCD(m,n));
	printf ("LCM(%d, %d) = %d\n", m, n,LCM(m,n));
	
	return 0;
	
	
}
