#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(string s){
    string rev=s;
    reverse(rev.begin(),rev.end());

    if(rev==s){
        return true;
    }
    else{
        return false;
    }
}

// bool isPalindrome(string s){
//     for(int i = 0 ; i < s.length()/2;i++){
//         if(s[i]!=s[s.length()-i-1]){
//             return false;
//         }
//     }
//     return true;
// }



int main(){
    string userInput="abac";
    cout<<isPalindrome(userInput);
    return 0;
}