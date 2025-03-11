#include <iostream>
#include <string>
using namespace std;
class concat{
    protected:
     string name;
    public:
     concat(string value){name=value;} 
     void operator+(const concat& temp){
        cout<<"Concatenation: "<< (name + temp.name)<< endl;
     }
};
class compare: public concat{
    public:
     compare(string value):concat(value){}
     void operator+(const compare& temp){
        if(name==temp.name){
            cout<<" Strings are equal"<<endl;
        }else if(name>temp.name){
            cout<< name <<  "  is greater than "<< temp.name <<endl;
        }else{
            cout<< name <<  "  is smaller than "<<temp.name<<endl;
        }
       } 
     };
int main(){
    string val1,val2;
    cout<<"ENTER THE VALUE: "<<endl;
    cin>>val1>>val2;
    compare obj1(val1);
    compare obj2(val2);
    obj1 + obj2;
    return 0;
}
