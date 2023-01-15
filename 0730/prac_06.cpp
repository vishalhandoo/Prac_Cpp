#include<bits/stdc++.h>
using namespace std;

int myFunc(int number)
{   
    return number*number;
}
int myFunc(int number,int number02){
    return number*number02;
}
/*function overloading*/

int main()
{
    int a;
    cin>>a;
    cout<<myFunc(a)<<" ";
    cout<<myFunc(a,3);
    return 0;
}