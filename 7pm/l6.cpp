#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
  string s;
  cin>>s;
  int ans=0;
  string t="";
    for(char ch : s) 
    { 
        if(ch>='0' && ch<='9') 
        {
            t+=ch;
        }
        else 
        { 
            if(t.length()>0)
            ans+=stoi(t);  
            t=""; 
        } 
    }
    if(t.length()>0)
    ans+=stoi(t);  
    cout<<ans<<endl;
    return 0; 
}