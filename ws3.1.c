#include <stdio.h>

void binary(int n){
	int binary[32], count = 0, i, tmp = n;
	
	if(tmp == 0){
		binary[count++] = 0;
		
	}
	while (tmp >0){
		binary[count++] = tmp %2;
		tmp = tmp/2;
		
	}
	for (i = count -1; i >= 0; i--)
		printf("%d", binary[i]);
		printf("\n");
	
}

int sumOfAllDigits(int n){
	int sum = 0, tmp;
	if(n<0)
	tmp = -n;
	else
	tmp = n;
	while (tmp >0 ){
		sum = sum + tmp %10;
		tmp = tmp / 10;
	}
	return sum;
}

long long reverse(int n){
	long long rev = 0;
	int tmp;
	tmp = (n<0) ? -n : n;
	while (tmp >0){
		rev = rev * 10 + tmp %10;
		tmp = tmp /10;
	}
	if(n<0) rev = -rev;
	return rev;
}

int main(){
	int n;

	do{
		printf("Enter n = ");
		scanf("%d",&n);	
		if (n<0)
		printf ("Error,please enter again!");
	}while (n<0);
	printf("%d in binary number format is: ", n);
	binary(n);
	printf("\n");
	printf("Enter n = ");
	scanf("%d",&n);
	
	printf("The sum of all digits in %d is %d\n", n, sumOfAllDigits(n));
	printf("\n");
	printf("The reverse number of %d is %lld\n",n,reverse(n));
	
	return 0;	
	
	
	
}
