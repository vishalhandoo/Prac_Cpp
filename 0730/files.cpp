#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream out("example.txt");
    string name;
    cout<<"enter your name";
    cin>>name;
    out<<"my name is "<<name<<endl;
    out<<"Writing to this file. \n";
    out.close();
}