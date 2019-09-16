#pragma once
#include <string>
/*
 * public: \
 * private:\
 * protect:\
*/
class spreadsheet
{
public:
    void setValue (const double &value);
    double getValue() const;

    /*
     * const before and after
    */
    //const std::string& getString() const;
private:
    double value;
};
