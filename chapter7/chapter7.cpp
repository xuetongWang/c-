#include "chapter.h"
#include <memory>
#include <iostream>

double spreadsheet::getValue() const
{

}
void spreadsheet::setValue(const double &value)
{
    mValue = value;
}
/*
 *复制构造函数
*/
spreadsheet::spreadsheet(const spreadsheet &src) : constvalue(src.constvalue)
{

}

spreadsheet::spreadsheet() : mValue(3),constvalue(9)
{
 //constvalue=9;
  //intvalue = mValue;
}
spreadsheet::spreadsheet(const double  value) : constvalue(9)
{

}
spreadsheet::spreadsheet();
int main(int argc, char *argv[])
{
    /*
     * unique ptr
    */
    auto tmp = std::make_unique<spreadsheet>();
    //spreadsheet xx[5];
   // spreadsheet xxx;
   // xxx.setValue(5.2);
    spreadsheet cell1(5.2);
    /*
     *
    */
    spreadsheet clell2(cell1);
    return 0;
}
