# include <iostream>
# include <cmath>
#include <numbers>
#include<string>

using namespace std;

enum day { mon, tue, wed, thurs, fri, sat, sun };

typedef int rollno;

int main() {

	//#############
	//string a, b, c;

	//cin >> a>> b;
	//c = a + b;

	//cout << "Hi," << a << "Welcome to" << b;
	//#############

	//############# start, division operator ###################################
	//case 1
	/*int a, b, quo, rem;

	a = 5;
	b = 2; 
	quo = a / b;
	rem = a % b; 

	cout << quo << rem << endl;*/

	//case 2 
	/*int a, b, rem;
	float quo;
	a = 5;
	b = 2;
	quo = a / b;
	rem = a % b;

	cout << quo << rem << endl;
	cout << "even though quo is float, we haven't typecasted our division";*/ 

	//case 3
	/*int a, b, rem;
	float quo;
	a = 5;
	b = 2;
	quo = (float)a / b;
	rem = a % b;

	cout << quo << rem << endl;
	cout << "even though quo is float, we haven't typecasted our division";*/

	// ############# end, division operator ###################################


	//############ start,  calculate area ###################################
	
	//float h, w, area;

	//cin >> h >> w;
	//area = (h * w)/2; //float division is float

	//cout<< "area of triangle is "<<area;

	
	//############# end,  calculate area ###################################


	//############ start,  sum n numbers ###################################

	//int n, sum;
	//cout << "Input n"<<endl;
	//cin >> n;

	//sum = n * (n + 1) / 2;
	//cout << "Sum is" << sum;
	//############# end,  sum n numbers ###################################

	//############ start,  roots of quadratic ###################################

	//float a, b, c, inter, root_1, root_2;

	//cout << "Enter coefficients a, b, c";
	//cin >> a>> b>> c;

	//cout << a << b << c;
	//inter = sqrt(b*b - 4 * a * c); 
	//root_1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	//root_2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a); 

	//cout << "roots are" << root_1 << root_2;


	//############ end,  roots of quadratic ###################################

	//############ start,  pre post inc/decrement ###################################

	////case 1
	
	//int a = 5, b;

	//b = a++; //first assing, b =5, later increments a=6 
	//cout << a<< b<<endl;

	////int a = 5, b;

	//int c = 5, d;
	//d = ++c; //first increment x=6, assign y=6
	//cout << c<< d<<endl;

	////case 2
	//int x =3, y=10, z;

	//z = x++ * y; //first z = x*y = 30, then x = 4 
	//cout << x << y << z; 

	//int a = 3, b = 10, c;

	//c = ++a* b; //first increment a=4, c = a*b = 40
	//cout << a << b << c;
	//############ end,  pre post inc/decrement ###################################

	//############ start,  overflow ###################################
	/*char a = 127;
	cout << (int)a;

	a++;
	cout << "after increment" << (int)a;*/

	//############ end,  overflow ###################################

	//############ start,  bitwise ###################################

	/*int a = 10, b=31, c, d;

	c = a << 2;
	cout << c<<endl;
	c = b >>  2;
	cout << c << endl;
	d = a & b;
	cout << d;*/

	//############ end,  bitwise ###################################

	//############ start,  enum ###################################
	
	////day d = 1; //cannot be assigned int
	//day d;
	//d = mon;
	////mon++; //doesnt work
	//d = tue; 
	//cout << d;
	//############ end,  enum ###################################

	//############ start,  typedef  ###################################
	/*rollno r1, r2, r3; 
	r1 = 3;
	cout << r1;*/
	//############ end,  typedef  ###################################
	
	//############ start,  area of circle  ###################################
	/*float radius, area;

	cout << "Enter radius";
	cin >> radius;

	area = 2 * 3.14 * radius * radius;

	cout << "Area is" << area;*/
	//############ end,  area of circle  ###################################

	//############ start,  dynamic declaration  ###################################

	//case 1
	//int a = 5;

	//if (true) {
	//	int c;
	//	c = a;
	//}
	//cout << c; //throws error as c got deleted when if ended. 
	// 
	//case 2
	// not wokring, older version?
	/*int a = 5;
	if (int k = 2 * a; k > 5)
		cout << k;*/

	//############ end,  dynamic declaration  ###################################
	
	//############ start, switch  ###################################
	/*int d = 3;

	switch (d)
	{
	case 1: 
		cout << "sunday";
		break;
	case 2:
		cout << "monday";
		break;
	default:
		cout << "not sunday, monday";
	}*/

	//############ end,  dynamic declaration  ###################################

	//############ start, if practice  ###################################
	/*int year = 2004; 
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0)
				cout << "leap century";
		}
		else
			cout << "leap";

	}
	else
		cout << "not leap";*/

	//############ end, if practice  ###################################
	
	//############ start, for loop  ###################################
	
	//case 1
	/*int i = 0;
	for (;i < 10;)
	{
		cout << "hello";
		i++;
	}*/
	////case 2 (to show we dont need to specify anything in for declaration 
	//int i = 0;
	//for (;;)
	//{
	//	if (i > 5)
	//		break;
	//	cout << "hello";
	//	i++;
	//}

	//############ end, for loop ###################################
	
	//############ start, multiplication table  ###################################
	
	/*int n = 6;
	int mult = n;

	for (int i=0; i <= 10; i++) {
		cout << mult;
		mult += 6;

	}
	*/
	
	//############ end, multiplication table  ###################################

	// ################# start, sum n nat numbers ##############################
	
	/*int n = 5;
	int sum = 0;
	for (int i = 1;i <= n; i++) {
	sum += i;
	}
	cout << sum;*/

	// ################# end, sum n nat numbers ##############################
	
	// ################# start, factorial ##############################
	
	 
	/*int fact = 1;
	for (int n = 3;n > 0; n--) {
		fact *= n;
	}
	cout << fact;*/
	// ################# end, factorial ##############################

	// ################# start, factors ##############################


	/*int n=8;
	
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			cout << i<<endl;
	}*/
	// ################# end, factors ##############################
	
	// ################# start, perfect number ##############################

	//int n=6;
	//int sum_factors = 0;

	//for (int i = 1; i < n; i++) {
	//	if (n % i == 0)
	//		sum_factors += i;
	//}
	////cout << sum_factors;
	//if (sum_factors == n)
	//	cout << "Perfect Number";
	// ################# end, perfect number ##############################
	
	// ################# start, prime number ##############################

	//int n = 13;
	//string output = "prime";

	//for (int i = 2; i < n; i++) {
	//	if (n % i == 0)
	//		output = "not prime";
	//		break;
	//}

	//cout << output;
	// ################# end, prime number ##############################
	
	// ################# start, display digits ##############################
	/*int number =1234, rem = number;

	while (rem > 0) {

		cout << rem % 10;
		rem = rem / 10;
	}*/
	// ################# end, display digits ##############################
	
	// ################# start, armstrong number ##############################
	//
	//int number = 350; //370
	//int rem = number, cube_sum = 0;

	//while (rem > 0) {

	//	cube_sum += pow(rem % 10,3);
	//	rem /= 10;
	//}

	//if (cube_sum == number)
	//	cout << "armstrong";
	//else
	//	cout << "not armstrong";

	// ################# end, armstrong number ##############################
	
	// ################# start, reverse number ##############################
	/*int number =1234, rem = number, rev=0;

	while (rem > 0) {

		rev = rev*10 + (rem % 10);
		rem = rem / 10;
	}
	cout << rev;*/
	// ################# end, reverse number ##############################

	// ################# start, palindrome ##############################
	/*int number =121, rem = number, rev=0;
	string output = "not palindrome";

	while (rem > 0) {

		rev = rev*10 + (rem % 10);
		rem = rem / 10;
	}

	if (number == rev)
		output = "Palindrome";

	cout << output;*/
	// ################# end, palindrome ##############################

	// ################# start, palindrome ##############################
	/*int number =121, rem = number, rev=0;
	string output = "not palindrome";

	while (rem > 0) {

		rev = rev*10 + (rem % 10);
		rem = rem / 10;
	}

	if (number == rev)
		output = "Palindrome";

	cout << output;*/
	// ################# end, palindrome ##############################

	// ################# start, gcd ##############################
	
	/*int a = 25, b = 3;

	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}

	cout << a;*/

	// ################# end, gcd ##############################
	
	// ################# start, array basics ##############################

	/*int A[] = { 1,2,3,4 };
	int B[4] = {1,2};
	int C[4];
	cout << B[3]<<""<<B[4];*/

	/*int A[] = { 2,4,6,8,10 };

	for (int x : A)
		cout << x << endl;*/

	/*char A[] = { 'A', 66, 'C', 68 };
	for (auto x : A)
		cout << x;*/

	// ################# end, array basics ##############################

	// ################# start, sum array  ##############################
	
	/*int A[5] = { 1,2,3,4,5 };
	int sum = 0;

	for (auto x : A)
		sum += x;

	cout << sum;*/

	// ################# end, sum array ##############################
	
	// ################# start, max array  ##############################

	//int A[6] = { -6,-1,-2,-3,-4,-5 }; // take initial value as INT_MIN to consider all negative case
	//int max = INT_MIN;

	//for (auto x : A)
	//	if (max < x)
	//		max = x; 


	//cout << max;

	// ################# end, max array ##############################
	
	// ################# start, sum array  ##############################

	
	/*int n = 5;
	int A[5] = { 10, 8,3,4,5};
	int query = 5;

	for (int i = 0; i <= n; i++)
	{
		if (A[i] == query)
		{
			cout << i;
			exit(0);
		}
	}
	cout<<"Not found";
	*/

	// ################# end, sum array ##############################

	// ################# start, binary search  ##############################
	
	/*int A[10] = { 1, 2,3,4,5,6,7,8,9,10 };

	int start = 0, mid, query =8;
	int stop = 10; 

	while (start <= stop) {
		mid = (start + stop) / 2;

		if (query == A[mid])
		{
			cout << mid;
			break;
		}
		else if (query > A[mid])
			start = mid+1;
		else
			stop = mid;
			
	}*/
    //######################## end ##############################3
	
	// ################# start, min array  ##############################

	/*int A[6] = { 6,1,2,3,4,5 };
	int min = ;

	for (auto x : A)
		if (max < x)
			max = x;


	cout << max;*/

	// ################# end, min array ##############################

	// ################# start, pattern 1  ##############################
	
	/*int num = 1;

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++)
		{
			cout << num<<" ";
			num++;
		}
		cout << endl;
		}

	*/
	// ################# end, pattern 1 ##############################

	// ################# start, pattern 2  ##############################

	/*for (int i = 0; i < 5; i++) {

		for (int j = 0; j < i; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}*/


	// ################# end, pattern 2 ##############################

	// ################# start, pattern 3  ##############################

	/*for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++)
		{
			if (j<(5-i))
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}*/


	// ################# end, pattern 3 ##############################

	// ################# start, pattern 4  ##############################

	/*for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++)
		{
			if (j < (5 - i))
				cout << "*";
		}
		cout << endl;
	}
*/

// ################# end, pattern 4 ##############################

// ########## rotate image ###############33
//1 2 3 
//4 5 6
//7 8 9
//
//9 8 7
//6 5 4
//3 2 1

	//int A[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		int temp;

	//		temp = A[i][j];
	//		A[i][j] = A[2 - i][2 - j];
	//		A[2 - i][2 - j] = temp;


	//	}
	//}
	//cout << A[2][2];
	
	/*for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << A[i][j];

	}*/
//################ end rotate image ####################

//#######################start,  for each 2D array loop ##########
	/*int A[3][3] = { 1,2,3,4,5,6,7,8,9};

	for (auto& x : A)
	{
		for (auto& y : x)
		{
			cout << y << " ";
		}
		cout << endl;
	}*/
//#######################end,  for each 2D array loop ##########

//#######################start,  for each 2D array loop ##########
//int A[1][3] = { 3,4,2};
//int B[3][4] = {13,9,7,15,8,7,4,6,6,4,0,3};
//int C[1][4] = { 0,0,0,0};
//int sum = 0;
//for (int i=0; i<1; i++)
//{
//	for (int j=0; j<4; j++)
//	{
//		for (int k = 0; k < 3; k++)
//		{
//			C[i][j] += A[i][k]*B[k][j];
//		}
//	}
//	cout << endl;
//}
//
//for (int i = 0; i < 1; i++)
//{
//	for (int j = 0; j < 4; j++)
//	{
//		cout << C[i][j]<<" ";
//	}
//	cout << endl;
//}
//#######################end,  for each 2D array loop ##########

// ######################pointers ##################################

//int* p = new int[5];
//p[0] = 1; 
//p[1] = 2;
//
//cout << p[1];
//
//delete[]p;
//p = nullptr;
//cout << p[0];
//
//p = new int[10];
//p[0] = 1;
//cout << p;



//int A[5] = { 1,2,3,4,5 };
//int* p;
//p = A; 
//p = p + 3;
//cout << *p<<endl;
//cout << p[-2] << endl;
//
//cout << *p<<endl;
//cout << *(p+2) << endl;
//
//p = p + 3;
//cout << *p << endl;
//cout << *(p-3) << endl;
// 
// 
// 
//
//int A[5] = { 1,2,3,4,5 };
//int* p;
//int* q;
//p = A;
//q = &(A[3]);

//for (int i = 0; i < 5; i++) 
//{
//	//cout << *(A+i) << endl;
//	cout << *p << endl;
//	p++;
//}

//cout << (p - q)<<endl;
//cout << (q - p) << endl;
// ######################pointers ##################################

// ###################### start references ##################################
//int x = 5; 
//int& y = x;
//
//cout << y<<endl;
//x++;
//y++;
//cout << x << endl;
//cout << &x << " " << &y << endl;
//int b = 10;
////&y = b; //throws error
////cout << y;
// 
// 
//int x=10;   
//
//int* y = &x;
//
//int*& z = y;
//
//cout << z<<endl;
//cout << y << endl;
//cout << &x << endl;
// ###################### end references ##################################

// ###################### start string ##################################
//char a[10] = { 'h','e','l','l','o','\0' };
//char b[10] = "hello";
//char c[] = "hello";
//char d[] = { 65,66,67,68,0 };
//char e[] = { 65,66,67,68,0, 45, 56, 68 };
//string g = "Hello";
//
////char* f = "Hello"; //not working 
//cout << a << endl;
//cout << b << endl;
//cout << c << endl;
//cout << d << endl;
//cout << e << endl;
//cout << g << endl;
// 
// 
// 
//char s1[20];
//cout << "enter name";
//cin >> s1; //takes only first word
//cout << s1;

//char s2[20];
//cout << "enter name again";
////cin.get(s2,20);
//cin.get(s2, 20);
//cout << s2; //if i run both s1, s2 code i types ritika s s1 took ritika, s2 got s. Its in the buffer?? 

//// program below takes the enter pressed as s2
//char s1[20];
//cout << "enter name";
//cin.get(s1,20);
//cout << s1;
//
//char s2[20];
//cout << "enter name again";
//cin.get(s2, 20);
//cout << s2; //if i run both s1, s2 code i types ritika s s1 took ritika, s2 got s. Its in the buffer?? 

//// program below works correctly
//char s1[20];
//cout << "enter name";
//cin.getline(s1,20);
//cout << s1;
//
//char s2[20];
//cout << "enter name again";
//cin.getline(s2, 20);
//cout << s2; //if i run both s1, s2 code i types ritika s s1 took ritika, s2 got s. Its in the buffer?? 

//char s1[20];
//cout << "enter name";
//cin.getline(s1,20);
//cout << strlen(s1);

//char s1[20] = "Hello";
//char s2[20] = "World";
// 
////strcat_s(s1, s2); //dest, source
//strncat_s(s1, s2,3);
//cout << s1 << endl;

//char s1[20] = "Hello";
//char s3[20];
//strcpy_s(s3, s1);
//cout << s3;

//char s2[20] = "l";
//cout<<strstr(s1, s2);

//char s2[20] = "r";
//s2[0] = "t"; //throws error, char array immutable?

//char s1[20] = "Hello";
//char s2[20] = "world";
//
//cout << strcmp(s1, s2);

//char s1[20] = "235"; 
//char s2[20] = "54.78";
//
//long int x = strtol(s1, NULL,10);
//float y = strtof(s2,NULL);
//
//cout << x+10 << endl;
//cout << y-5 << endl;

//char a[20] = "34,rt,67,er";
//
//cout << strtok(a, "rt");

//string s = "hello world";
//string s3 = "me";
//
//cout << s.length();
//cout << s.size();
//cout << s.capacity(); //larger than length 
//
//s.resize(30);
//cout << s.capacity()<<endl;
//
//string s1;
//cout << s.empty() << endl;
//cout << s1.empty();

//cout << s.append("hello")<<endl;
//cout << s.insert(3, "kk") << endl;
//cout << s.replace(2, 4, "qq") << endl;
//s.push_back('z');
//s.pop_back();
//cout << s << endl;
//s.swap(s3);
//cout << s << endl;

//string s = "helloaaaaallll";

//cout<<s.rfind('l') << endl;
//cout << s.find_first_of('l')<<endl;
//cout << s.find_last_of('l') << endl;
//cout << s.find_first_of('l',5) << endl;
//cout << s.find_first_of('el') << endl; //l or e

//cout<<s.substr(3, 4);
// 
// 
// 
//string s1 = "hello";
//string s2 = "world";
//
//cout << s1.compare(s2)<<endl;
//cout << s1.at(4) << endl;
//cout << s1[4] << endl;  //overloaded [] operator
//cout << (s1 + "world")<<endl;
//cout << s1<<endl;
//
//s1 = s2;
//cout << s1;
// 
//
//string s1 = "hello";

//// iterator option 1 
//string::iterator it;
//
//for (it = s1.begin(); it != s1.end(); it++)
//{
//	//cout << *it<<endl;
//	*it = *it - 32;
//}
//cout <<s1;

// iterator option 2  
 
//for (int i = 0; s1[i] != '\0'; i++) 
//{
//	s1[i] = s1[i] - 32;
//}
//cout << s1;
// 

//string s1 = "lloll";
//// 
//for (int i = 0; s1[i] != '\0'; i++) 
//{
//	if (s1[i] != s1[s1.length() - i-1])
//	{
//		cout << "not palindrome";
//		exit(0);
//	}
//}
//cout << "palidrome";
// 
//
// 
//string s= "riti.s@gmail.com";
//
//int ind = s.rfind("@");
//cout << s.substr(0,ind); 


// ###################### end string ##################################

// ###################### start function ##################################


// ###################### end function ##################################

return 0;
}