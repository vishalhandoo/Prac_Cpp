#include<bits/stdc++.h>
using namespace std;

int myFunc(int number)
{   int sum = 0;
    for(int i = 1 ; i <= number ; i++){
        sum=sum+i;
    }
    return sum;
}


int main()
{
    int a=myFunc(20);
    if(a%2==0){
        cout<<"Sum of the numbers is : "<<a<<" and it is a even number";
    }
    else{
        cout<<"odd number";
    }
    return 0;
}