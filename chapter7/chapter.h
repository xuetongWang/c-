#pragma once
#include <string>
/*
 * public: \
 * private:\
 * protect:\
*/
class spreadsheet
{
/*
* public 都能访问 protect：都能访问，其他对象不能访问 。派生类能访问 private：都不能访问
*/
public:
    void setValue (const double &value);
    double getValue() const;

    /*
     * defalut 就不用在cpp中定义类的构造函数了
    */
    //spreadsheet() = default;

    spreadsheet();
    spreadsheet(const double value);

    /*
     * const 放在后面代表不能修改类内的参数
    */
    //const std::string& getString() const;

    /*
     *
    */
    spreadsheet(const spreadsheet &src);


private:
    double mValue;
    /*
     *const必须用ctor-initializer
    */
    const int constvalue;
    /*
     *引用必须用ctor-initializer
    */
    //int &intvalue;

};

class SomeClass
{
public:
    SomeClass();
private:
    spreadsheet sheet;
};
