#include<iostream>
#include<string>

using namespace std;

//##### sum of n numbers ###################

//int sum_numbers(int n)
//{
//	int sum = 0;
//	
//	if (n == 0)
//		return 0;
//
//	return sum_numbers(n - 1) + n;
//	
//}
//
//void main()
//{
//	
//	int sum_n;
//	sum_n = sum_numbers(10);
//	cout << sum_n;
//}

//##### sum of n numbers ###################

//##### factorial ###################

//int factorial(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//	{
//		return n * factorial(n - 1);
//	}
//}
//
//void main()
//{
//	cout<<factorial(5);
//}

//##### factorial ###################

//##### power ###################

//int power(int val, int pow)
//{
//	if (pow == 0)
//		return 1;
//	else
//	{
//		return val * power(val, pow - 1);
//	}
//}
//
//void main()
//{
//	cout << power(2, 5);
//}

//##### power ###################

// ############# taylor_series ##########################

//float taylor_single(float x, float n)
//{
//	if (n == 0)
//		return 1;
//
//	else
//	{
//		return (x / n)* taylor_single(x, n - 1);
//	}		
//}
//
//float taylor_series(float a, float b)
//{
//	if (b == 0)
//		return 1;
//	else
//	{
//		return taylor_single(a, b) + taylor_series(a, b - 1);
//	}
//}
//
//
//void main()
//{
//	cout<<taylor_single(2, 1)<<endl;
//	cout << taylor_single(2, 2) << endl;
//	cout << taylor_single(2, 3) << endl;
//	cout << taylor_single(2, 4) << endl;
//	cout << taylor_single(2, 5) << endl;
//	cout << taylor_single(2, 6) << endl;
//
//	cout << taylor_series(2, 10) << endl;
//
//}

// ############# taylor_series ##########################

// ################# taylor series using static variables ######################

//double e(double x, double n)
//{
//	static double p = 1;
//	static double f = 1;
//	double r;
//
//	if (n == 1)
//		return 1;
//	else
//	{
//		
//		r = e(x, n - 1);
//		//head recursion 
//		p = p * x;
//		f = f * n;
//
//		return r + p / f;
//
//	}
//
//}
//
//
//void main()
//{
//	cout << e(2, 10);
//}


// ################# taylor series using static variables ######################


// ############# TODO memoized taylor_series ##########################

//int cache[100] = { 0 };
//
//float taylor_single(float x, float n)
//{
//	if (n == 0)
//		cache[(int)n] = 1;
//		return 1;
//
//	else
//	{
//		cache[(int)n] = (x / n) * taylor_single(x, n - 1);
//		if cache[(int)(n - 1)] != 0)
//			return (x / n)* taylor_single(x, n - 1);
//	}		
//}
//
//float taylor_series(float a, float b)
//{
//	if (b == 0)
//		return 1;
//	else
//	{
//		return taylor_single(a, b) + taylor_series(a, b - 1);
//	}
//}
//
////
//void main()
//{
//}

// ############# Ignore: memoized taylor_series ##########################

// ############# TODO taylor_series (Horner's rule) O(n) from O(n2) multiplications ##########################
//double e_horner(double x, double n)
//{
//	static double den = n;
//
//	if (n == 0)
//		return 1; 
//	else
//	{
//		return 1 + (x / (den - n + 1)) * e_horner(x, n - 1);
//	}
//}
//
//double e_horner_course(double x, double n)
//{
//	static double s=1;
//
//	if (n == 0)
//		return s; //this is how we send the aggregated value
//	else
//	{
//		s =1 + (x / n)*s;
//		return e_horner_course(x, n - 1);
//	}
//}
//
//double e_horner_iterative(double x, double n)
//{
//	double s = 1;
//	for (; n>0;n--)
//	{
//		s = 1 + (x / n) * s;
//	}
//	return s;
//}
//
//void main()
//{
//	/*cout<<e_horner(2, 0)<<endl;
//	cout << e_horner(2, 1) << endl;
//	cout << e_horner(2, 2) << endl;*/
//	cout << e_horner_course(2, 40) << endl;
//	cout << e_horner_iterative(2, 40) << endl;
//}

// ############# TODO taylor_series (Horner's rule) O(n) from O(n2) multiplications ##########################

//################# Fibbonnaci series #############################

int F[10]; 

int fibonacci(int n)
{

	if (n <= 1)
	{
		F[n] = n;
		return n;
	}

	else
	{
		if (F[n - 2] == -1)
			F[n - 2] = fibonacci(n - 2);
		if (F[n - 1] == -1)
			F[n - 1] = fibonacci(n - 1);

		return F[n - 2] + F[n - 1];
	}
	

}

void main()
{
	//initialize cache 
	for (int i = 0; i < 10; i++)
		F[i] = -1;
		
		cout<<fibonacci(10);
}



//################# Fibbonnaci series #############################
