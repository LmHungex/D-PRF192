#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c, delta;
	printf("Enter a,b,c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	delta = b*b - 4*a*c;
	if( a==0){
		if(b==0){
			if(c==0)
				printf("Infinite solutions\n");
			else
				printf("No solution\n");
		}else
			printf("Linear solution: x = %.4lf\n", -c/b);
	} else if (delta < 0){
		printf("No real solutions\n");
	}else if (delta ==0){
		printf("One solution: x = %.4lf\n", -b / (2*a));
	}else{
		printf("The equation has two distinct solutions: \n");
		printf("x1 = %.4lf\n", (-b + sqrt(delta)) / (2*a));
		printf("x2 = %.4lf\n", (-b - sqrt(delta)) / (2*a));
	}
	return 0;
}
