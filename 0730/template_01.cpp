#include <iostream>
using namespace std;

template <class T>
class Calculator{
    T num1, num2;

    public:
    Calculator(T n1, T n2){
        num1 = n1;
        num2 = n2;
    }

    void displatResult(){
        cout << "Numbers : " << num1 << " and " << num2 << endl;
        cout << num1 << " + " << num2 << " = " << add() << endl;
        cout << num1 << " * " << num2 << " = " << mul() << endl;
        cout << num1 << " / " << num2 << " = " << div() << endl;
        
    }

    T add(){
        return num1 + num2;
    }
    T mul(){
        return num1 * num2;
    }
    T div(){
        return num1 / num2;
    }
};

int main(){
    Calculator<int> intCalc(3,7);
    Calculator<float> floatCalc(3.55,7.2);

    cout << "Int result : " << endl;
    intCalc.displatResult();
    
    cout << "Float result : " << endl;
    floatCalc.displatResult();
}