#include<bits/stdc++.h>
using namespace std;


int sumExpect(int arr[],int size,int userInput){
    int sum=0;
    for(int i = 0 ; i < size ; i++){
        
        if(arr[i]==userInput){
            continue;
        }
        else{
            sum+=arr[i];
        }
    }
    return sum;
}



int main(){
    int size=5;
    int arr[size];
    for(int i = 0 ; i < size ;i++){
        cin>>arr[i];
    }
    int userInput;
    cout<<"Enter the number";
    cin>>userInput;

    cout<<sumExpect(arr,size,userInput);
    
    return 0;
}