#include<bits/stdc++.h>
using namespace std;


class Student{
    private:
    string name,gender;
    int age;

    public:
    Student(){
        cout<<"Enter the First Name of the student: ";
        cin>>name;
        cout<<"Enter the gender : ";
        cin>>gender;
        cout<<"Enter the Age : ";
        cin>>age;
    }

    void displayInfo(){
        cout<<endl<<name<<"\t"<<gender<<"\t"<<age<<endl;
    }
};



int main(){
    Student s1;
    s1.displayInfo();

    return 0;
}