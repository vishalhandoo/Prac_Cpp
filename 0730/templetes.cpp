#include<bits/stdc++.h>
using namespace std;


/*Class Templete Example
    template <class T>
    class myClass{
        T var;
        T myFunction(T int){
            ...
        }
    }
*/

template<class T>
class number{
    public:
    T num;
    
    T myNum(T n){
        num=n;
        return num;
    }
};


int main(){
    number<int> n1;
    number<double> n2;
    cout<<n1.myNum(14)<<endl;
    cout<<n2.myNum(14.145);

    return 0;
}