#include<iostream>
#include<string>
using namespace std;
class Book{
private:
 int bookID;
 string title;
 string author;
 double price;    
public:
 Book(){
    bookID=0;
    title=" Unknown";
    author="Unknown";
    price=0.0;
 }
 Book( int id, string t, string a, double p){
    bookID=id;
    title=t;
    author=a;
    price=p;
 }
 void displayBookInfo(){
    cout<<"Book ID:"<< bookID<<endl;
    cout<<"Title:"<< title<<endl;
    cout<<"Author:"<< author <<endl;
    cout<<"Price:$ "<< price<<endl;
    cout<<"-------------------------------"<< endl;
 }
};
int main(){
    Book book1;
    Book book2(1001,"C++ programming","Bjarne Stroustroup", 39.99);
    Book book3(1003,"Clean Code","Robert C. Martin", 29.99);
    cout<<"Book Details: \n";
    book1.displayBookInfo();
    book2.displayBookInfo();
    book3.displayBookInfo();
    return 0;

}
