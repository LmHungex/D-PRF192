#include <stdio.h>
#include <math.h>

double myExp(double x, int n){
	double S =1.0, constant = 1.0;
	int i;
	
	for( i = 1; i <= n; i++){
		constant = constant * x / i;
		S = S + constant;
	}
	return S;
}

double myExp1(double x, double epsi){
	double S = 1.0, term = 1.0;
	int i = 0;
	
	do{
		i++;
		term = term * x / i;
		S = S + term;
	}while ( fabs(term) > epsi);
	
	return S;
}

double myPi(double epsi){
	double sum = 1.0,sign = 1.0 ,term;
	int n = 0;
	
	do{
		n++;
		sign = -sign;
		term = sign / (2.0 * n + 1.0);
		sum += term;
	} while (fabs(1.0 / (2.0 * n + 1.0)) > epsi);
	
	return 4.0 * sum;
}

double mySin(double x, double epsi){
	double sum , term = x;
	int n = 0;
	sum = term;
	
	while(fabs(term) > epsi){
		n++;
		term *= -x * x / ((2.0*n) * (2.0 * n + 1.0));
		sum += term;
	}
	return sum;
}

double myCos(double x, double epsi){
	double sum = 1.0, term = 1.0;
	int n = 0;
	
	do{
		n++;
		term *= -x * x / ((2.0*n - 1.0) * (2.0 * n));
		sum += term;
	}while (fabs(term) > epsi);
	
	return sum;
}

int main(){
	system("cls");
	double x, epsi;
	int n;
	x = 1.5;
	epsi = 0.00001;
	n = 1000;
	
	printf("\n");
	printf(" exp(%.1f) = %f\n",x,exp(x));
	printf(" exp(%.1f,%d) = %f\n",x,n,myExp(x,n));
	printf(" exp(%.1f,%f) = %f\n",x,epsi,myExp1(x,epsi));
	printf("\n");
	
	printf(" pi = %f\n",M_PI);
	printf(" pi(%f) = %f\n",epsi, myPi(epsi));
	printf("\n");
	
	printf(" sin(%.1f) = %f\n",x,sin(x));
	printf(" sin(%.1f,%f) = %f\n", x, epsi,mySin(x,epsi));
	printf("\n");
	
	printf(" cos(%.1f) = %f\n",x,cos(x));
	printf(" cos(%.1f,%f) = %f\n", x, epsi,myCos(x,epsi));
	printf("\n");
	
	system("pause");
	return 0;
	
}
