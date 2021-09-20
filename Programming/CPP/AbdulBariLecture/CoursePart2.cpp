#include<iostream>

using namespace std;

//int add(int x, int y);
//
//int add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//
//void main()
//{
//	
//	int a = 10, b = 20;
//	int c;
//	c = add(a, b);
//
//	cout << c;
//
//}

//template <class T>
//
////T add(T x, T y);
//
//T add(T x, T y)
//{
//	return (x + y);
//}
//
//void main()
//{
//	int a = 10, b = 4;
//	cout << add(a + b);
//
//}

//###############################################
//write a Max() function template for 2 numbers
//template <class T>
//
//T Max(T a, T b)
//{
//    if (a > b)
//        return a;
//    else
//        return b;
//}
//
//void main()
//{
//    cout << Max(10, 5) << endl;
//    cout << Max(12.5f, 17.3f);
//}

//################### pass by value ############################
//
//void swap(int a, int b)
//{
//	int temp; 
//	temp = a;
//	a = b;
//	b = temp; 
//
//	cout << a << b<<endl;
//}
//
//void main()
//{
//	int a = 10, b = 5;
//	cout << a << b << endl;
//	swap(a, b);
//	cout << a << b << endl;
//}
//################### pass by value ############################

//################### pass by address ############################

//void swap(int* a, int* b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//	cout << *a << *b << endl;
//}
//
//void main()
//{
//	int a = 10, b = 5;
//	cout << a << b << endl;
//	swap(&a, &b);
//	cout << a << b << endl;
//}
//################### pass by address ############################

//################### pass by reference ############################

//void swap(int& x, int& y)
//{
//	cout << &x << &y << endl; //same address as a,b
//	
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//	cout << x << y << endl;
//}
//
//void main()
//{
//	int a = 10, b = 5;
//	cout << &a << &b << endl;
//	swap(a, b);
//	cout << a << b << endl;
//}
//################### pass by reference ############################

//################### return by address ############################

//int* create_array() {
//	int* p; 
//
//	p = new int[5];
//
//	for (int i = 0; i < 5; i++)
//	{
//		p[i] = i;
//	}
//
//	return p;
//}
//
//void main()
//{
//	int* ptr;
//
//	ptr = create_array();
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout<<ptr[i]<<endl;
//	}
//}


//################### return by address ############################

//################### return by reference ############################
//int& func(int &x) {
//	
//	return x;
//}
//
//void main()
//{
//	int a = 10;
//	func(a) = 25;
//
//	cout << a;
//}
//################### return by address ############################

//################### variable scoping ############################

// case 1
//int g = 5; // global (inside the code section itself, stays until program is running
//
//void func() {
//	int a = 3;  // local
//	g = g + a;
//
//	cout << a << g << endl;
//} 
//
//void main()
//{
//	int x = 10; // local
//	func();
//	g++;
//	cout << g << endl; 
//}

//case 2 
//int g = 5; // global (inside the code section itself, stays until program is running
//
//void func() {
//	int g = 10;  // local
//	g++;	// this changes local g, global g remains unchanged
//	{
//		int g = 0; 
//		g++;
//		cout << "block scope"<<g << endl; //1
//	}
//	cout << "func scope" << g << endl; //11
//}
//
//void main()
//{
//	int g = 100;
//	
//	func();
//	g++;
//	cout << "main scope" << g << endl; //101
//	cout << "scope resolved" << ::g << endl; //5
//}

//################### variable scoping ############################


//################### static variable ############################
// 
//void func()
//{
//	static int a = 5; 
//	a++;
//	cout << a << endl;
//}
//
//void main()
//{
//	func();
//	func();
//	func();
//	//cout << a;  //gives error a is undefined: Static variable scoped to the function they are declared, 
//	//but live until program ends 
//}

//################### static variable ############################

//################### reference ############################

// Implementation 1
//void rec_fn()
//{
//	static int a = 5;
//
//	if (a == 0)
//		return;
//
//	else
//	{
//		a--;
//		cout << a << endl;
//		rec_fn();
//	}
//		
//
//}
//
//void main()
//{
//	rec_fn();
//}
// Implementation 2

