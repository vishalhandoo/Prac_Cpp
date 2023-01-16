#include<bits/stdc++.h>
using namespace std;

class vehicle{
    public:
    string Brand;
    string Description;
    string offRoadValue;


    void setBrand(string s){
        Brand=s;
        
    }
    string getBrand(){
        return Brand;
    }
    void setdescription(string s){
        Description=s;
        
    }
    string getDescription(){
        return Description;
    }
    void setValue(string s){
        offRoadValue=s;
        
    }
    string getValue(){
        return offRoadValue;
    }

};
class car:public vehicle{
    public:
    string usage;

};

int main(){
    vehicle truck;
    car car1;
    cout<<endl<<"Brand\t\t";
    cout<<"Description\t";
    cout<<"Value\t\t"<<endl;
    cout<<"------------------------------------------------"<<endl;
    truck.setBrand("Mercedies");
    truck.setdescription("Load Carrer");
    truck.setValue("00,20,00,000");
    cout<<truck.getBrand()<<" ";
    cout<<"\t"<<truck.getDescription()<<" ";
    cout<<"\t"<<truck.getValue()<<endl;
    
    car1.setBrand("Maruti Suzuki");
    car1.setdescription("Luxuary Car");
    car1.setValue("01,20,00,000");
    cout<<car1.getBrand();
    cout<<"\t"<<car1.getDescription();
    cout<<"\t"<<car1.getValue()<<endl;
    cout<<endl;
    return 0;
}