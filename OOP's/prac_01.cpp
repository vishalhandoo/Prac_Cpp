#include<bits/stdc++.h>
using namespace std;



class Student{
    private:
    int password;
    
    public:
    string name;
    int rollno;
    void myMethod(){
        cout<<"hello "<<endl;
    }
    Student(){
        cout<<"This is not a default construtor"<<endl;
    }
    Student(string name){
        cout<<"This a parametarised constructor"<<endl;
    }

    void setPassword(int input){
        password=input;
    }

    int getPassword(){
        return password;
    }


};


int main(){
    Student s1;
    Student s3("albert");
    Student *s2=new Student;
    s1.name="Vishal";
    s1.rollno=01;
    s2->name="Abhishek";
    s1.myMethod();
    
    cout<<s2->name<<endl;
    s1.setPassword(234);
    cout<<s1.getPassword();

}