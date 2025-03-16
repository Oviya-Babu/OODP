#include <iostream>
using namespace std;
class A {
public:
    void show() {
        cout << "A class show function" << endl;
    }
};

class B {
public:
    void show() {
        cout << "B class show function" << endl;
    }
};

class C : public A, public B {
public:
    void show() {
        // Resolving ambiguity by specifying which base class's show() to call
        A::show(); 
        B::show();
    }
};

int main() {
    C obj; 
    obj.show(); // Calls both A::show() and B::show()
    return 0;
}

 