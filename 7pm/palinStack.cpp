#include<bits/stdc++.h>
using namespace std;

bool isP(string s){
    stack<char> ch;
    int i;
    for( i = 0 ; i < s.size()/2 ; i++){
        ch.push(s[i]);
    }
    if(s.size()%2!=0){
        i++;
    }
    char ele;

    while(s[i]!='\0'){
        ele=ch.top();
        ch.pop();
        if(ele!=s[i]){
            return false;
        }
        i++;
    }
    return true;
}

int main(){

    string s="vishal";

    if(isP(s)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}