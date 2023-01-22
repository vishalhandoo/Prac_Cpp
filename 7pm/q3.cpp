#include<bits/stdc++.h>
using namespace std;


class rectangle{
    private:
    int length,width;

    public:
    rectangle(){
        cout<<"Enter the Length : ";
        cin>>length;
        cout<<"Enter the width : ";
        cin>>width;
    }

    void getArea(){
        cout<<"Area is: "<<length*width<<endl;
    }
    void getPara(){
        cout<<"Parameter is : "<<2*(length+width)<<endl;
    }
};



int main(){
    rectangle s1;
    s1.getArea();
    s1.getPara();

    return 0;
}