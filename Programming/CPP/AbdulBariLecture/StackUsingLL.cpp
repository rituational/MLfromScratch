#include<iostream>

using namespace std;


class Node {
public:
	int value;
	Node* next;

	Node(int value)
	{
		this->value = value;
	}
};


class Stack {
public:

	Node* head = nullptr;
	Node* p_tmp = nullptr;

	Stack(int value)
	{
		p_tmp = new Node(value);
	}
};






int main()
{



	return 0;
}