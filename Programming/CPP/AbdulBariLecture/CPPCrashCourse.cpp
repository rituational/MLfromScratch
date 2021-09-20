/* Function proto typing: So that compiler knows before hand all the functions to be used and 
//search them (even if they are located after the fn call. We need to just give the fn input parameter type
// but better to put parameter names for documentation purposes. Can put the prototypes in a header file.
* Fn declaration: inputs c/as parameters
* Fn call: arguements
*/
#include <iostream>

using namespace std;

//void printAge(int* age);

class Car {

public:

    void addCrash() {
        condition = "crashed";
    }

    void addRepair() {
        condition = "working";
    }

    void checkCondition() {
        if (condition == "crashed")
            std::cout << "Repair";
        else
            std::cout << "Working fine";
    }

    Car(string model, string year) {
        Model = model;
        Year = year;
    }
protected:
    string condition = "working";

private:
    string Model;
    string Year;
    string serialkey;
};

class FlyingCar: public Car{
public: 
    FlyingCar(string model, string year) : Car(model, year) {
    }

    void checkCondition() {
        if (condition == "crashed")
            std::cout << "Can't fly";
        else
            std::cout << "Flying";
    }
};

int main()
{
    /*
    // printing output use:    std::cout << 
    std::cout << "Hello World!\n";
    std::cout << "First line i printed\n";


    // define variables which we can assign different values 

    int a = 5;
    a = 6;

    system("pause>0");

    // define variables which we cannot assign different values 
    const int b = 5;
    // b = 6; //will throw 'a': redefinition; different type modifiers error

    float c = 34.5;
    char charac = 'f';
    string username = "word"; 

    std::cout << username;

    // arrays we either define the size, define all elements, define size and some elements 
    // the arrays need to have same data type elements 
    // once full we need to redefine a new bigger array 
    // array are stored in contiguous memory block
    */

    /*
    string colors[10] = {"r", "b", "g" };
    std::cin >> colors[3];
    std:: cout << colors[3];
    */

    /*
    ############# if else ####################
    
    bool isRainy = true;

    if (isRainy == true)
        std::cout << "Stay put";
    else
        std::cout << "Roam";
    */

    /*bool isRainy = false;
    bool isSunday = false;

    std::cin >> isRainy;
    std::cout << isRainy;
    std::cin >> isSunday;
    std::cout << isSunday;

    if (isRainy == true && isSunday == true) {
        std::cout << "Make maggi";
    }

    else if (isRainy == true && isSunday == false) {
        std::cout << "take leave";
    }
    else
        std::cout << "work";
    */

    /*for (int i = 0; i < 5; i++) {

        std::cout << i << endl;
    }*/

    //int count = 6;

    //// doesnt print anything 
    //while (count < 5) {
    //    count = count + 1;
    //    std::cout << count << endl;
    //}

    ////prints once 
    //do {
    //    std::cout << count << endl;
    //    count = count + 1;
    //} while (count < 5);

    //switch

    //class

   /* int a[4] = { 1, 2, 3, 4 };
    int* point = &a[0];
    std::cout << point << endl;
    std::cout << a << endl;
    std::cout << *point << endl;
    point++;
    std::cout << *point << endl;
    */

    //int myAge = 25;
    //std::cout << &myAge << endl;
    //printAge(&myAge);
    //printAge(&myAge);

    //std::cout << "Original" << myAge;


    //system("pause>0");

    Car myCar("Ford", "2015"); 

    
    myCar.addCrash();
    myCar.checkCondition();

    FlyingCar fly("airy", "2021");
    fly.checkCondition();

    Car* car1 = &myCar;
    FlyingCar* car2 = &fly;

    car1->checkCondition() ;
    car2->checkCondition();

}

//void printAge(int* age) {
//    std::cout << *age << endl;
//    (*age)++;
//}


