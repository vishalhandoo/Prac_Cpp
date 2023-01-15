#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number=100;
    int rem;
    while(number!=0){
        rem=number%10;
        cout<<rem;
        number=number/10;
    }
    return 0;
}