#include <iostream>
#include <thread>
#include "chapter.h"
#include <vector>
#include <atomic>
using namespace std;

class Something
{
public:
    Something(){cout<<"2";}
};
class Parent
{
public:
    Parent(){cout<<"1";}
};
class Child: public Parent
{
public:
    Child(){cout<<"3";}
private:
    Something mdata;
};

int main()
{
    Child myChild;
    return 0;
}


























