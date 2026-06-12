#include <stdio.h>

int isPrime(int n){
	int i;
	if (n <= 1) return 0;
	for(i = 2; i * i <= n; i++){
		if(n % i == 0) return 0;
	}return 1;
}

int main(){
	int n,i,S1 = 0, S2 = 1;
	double S3 = 0.0;
	do{
		printf("Enter n = ");
		scanf("%d",&n);
		if(n <= 5)
		printf("n must be > 5, please reenter!\n");
	}while (n <= 5);
	
	for(i = 1; i <= n; i++)
		S1 += i;
	printf ("s1 = %d\n", S1);
	
	for (i = 1; i <= n; i++)
		S2 *= i;
	printf ("s2 = %d\n",S2);
	
	for (i = 1; i <= n; i++)
		S3 += 1.0/i;
	printf ("s3 = %.4lf\n",S3);
	
	printf("\n");
	
	printf("Enter n = ");
	scanf("%d",&n);
	if(isPrime(n)){
		printf("%d is a prime number",n);
	}else{
		printf("%d is not a prime number",n);
	}
		
	
	
	
}
