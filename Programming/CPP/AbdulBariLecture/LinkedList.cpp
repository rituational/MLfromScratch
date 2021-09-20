#include<iostream>

using namespace std; 

//template <class T>

////####################my implementation ignore ##########################
//class LinkedList {
//	int value;
//	int* p_next = nullptr;
//
//public: 
//	void insert(int value);
//	void next(int* p);
//	int get();
//	LinkedList(int value)
//	{
//		this->insert(value);
//	}
//};
// 
// void LinkedList::insert(int value)
//{
//	this->value = value;
//}
//
//void LinkedList::next(int* p)
//{
//	this->p_next = p;
//}
//
//int LinkedList::get()
//{
//	return this->value;
//}
//
//
//void main()
//{
//	LinkedList a(5);
//	cout << a.get();
//}
////####################my implementation ignore ##########################

//class Node {
//
//public:
//	int data;
//	Node *next; 
//
//	Node(int data)
//	{
//		this->data = data;
//		next = nullptr;
//	}
//};
//
//void print_ll(Node* head)
//{
//	while (head != nullptr)
//	{
//		cout << head->data << endl;
//		head = head->next;
//	}
//}


// ################ print ll #################################
//void main()
//{
	////statically 
	//Node n1(10), n2(20), n3(30);
	//n1.next = &n2; 
	//n2.next = &n3;

	//cout << n1.data<<endl;

	//Node* head = &n1; 

	//Node* p = head; 

	//while (p != nullptr)
	//{
	//	cout << p->data; 
	//	p = p->next; 
	//}
	

	//Dynamically 

	/*Node* n1 = new Node(3);
	Node* n2 = new Node(10);
	Node* n3 = new Node(35);
	Node* n4 = new Node(46);
	Node* n5 = new Node(67);
	Node* n6 = new Node(100);
	
	n1->next = n2;
	n2->next = n3; 
	n3->next = n4; 
	n4->next = n5;
	n5->next = n6; 

	Node* head = n1; 

	print_ll(head);*/
	

//}
// ################ print ll #################################


//################## take input ###############################

///// my working implementation
// 
//void main()
//{
//	int value = 0;
//	cin >> value;
//
//	Node* p = new Node(value);
//	Node* head = p;
//
//	while (value != -1)
//	{
//		p->next = new Node(value);
//		p = p->next;
//		cin >> value;
//	}
//
//	Node* p1;
//	p1 = head;
//	
//	while (p1 != nullptr)
//	{
//		cout << p1->data;
//		p1 = p1->next;
//	}
//}

/////// Course
//Node* take_input()
//{
//	int data; 
//
//	Node* head = nullptr; 
//	Node* tail = nullptr;
//
//	cin >> data;
//
//	while (data != -1)
//	{
//		Node* n = new Node(data);
//		if (head == nullptr)
//		{
//			head = n;
//			tail = n;
//		}
//		else
//		{
//			tail->next = n;
//			tail = tail->next;
//		}
//		cin >> data;
//	}
//	return head;
//}
//
//void main()
//{
//	Node* head;
//
//	head = take_input();
//
//	Node* ptr = head;
//
//	while (ptr != nullptr)
//	{
//		cout << ptr->data;
//		ptr = ptr->next;
//	}
//}

///////// reversed ll 


//Node* take_input_rev()
//{
//	int data; 
//
//	Node* head = nullptr; 
//	Node* tail = nullptr;
//	Node* temp = nullptr;
//
//	cin >> data;
//
//	while (data != -1)
//	{
//		Node* n = new Node(data);
//		if (head == nullptr)
//		{
//			head = n;
//			tail = n;
//		}
//		else
//		{
//			 n->next = head;
//			 head = n;
//		}
//		cin >> data;
//	}
//	return head;
//}
//
//void main()
//{
//	Node* head;
//
//	head = take_input_rev();
//
//	Node* ptr = head;
//
//	while (ptr != nullptr)
//	{
//		cout << ptr->data;
//		ptr = ptr->next;
//	}
//}
//################## take input ###############################


//################## find length ###############################

