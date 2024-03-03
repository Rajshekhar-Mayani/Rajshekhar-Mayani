#include<iostream>
using namespace std;

class ABC{
    int a;
    public:
    ABC(){};
    ABC(int x){
        a = x;
        cout<<"Parameterised Contructor Called"<<endl;
    }
    ABC(ABC &obj){
        a = obj.a;
        cout<<"Copy Contructor Called"<<endl;
    }
};

int main(){
    cout<<"Hello World, Welcome to CPP"<<endl;
    ABC obj1(3),obj2; // Parameter constructor called i.e., obj1(3)
    ABC obj3(obj1);  // copy contructor called
    ABC obj5 = obj3; // copy contructor called
    obj2 = obj1;     // assignment operator is called but not copy contructor
    return 0;
}