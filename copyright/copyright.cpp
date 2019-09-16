#include <iostream>
#include <thread>
#include "copyright.h"
#include <vector>
#include <atomic>
using namespace std;

int main()
{
   string str1 = "abc";
   string str2 = str1;
   string str3;
   str3 = str1;

   printf("str1:%x  str2:%x  str3:%x",str1.data(),str2.data(),str3.data());
}


























