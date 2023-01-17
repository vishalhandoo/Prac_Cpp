#include<bits/stdc++.h>
using namespace std;


/*Hybrid inheritance*/
//it is a combination of more than one type of inheritance
class A{
    protected:
    int a;

    public:
    void getA(){
        cout<<"Enter the value of A : ";
        cin>>a;
    }
};
class B:public A{

    protected:
    int b;


    public:
    void getB(){
        cout<<"Enter the value of B : ";
        cin>>b;
    }
};
class C{
    protected:
    int c;


    public:
    void getC(){
        cout<<"Enter the value of C : ";
        cin>>c;
    }
};
class D:public B,public C{
    public:
    void mul(){
        getA();
        getB();
        getC();

        cout<<"The multiplication is : "<<a*b*c<<endl;
    }
};

int main(){

    D d1;
    d1.mul();

    return 0;
}