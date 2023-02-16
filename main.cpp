#include <iostream>
#include <thread>
#include "Print.h"

int main()
{
    Print my_obj;

    std::cout << "Hello World main!\n";
    std::thread t{&Print::print,
                &my_obj};
    t.join();
    return 0;
}