//class Node {
//public:
//	int data;
//	Node* next = nullptr;
//
//	Node(int data)
//	{
//		this->data = data;
//	}
//};
//
//Node* insert_ll()
//{
//	Node* head = nullptr;
//	Node* tail = nullptr;
//	Node* n;
//
//	int data; 
//	
//	cin >> data; 
//	
//
//	while (data != -1)
//	{
//		n = new Node(data);
//		
//		if (head == nullptr)
//		{
//			head = n;
//			tail = n;
//		}
//		else
//		{
//			tail->next = n;
//			tail = tail->next;
//		}
//
//		cin >> data;
//	}
//
//	return head;
//}
//void main()
//{
//
//	Node* head = insert_ll();
//	Node* ptr = head; 
//
//	int count = 0;
//
//	while (ptr != nullptr)
//	{
//		cout << ptr->data;
//		ptr = ptr->next;
//		count++;
//	}
//
//	cout << "Length is" << count << endl;
//
//}

//################## find length ###############################

////################## ith value ###############################
//
//class Node {
//public:
//	int data;
//	Node* next = nullptr;
//
//	Node(int data)
//	{
//		this->data = data;
//	}
//};
//
//Node* insert_ll()
//{
//	Node* head = nullptr;
//	Node* tail = nullptr;
//	Node* n;
//
//	int data; 
//	
//	cin >> data; 
//	
//
//	while (data != -1)
//	{
//		n = new Node(data);
//		
//		if (head == nullptr)
//		{
//			head = n;
//			tail = n;
//		}
//		else
//		{
//			tail->next = n;
//			tail = tail->next;
//		}
//
//		cin >> data;
//	}
//
//	return head;
//}
//void main()
//{
//
//	Node* head = insert_ll();
//	Node* ptr = head; 
//	
//	int k;
//	int count = 1; 
//
//	cout << "Enter i"<<endl;
//	cin >> k;
//
//	
//	if (k < 0)
//		cout << "Invalid";
//
//	else
//	{
//		while (count <= k and (ptr != nullptr))
//		{
//			ptr = head->next;
//			count++;
//		}
//
//		if (ptr == nullptr)
//			cout << -1;
//		else
//			cout << "ith value is  " << ptr->data << endl;
//	}
//	
//}
//
////################## ith value ###############################

//################## insert at ith value ###############################

//class Node {
//public:
//	int data;
//	Node* next = nullptr;
//
//	Node(int data)
//	{
//		this->data = data;
//	}
//};
//
//Node* insert_ll()
//{
//	Node* head = nullptr;
//	Node* tail = nullptr;
//	Node* n;
//
//	int data;
//
//	cin >> data;
//
//
//	while (data != -1)
//	{
//		n = new Node(data);
//
//		if (head == nullptr)
//		{
//			head = n;
//			tail = n;
//		}
//		else
//		{
//			tail->next = n;
//			tail = tail->next;
//		}
//
//		cin >> data;
//	}
//
//	return head;
//}
//void main()
//{
//
//	Node* head = insert_ll();
//	Node* ptr = head;
//	Node* tmp_p = nullptr;
//
//	int k;
//	int data;
//	int count = 1;
//
//	cout << "Enter i" << endl;
//	cin >> k;
//	cout << "Enter data" << endl;
//	cin >> data;
//
//
//	if (k < 0)
//		cout << "Invalid";
//
//	else
//	{
//		while (count <= k and (ptr != nullptr))
//		{
//			ptr = head->next;
//			count++;
//		}
//
//		if (ptr == nullptr)
//		{
//			ptr = new Node(data);
//		}
//		else
//		{
//			tmp_p = ptr->next;
//			ptr->next = new Node(data);
//			ptr = ptr->next;
//			ptr->next =	tmp_p;
//			
//
//		}
//			
//	}
//
//	tmp_p = head;
//
//	while (tmp_p != nullptr)
//	{
//		cout << tmp_p->data;
//		tmp_p = tmp_p->next;
//	}
//}

//################## insert at ith value ###############################


