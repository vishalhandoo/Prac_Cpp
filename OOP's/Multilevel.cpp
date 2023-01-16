#include<bits/stdc++.h>
using namespace std;

/*Multilevel Inheritance*/
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

class Puppy:public Dog{
    public:
    void sleep(){
        cout<<"Puppy's sleep more than adult dogs"<<endl;
    }
};

int main(){

    Puppy dog1;
    dog1.eat();
    dog1.bark();
    dog1.sleep();

}