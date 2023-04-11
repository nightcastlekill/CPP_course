#include <iostream>

using namespace std;

class Base {
public:
    int a = 1;
    void f() {
        cout << "Base\n";
    }
};

class Derived : public Base {
public:
    int b = 6;
    void g() {
        cout << "derived\n";
    }
};
int main()
{
    std::cout << "Hello World!\n";
}