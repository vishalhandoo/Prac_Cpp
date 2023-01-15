#include<bits/stdc++.h>
using namespace std;

int main(){
    string firstString="Vishal Handoo";
    string myString="Hello World ";
    myString.append(firstString);
    cout<<firstString.capacity();
    cout<<endl<<myString;
    return 0;
}