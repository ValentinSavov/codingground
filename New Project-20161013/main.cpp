#include <iostream>
using namespace std;

class Parent
{
    public:
    virtual int func()
    {
        cout << "Param" << endl;
    }

    template <typename T>
    T tfunc(T param)
    {
        cout<< param << endl;
        return param;
    }
};
class Child1 : public Parent
{
    public:
    int func()
    {
        cout << "Child1" << endl;
    }
};
class Child2 : public Parent
{
    public:
    int func()
    {
        cout << "Child2" << endl;
    }
};
int main()
{
    Parent* ppar;
    Parent par;
    Child1 c1;
    Child2 c2;
    ppar = &par;
    ppar->func();
    ppar = &c1;
    ppar->func();
    ppar = &c2;
    ppar->func();
    ppar->tfunc("stringTemplateTest");
    ppar->tfunc(456);
    return 0;
}