////################## delete ith value ###############################
//class Node {
//public:
//	int data;
//	Node* next = nullptr;
//
//	Node(int data)
//	{
//		this->data = data;
//	}
//};
//
//Node* insert_ll()
//{
//	Node* head = nullptr;
//	Node* tail = nullptr;
//	Node* n;
//
//	int data;
//
//	cin >> data;
//
//
//	while (data != -1)
//	{
//		n = new Node(data);
//
//		if (head == nullptr)
//		{
//			head = n;
//			tail = n;
//		}
//		else
//		{
//			tail->next = n;
//			tail = tail->next;
//		}
//
//		cin >> data;
//	}
//
//	return head;
//}
//void main()
//{
//
//	Node* head = insert_ll();
//	Node* ptr = head;
//	Node* p_delete = nullptr;
//	Node* p_tmp = nullptr;
//
//	int k;
//	int count = 1;
//
//	cout << "Enter i" << endl;
//	cin >> k;
//
//
//	if (k < 0)
//		cout << "Invalid";
//
//	if (k == 0 and head)
//	{
//		//the sequence is important
//		
//		p_delete = head; //important: Else memory leak
//		head = head->next;
//		p_delete->next = nullptr;
//		delete[]p_delete;
//		p_delete = nullptr;
//	}
//
//
//	else
//	{
//		while (count <= k and (ptr != nullptr))
//		{
//			ptr = head->next;
//			count++;
//		}
//
//		if (ptr == nullptr)
//		{
//			cout<<"No node at i";
//		}
//		else
//		{
//			p_delete = ptr->next;
//			ptr->next = ptr->next->next;
//
//			delete[]p_delete;
//			p_delete = nullptr;
//
//			cout<<"deleted"<<endl;
//		}
//
//	}
//
//	p_tmp = head;
//	while (p_tmp != nullptr)
//	{
//		cout << p_tmp->data;
//		p_tmp = p_tmp->next;
//	}
//}

////################## delete ith value ###############################

//////################## search in ll ###############################
//
//class Node {
//public:
//	int data;
//	Node* next = nullptr;
//
//	Node(int data)
//	{
//		this->data = data;
//	}
//};
//
//Node* insert_ll()
//{
//	Node* head = nullptr;
//	Node* tail = nullptr;
//	Node* n;
//
//	int data;
//
//	cin >> data;
//
//
//	while (data != -1)
//	{
//		n = new Node(data);
//
//		if (head == nullptr)
//		{
//			head = n;
//			tail = n;
//		}
//		else
//		{
//			tail->next = n;
//			tail = tail->next;
//		}
//
//		cin >> data;
//	}
//
//	return head;
//}
//
//void search_ll(Node* head, int data)
//{
//	Node* p = head;
//	int count = 1;
//
//	while (p)
//	{
//		if (p->data == data)
//		{
//			cout << "Found at index" << count << endl;
//			return;
//		}
//		else
//			p = p->next;
//
//		count++;
//	}
//
//	cout << "Not Found" << endl;
//}
//
//void search_ll_recursive(Node* head, int data)
//{
//	static int count = 1;
//
//	if (head == nullptr)
//		cout << "Not Found" << endl;
//
//	else
//	{
//		if (head->data == data)
//		{
//			cout << "Found at index" << count << endl;
//			return;
//		}
//
//		else
//			count++;
//			search_ll_recursive(head->next, data);
//	}
//
//}
//
//void main()
//{
//
//	Node* head = insert_ll();
//	Node* ptr = head;
//
//	int data;
//
//	cout << "Enter search value" << endl;
//	cin >> data;
//
//	search_ll(head, data);
//	search_ll_recursive(head, data);
//
//}

////################## search in ll  ###############################

////################## reverse a ll ###############################

//class Node {
//public:
//	int data;
//	Node* next = nullptr;
//
//	Node(int data)
//	{
//		this->data = data;
//	}
//};
//
//Node* insert_ll()
//{
//	Node* head = nullptr;
//	Node* tail = nullptr;
//	Node* n;
//	int data;
//	cin >> data;
//
//	while (data != -1)
//	{
//		n = new Node(data);
//
//		if (head == nullptr)
//		{
//			head = n;
//			tail = n;
//		}
//		else
//		{
//			tail->next = n;
//			tail = tail->next;
//		}
//
//		cin >> data;
//	}
//
//	return head;
//}
//
//Node* reverse_ll(Node* head)
//{
//	Node* curr = nullptr;
//	Node* prev = nullptr;
//	Node* next = nullptr;
//
//	curr = head; 
//
//	while (curr)
//	{
//		next = curr->next;
//		curr->next = prev;
//
//		prev = curr;
//		curr = next;
//
//	}
//
//	return prev;
//
//}
//
//void display_ll(Node* head)
//{
//	Node* p = head;
//
//	while (p != nullptr)
//	{
//		cout << p->data << endl;
//		p = p->next;
//	}
//}
//void main()
//{
//
//	Node* head = insert_ll();
//	Node* ptr = head;
//
//	display_ll(head);
//
//	head = reverse_ll(head);
//	display_ll(head);
//
//}

