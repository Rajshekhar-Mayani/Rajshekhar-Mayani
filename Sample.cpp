#if 0

#include<iostream>

using namespace std;

int main() {

	system("pause>0");
}

#elif 0

#include<iostream>
using namespace std;

int main() {
	cout << "HelloWorld" << endl;
	system("pause>0");
}


#elif 0

#include<iostream>
using namespace std;


class Base {
public:
	virtual void Test(void) {
		cout << "This is Test Class Base" << endl;
	}

};

class Derived : public Base
{
public:
	void Test(void) {
		cout << "This is Test Class Derived" << endl;
	}
};

int main() {
	Base B_obj;
	Base* B_ptr;
	Derived D_obj;
	//B_obj.Test();
	//B_obj=  D_obj;
	B_ptr = &B_obj;
	B_ptr->Test();
	B_ptr = &D_obj;
	B_ptr->Test();

	system("pause>0");

}

#elif 0

#include<iostream>
#include<list>

using namespace std;

class Car {

public:
	int number_of_seats;
	list<string> CarName_Gen = { "Venue","Santro","i20_Active" };
	list<string> CarName_2 = {};
	Car() {
		number_of_seats = 1;
	};
	Car(int x) {
		number_of_seats = x;
	}
	void Display(void) {
		cout << "Number of Seats for each below vehicle is " << number_of_seats << endl;
		if (number_of_seats == 5)
			for (string str_var : CarName_Gen) {
				cout << str_var << endl;
			}
		else if (number_of_seats == 2) {
			for (string str_var : CarName_2) {
				cout << str_var << endl;
			}
		}

		else
			cout << "New Car Models not listed yet" << endl;

		

	}
};


int main() {
	Car car_obj1(5);
	car_obj1.Display();
	Car car_obj2(2);
	car_obj2.CarName_2.push_back("JLR_Coupe");
	car_obj2.CarName_2.push_back("Lamborgini");
	car_obj2.CarName_2.push_back("Mclaren");

	car_obj2.Display();
	Car car_obj3;
	car_obj3.Display();
	Car car_obj4 = car_obj1;
	car_obj4.Display();
	
	system("pause>0");
	return 0;
}


#elif 1

#include<iostream>
using namespace std;

#define SIZE 3

class Stack {
	int pos;
	int data[SIZE];

public:
	void init();
	void push(int val);
	int pop();
};

void Stack::init() {
	pos = 0;
}

void Stack::push(int val) {
	if (pos == SIZE) {
		cout << "Stack Overflow" << endl;
	}
	data[pos] = val;
	pos++;
}

int Stack::pop() {

	if (pos == 0) {
		cout << "Stack Underflow" << endl;
		return 0;
	}

	pos--;
	return data[pos];

}

int main() {
	Stack Obj1;
	Obj1.init();
	//Obj1.pop();
	Obj1.push(1);
	Obj1.push(2);
	Obj1.push(3);
//	Obj1.push(1);
	for(int i = 0; i<SIZE; i++)
		cout<<Obj1.pop()<<endl;
	//cout<<Obj1.pop();
	//cout<<Obj1.pop();
//	Obj1.pop();
	return 0;
}
#endif
 