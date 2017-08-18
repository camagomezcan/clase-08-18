//PROGRAMA DE LAS DOS CUADRATICAS
#include <iostream>
#include <cmath>

double cuadratica(double a,double b, double c) /*Cuadratica tipica*/
{
	double x = sqrt(pow(b,2)-(4*a*c));
	return x;
	
	}
	
////////////////////

int main(void)
{	
	std::cout.precision(16); std::cout.setf(std::ios::scientific);
	int N = 200;
	double a=1.0,b=1.0,sol1,sol2;
	double c;
	double sol3,sol4;
	
	for(int i =1; i <= N ; i++)
	{
		c = pow(10,-i);
		sol1 = (-b + cuadratica(a,b,c));
		sol2 = (-b - cuadratica(a,b,c));
		sol3 = (-1*sol2);
		sol4 = (-1*sol1);
		std::cout<<i<<" \t "<<sol1/(2*a)<<" \t "<<sol2/(2*a)<<" \t "<<(-2*c)/sol3<<" \t "<<(-2*c)/sol4<<std::endl;
		}
	return 0;	
}
