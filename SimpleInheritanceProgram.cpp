#include<iostream>
using namespace std;
class Shape{
    protected:
        int width, height;
    public:
        void setWidth(int w) {
            width =w;
        }
        void setHeight (int h){
            height =h;
        }
 };
class Rectangle : public Shape {
    public:
     int getArea(){
         return (width*height);
    }
};
int main(){
    Rectangle Rec;
    Rec.setWidth(10);
    Rec.setHeight(35);
    cout<<"The total area of the rectangle is :"<< Rec.getArea()<<endl;
    return 0;
}
