#include<bits/stdc++.h>
using namespace std;


int findIndex(int arr[],int size,int userInput){
    for(int i = size-1 ; i>=0 ; i--){
        if(arr[i]==userInput){
            return i;
        }
    }
    return -1;
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

    cout<<findIndex(arr,size,userInput);
    
    return 0;
}