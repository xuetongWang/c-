#include "chapter.h"
#include <memory>
#include <iostream>

double spreadsheet::getValue() const
{

}
void spreadsheet::setValue(const double &value)
{

}
int main(int argc, char *argv[])
{
    /*
     * unique ptr
    */
    auto tmp = std::make_unique<spreadsheet>();
    return 0;
}
