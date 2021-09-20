#include<iostream>
using namespace std;

template <class T>
class stack {
private:
	T *arr;
	int nextIndex;
	int cap =2;
	T* p = nullptr;

public:

	stack()
	{
		arr = new T [this->cap];
		nextIndex = 0;
	}
	//stack(int cap)
	//{
	//	this->cap = cap; 
	//	arr = new int[cap];
	//	nextIndex = 0;

	//}

	int size()
	{
		return this->nextIndex;
	}

	bool isEmpty()
	{
		return (nextIndex == 0);
	}

	void push_back(T val)
	{
		if (nextIndex == this->cap)
		{
			T* p_temp = new T[2 * cap];

			for (int i = 0; i < cap; i++)
			{
				p_temp[i] = arr[i];
			}

			delete[]arr;
			arr = p_temp;

			p_temp = nullptr;
			cap = 2 * cap;
		}
		{
			arr[nextIndex] = val;
			nextIndex++;
		}
	}

	void pop_back()
	{
		if (isEmpty())
		{
			cout << "Stack empty" << endl;
			return;
		}
		arr[nextIndex] = 0;
		nextIndex--;
	}

	T top()
	{
		if (isEmpty())
		{
			return -1;
		}
		else
			return arr[nextIndex - 1];
	}
};




int main() {

	//stack<int> B;
	/*B.push_back(12);
	B.push_back(12);
	B.push_back(12);
	B.push_back(12);
	B.push_back(12);
	B.push_back(127);*/

	stack<char> B;
	B.push_back('f');
	B.push_back('f');
	B.push_back('f');
	B.push_back('f');
	B.push_back('f');

	cout << B.size();
	cout << B.top();

 	return 0;
}