////################## reverse a ll ###############################

////################## WIP: delete nth node ll ###############################

//class Node {
//public:
//	int data;
//	Node* next = nullptr;
//
//	Node(int data)
//	{
//		this->data = data;
//	}
//};
//
//Node* insert_ll()
//{
//	Node* head = nullptr;
//	Node* tail = nullptr;
//	Node* n;
//	int data;
//	cin >> data;
//
//	while (data != -1)
//	{
//		n = new Node(data);
//
//		if (head == nullptr)
//		{
//			head = n;
//			tail = n;
//		}
//		else
//		{
//			tail->next = n;
//			tail = tail->next;
//		}
//
//		cin >> data;
//	}
//
//	return head;
//}
//
//void display_ll(Node* head)
//{
//	Node* p = head;
//
//	while (p != nullptr)
//	{
//		cout << p->data << endl;
//		p = p->next;
//	}
//}
//
//Node* delete_nth_node(Node* head, int n)
//{
//	Node* slow = head;
//	Node* fast = head;
//	Node* p_tmp = nullptr;
//	
//	if (head)
//	{
//		if (n <= 0)
//			cout << "Invalid" << endl;
// 
//		if (n == 1)
//		{
//			while (slow->next->next)
//			{
//				slow = slow->next;
//			}
//			p_tmp = slow->next;
//			slow->next = nullptr;
//
//			p_tmp->next = nullptr;
//			delete[]p_tmp;
//			p_tmp = nullptr;
//		}
//		else
//		{
//			for (int i = 0; i < n; i++)
//				fast = fast->next;
//
//			//reach nth node
//			while (fast->next)
//			{
//				slow = slow->next;
//				fast = fast->next;
//			}
//			cout << slow;
//			cout << fast;
//			cout << "nth from end" << slow->data<< endl;
//
//			p_tmp = slow->next;
//			if (slow->next)
//				slow->next = slow->next->next;
//
//			p_tmp->next = nullptr;
//			delete[] p_tmp;
//			p_tmp = nullptr;
//		}
//	}
//
//	return head;
//
//}
//
//void main()
//{
//
//	Node* head = insert_ll();
//	Node* ptr = head;
//	int n = -1;
//
//	display_ll(head);
//
//	cout << "Enter n" << endl;
//	cin >> n;
//
//	head = delete_nth_node(head, n);
//	display_ll(head);
//
//}
////################## delete nth node ll ###############################

////################## WIP (errors) merge sorted ll ###############################

class Node {
public:
	int data;
	Node* next = nullptr;

	Node(int data)
	{
		this->data = data;
	}
};

Node* insert_ll()
{
	Node* head = nullptr;
	Node* tail = nullptr;
	Node* n;
	int data;
	cin >> data;

	while (data != -1)
	{
		n = new Node(data);

		if (head == nullptr)
		{
			head = n;
			tail = n;
		}
		else
		{
			tail->next = n;
			tail = tail->next;
		}

		cin >> data;
	}

	return head;
}

void display_ll(Node* head)
{
	Node* p = head;

	while (p != nullptr)
	{
		cout << p->data << endl;
		p = p->next;
	}
}

Node* merge_sorted_lists(Node* head1, Node* head2)
{
	//1357
	//2489
	//
	//2 2>1 2>3 no
	//1  2 3
	Node* prev1 = nullptr;
	Node* curr1 = head1;
	Node* curr2 = head2;
	Node* temp = nullptr;


	if (curr2->data > curr1->data) //equal to consition?
	{
		prev1 = curr1;
		curr1 = curr1->next;
	}
	else
	{
		prev1->next = curr2;
		temp = curr2;
		curr2->next = curr1;
		curr2 = temp->next;
	}

	return head1;
}


void main()
{
	cout << "Enter first sorted array" << endl;
	Node* head1 = insert_ll();
	display_ll(head1);

	cout << "Enter second sorted array"<<endl;
	Node* head2 = insert_ll();
	display_ll(head2);
	
	head1 = merge_sorted_lists(head1, head2);
	display_ll(head1);

}

////################## WIP (errors) merge sorted ll ###############################