//void rec_fn(int a)
//{
//	if (a > 0)
//	{
//		rec_fn(a - 1);
//		cout << a << endl;
//	}
//}
//
//void main()
//{
//	rec_fn(5);
//}
//################### reference ############################

//################### binary search fn ############################

//int binary_search(int arr[10], int q)
//{
//	int start = 0;
//	int stop = 10;
//
//	int mid;
//	int result = -1;
//
//	while (start <= stop)
//	{
//		mid = (start + stop) / 2;
//
//		if (q == arr[mid])
//		{
//			result = mid;
//			return mid;
//		}
//		else
//		{
//			if (q > arr[mid])
//				start = mid + 1;
//			else
//				stop = mid;
//		}
//	}
//
//	return -1;
//}
//
//
//void main()
//{
//	int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int query;
//	cout << "Enter value to be searched";
//	cin >> query;
//
//	cout<< binary_search(A, query);
//}


//################### binary search fn ############################

//################### fn pointer ############################

//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int min(int a, int b)
//{
//	return a < b ? a : b;
//}
//
//void main() 
//{
//	int(*fp)(int,int);
//
//	fp = max;
//	cout << (*fp)(10, 5)<<endl;
//
//	fp = min;
//	cout << (*fp)(10, 5);
//}
//################### fn pointer ############################

//################### class ############################

//class Rectangle {
//protected:
////public:
//	float l;
//	float b;
//public:
//	
//	//float area();
////	float perimeter(float a, float b) ;
//
//	Rectangle(float le, float br)
//	{
//		l = le;
//		b = br;
//	}
//
//float area() 
//{
//	return l * b;
//}
//
//};

//void main()
//{
//	Rectangle r1(1, 2), r2(20, 30);
//
//	cout << r1.area()<<endl;
//	cout << r2.area();
//
//}
// 

// pointer to objects

//void main()
//{
//	Rectangle r1(1,2), r2(20, 30);
//	Rectangle* p = &r1;
//
//	cout << p->area() << endl;
//	p = &r2;
//	cout << p->area() << endl;
//	/*cout << p->area()<<endl;*/ //->dereferences the pointer
//}
// 

// pointer to heap objects 

//void main()
//{
//	Rectangle* p;
//	Rectangle* q;
//
//	p = new Rectangle(2,3);
//	q = new Rectangle(20, 30);
//
//	cout << p->area() << endl;
//	cout << q->area() << endl;
//
//}

//################### class ############################

//################### project: student class ############################

//class Student
//{
//protected:
//	int rollno;
//	string name;
//	char grade;
//	int marks[3];
//
//public:
//	int totalMarks();
//	char calcGrade();
//	//string getName();
//	void setName(string name);
//	void setRollno(int rollno);
//	void setMarks(int marks[]);
//	//void setName(string name);
//	Student(int rollno, string name, int marks[]);
//};
//
//Student::Student(int rollno , string name , int marks[] )
//{
//	setName(name);
//	setRollno(rollno);
//	setMarks(marks);
//}
//
//void Student::setName(string name)
//{
//	if (name != "NA")
//	{
//		this->name = name;
//		cout << this->name << endl;
//	}
//	else
//		cout << "Invalid";
//}
//
//void Student::setRollno(int rollno)
//{
//	if (rollno != 0)
//	{
//		this->rollno = rollno;
//		cout << this->rollno << endl;
//	}
//	else
//		cout << "Invalid" << endl;
//}
//
//void Student::setMarks(int marks[])
//{
//	for (int i=0; i<3; i++)
//		this->marks[i] = marks[i];
//}
//
//int Student::totalMarks()
//{
//	int total = 0; 
//	for (int i = 0; i < 3; i++)
//		total += this->marks[i];
//
//	return total;
//}
//
//char Student::calcGrade()
//{
//	int avg = totalMarks()/3;
//
//	if (avg > 40)
//		return 'A';
//	else
//		return 'B';
//
//}
//void main()
//{
//	int marks[] = { 21,23,34 };
//	Student s1(10, "ritika", marks);
//	
//	cout << s1.totalMarks()<<endl;
//	cout << s1.calcGrade() << endl;
//
//}
//################### project: student class ############################
