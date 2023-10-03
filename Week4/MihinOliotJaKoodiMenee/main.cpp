#include <iostream>
using namespace std;

class MyClass
{
public:
    static void printResult(float);
    float calculateResult();
private:
    float number = 2.0;
};


void MyClass::printResult(float n)
{
    cout<<"Result = " << n <<endl;
}
float MyClass::calculateResult()
{
    cout<<"This object number is at address = "<< this <<endl;
    return number*number;
}


MyClass olio1;
int main()
{
    olio1.printResult(olio1.calculateResult());

    MyClass olio2;
    olio2.printResult(olio2.calculateResult());

    MyClass * olio3;
    olio3 = new MyClass;
    olio3->printResult(olio3->calculateResult());

    MyClass::printResult(100);

    delete olio3;
    olio3 = nullptr;
    return 0;
}
