#ifndef FATHERCLASS_H
#define FATHERCLASS_H
#include <iostream>
using namespace std;

class FatherClass
{
public:
    FatherClass();
    ~FatherClass();
    void showFamilyInfo();
    int huuhaa;


protected:
    string skill;
    string getSkill();


private:
    string familyName;
    void setSkill(string);

};

#endif // FATHERCLASS_H
