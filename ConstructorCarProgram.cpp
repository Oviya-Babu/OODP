#include<iostream>
#include<string>
using namespace std;
class Cars{
    private:
     string comapnyName;
     string modelName;
     string fuelType;
     float mileage;
     double price;
    public:
     //default constructor
     Cars(){
        cout<<" Default Constructor called" << endl;
     } 
     //parameterized constructors
     Cars(string cname, string mname, string ftype, float m, double p){
        cout<< "Parameterized Constructor called" << endl;
        comapnyName=cname;
        modelName=mname;
        fuelType=ftype;
        mileage=m;
        price=p;
}
//copy constructor
Cars(Cars &obj){
    cout<<" Copy Constructor called "<< endl;
    comapnyName=obj.comapnyName;
    modelName=obj.modelName;
    fuelType=obj.fuelType;
    mileage=obj.mileage;
    price=obj.price;
}
//member function 
void setData(string cname, string mname, string ftype, float m, double p){
        comapnyName=cname;
        modelName=mname;
        fuelType=ftype;
        mileage=m;
        price=p;
}
void displayData(){
    cout<<" Car Properties"<< endl;
    cout<<" Company Name: "<< comapnyName<< endl;
    cout<<" Model Name: "<< modelName<< endl;
    cout<<" Fuel Type: "<< fuelType<< endl;
    cout<<" Mileage: "<< mileage<< endl;
    cout<<" Price: "<< price<< endl;
    cout<<"-----------------------------"<< endl;
}
};
int main (){
    Cars car1,car2("Toyota","Fortuner","Diesel",15.5, 700000);
    car1.displayData();
    car2.displayData();
    Cars car3=car2; // copy cnostructor is called
    car3.displayData();
    return 0;
}  
