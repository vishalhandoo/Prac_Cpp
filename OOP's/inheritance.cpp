#include<bits/stdc++.h>
using namespace std;

/*Single Inheritance*/
class Animal{
    public:
    void eat(){
        cout<<"Animal is eating"<<endl;
    }
};

class Dog:public Animal{
    public:
    void bark(){
        cout<<"Dog can bark"<<endl;
    }
};

int main(){

    Dog dog1;
    dog1.eat();
    dog1.bark();

}