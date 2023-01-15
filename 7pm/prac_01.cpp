#include<bits/stdc++.h>
using namespace std;





int main(){
    int userInput;
    cout<<"Enter the year: ";
    cin>>userInput;
    if(userInput%400==0){
        cout<<userInput<<" is a leap year";
    }
    else if(userInput%100==0){
        cout<<"Not a leap Year";
    }
    else if(userInput%4==0){
        cout<<userInput<<" is a leap year";
    }
    else{
        cout<<"Not a leap year";
    }
    return 0;
}