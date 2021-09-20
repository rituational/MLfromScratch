#include<iostream>

using namespace std;

void display_asc(int n)
{
	if (n > 0)
	{
		// while calling 
		cout << n << endl;
		display_asc(n - 1);
	}
}

void display_dec(int n)
{
	if (n > 0)
	{
		// while exec
		display_asc(n - 1);
		cout << n << endl;
	}
}

void display_dec_static()
{		
	static int n = 5;
	
	if (n > 0)
	{
		// while calling		
		n--;
		display_dec_static();
		cout << n << endl; // prints 0 five times! 
		// The fn isnt storing a copy of n at every iteration, it keeps updating the n in main memory. 
		// So when it is traced back we get 0 everywhere. Beware!
		
	}
}

void display_dec_add_static(int n)
{
	static int a = 5;

	if (n > 0)
	{
		display_dec_add_static(n-1);
		a++; // since a updated during descending, every descent gets a higher a.
		cout << "value of a" << a << endl;
		cout << "output" << n +a << endl;  //

	}
}

void display_asc_add_static(int n)
{
	static int a = 15;

	if (n > 0)
	{
		a++;
		display_asc_add_static(n - 1);
		cout << "value of a" << a << endl;
		cout << "output"<< n + a << endl;  //since a fully updated during ascent, all get same a=10 while descent.

	}
}

void main() {
	
	/*int num;
	cin >> num;
	display_asc();*/


	//display_dec_static();


	int num;
	cin >> num;

	void (*fp)(int);
	fp = display_dec_add_static;

	(*fp)(num);

	fp = display_asc_add_static;

	(*fp)(num);

}