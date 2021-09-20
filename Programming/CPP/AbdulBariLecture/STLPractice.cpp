#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<algorithm>


using namespace std; 

void main()
{
	// ################ SET ##################

	//set<int> A = { 1,2,3,4,5 };

	///*A.insert(1000);
	//*/
	//cout<<A.size();

	//if (A.find(2) != A.end())
	//	A.erase(2);

	///*for (auto a : A)
	//	cout << a;*/

	///*set<int>::iterator itr;

	//for (itr = A.begin(); itr != A.end(); itr++)
	//	cout << *itr<<endl;*/

	// ################ SET ##################

	// ################ vector ##################

	//vector<int> A = { 1,2,3,4,5 };

	//A.push_back(6);
	//A.push_back(7);
	//A.pop_back();

	//A[1] = 300;

	//for(auto a : A)
	//	cout << a << endl;

	//cout << A.size()<<endl;

	//vector<int> b(A.begin(), A.end());

	//vector<int>::iterator itr;

	//for (itr = b.begin(); itr != b.end(); itr++)
	//	cout << *itr << endl;

	//vector<int> C(10, 0);

	//for (auto a : C)
	//	cout << a << endl;


	// ################ vector ##################

	// ################ map ##################

	//map<string, int> D;

	//D["first"] = 1;
	//D["second"] = 2;

	//for (auto& p : D)
	//	cout << p.first << p.second << endl; 

	//map<string, int>::iterator itr;
	//for (itr = D.begin(); itr != D.end(); itr++)
	//	cout << itr->first<<itr->second << endl;

	//if (D.find("first") != D.end())
	//	cout << D["first"] << endl;
	//else
	//	cout << "Not found" << endl;

	// ################ map ##################
	
	// ################ find duplicate: map ##################
	/*int A[] = { 1, 2, 3, 4, 5 ,5,5};

	map<int, int> D;

	for (auto a : A)
	{
		if (D.find(a) == D.end())
			D[a] = a;
		else
			cout << "Found duplicate" << endl;
	}

	for (auto& a : D)
		cout << a.first<<a.second << endl;*/

	// ################ find duplicate: map ##################

	/*vector<int> A = {2,5,3,9,7,4,0 };

	sort(A.begin(), A.end());

	for (auto a : A)
		cout << a << endl;
	
	cout << *min_element(A.begin(), A.end()) << endl;

	printf("Hi this is %d", 1);*/
}

