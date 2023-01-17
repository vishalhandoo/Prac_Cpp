#include<bits/stdc++.h>
using namespace std;


/*heirarichal inheritance*/
//it has single base class and multiple derived class
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
class C:public A{
    protected:
    int c;


    public:
    void getC(){
        cout<<"Enter the value of C : ";
        cin>>c;
    }
};
class D:public A{
    public:
    void mul(){
        getA();
        cout<<"The multiplication is : "<<a<<endl;
    }
};

int main(){

    D d1;
    d1.mul();

    return 0;
}