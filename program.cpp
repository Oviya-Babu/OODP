#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    try{
        if(num<0){
            throw "Negative number error!";
        }
        else if(num==0){
            throw 0;
        }
        else{
            cout<<"You entered a positive number: "<<num<<endl;
        }
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }
    catch(int num){
        cout<<"You entered zero!"<<endl;
    }
}