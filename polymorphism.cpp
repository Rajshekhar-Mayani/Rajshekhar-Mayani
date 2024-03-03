#include<iostream>
using namespace std;


class BASE{
    public:
    virtual void show(void){                  // made virtual to point to correct show function
        cout<<"show from Base Class"<<endl;
    }
};

class DERIVED : public BASE{
    public:
    void show(void){
        cout<<"show from Derived Class"<<endl;
    }
};

int main(){
    cout<<"Hello World, Welcome to CPP"<<endl;
    BASE bobj;
    DERIVED dobj;
    BASE *bptr = NULL;
    bptr = &bobj;  // points to base object
    bptr->show();
    bptr = &dobj; // points to derived object
    bptr->show();
    return 0;
}