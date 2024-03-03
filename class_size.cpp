#include<iostream>
using namespace std;
class XYZ{

};
class XYZ2{
    int a =5;
    float f = 18.6;
    char c = 'A';
};

class XYZ3{
    int a =5;
    float f = 18.6;
    char c = 'A';
    public:
    void display(void){
        cout<<"Member function Display"<<endl;
    }
};

class XYZ4{
    char c = 'A';
    int a =5;
    float f = 18.6;
};

class XYZ5{
    char c = 'A';
};

class XYZ6{
    char c = 'A';
    int i = 20;
};

int main(){
    cout<<"Hello World, Welcome to CPP"<<endl;
    cout<<"Size of empty class XYZ : "<<sizeof(XYZ)<<endl;
    cout<<"Size of class XYZ2 : "<<sizeof(XYZ2)<<endl;
    cout<<"Size of class XYZ3 : "<<sizeof(XYZ3)<<endl;
    cout<<"Size of class XYZ4 : "<<sizeof(XYZ4)<<endl;
    cout<<"Size of class XYZ5 : "<<sizeof(XYZ5)<<endl;
    cout<<"Size of class XYZ6 : "<<sizeof(XYZ6)<<endl;
    return 0;
}