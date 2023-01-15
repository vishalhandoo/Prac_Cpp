#include<bits/stdc++.h>
using namespace std;

 bool isSubsequence(string s, string t) {//aab,abac
        int s1 = s.length() , t1 = t.length();
        int ierator=0;
        for(int i = 0 ; i < t1 && ierator < s1 ; i++){
            if(s[ierator]==t[i]){
                ierator++;
            }
        }
        return(ierator==s1);
    }

int main(){

}