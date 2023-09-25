#include <iostream>

using namespace std;


class A {
public:
    virtual void func() {
        std::cout << "A::func()" << std::endl;
    }
};

class B : public A {
public:
    virtual void func() override{
        std::cout << "B::func()" << std::endl;
    }
};

int main()
{

        A a;
        B b;
        A* ptr = &b; // Osoitin B-luokkaan A-luokan näkökulmasta
        ptr->func(); // Kutsutaan A-luokan func()-funktiota
        return 0;

}
