#include <iostream>
#include <thread>
#include "chapter.h"
#include <vector>
#include <atomic>
using namespace std;
/**
  1
***/
//void counter(int id, int number)
//{
//    for(int i = 0; i< number; ++i){
//        cout << "counter" << id << "--------";
//        cout << i << endl;
//    }
//}
//int main()
//{
//    thread t1{Counter{1, 20}};// 1
//    //thread t2(counter, 2 ,4);
//    Counter c(2,12);
//    thread t2(c);//2

//    thread t3(Counter(3, 20));

//    thread t4(mCounter());

//    Request req(100);

//    thread t{ &Request::process, &req};

//    t.join();

//    t1.join();
//    t2.join();
//    t3.join();
//    t4.join();
//}
/**
  2
***/

void fun(std::atomic<int>& count)
{
//    for(int i=0; i<100; i++){
//        ++count;
//        std::this_thread::sleep_for(std::chrono::microseconds(1));
//    }
    int result =0;
        for(int i=0; i<100; i++){
            ++result;
            std::this_thread::sleep_for(std::chrono::microseconds(1));
        }
        count += result;
}

int main()
{
    std::atomic<int> count(0);

    std::vector<std::thread> threads;

    for(int i=0; i<10; ++i){
        threads.push_back((std::thread{fun,std::ref(count)}));
    }

    for(auto &t : threads){
        t.join();
    }
    cout << "Result = " <<count <<endl;
}


























