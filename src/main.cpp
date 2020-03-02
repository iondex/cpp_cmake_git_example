#include "Hello.hpp"
#define DBG_MACRO_NO_WARNING
#include "dbg.h"
#include <atomic>
#include <cstdlib>
#include <cstring>
#include <exception>
#include <iostream>
#include <string>
#include <thread>
#include <vector>

using namespace std;

struct Str {
private:
    size_t max_size;
    size_t length;
    char* buf;

public:
    Str(size_t max_size)
        : max_size{ max_size }
        , length{ 0 }
    {
        if (max_size == 0)
            throw invalid_argument("max_size < 0");

        buf = new char[max_size];
        buf[0] = 0;
    }

    ~Str()
    {
        delete[] buf;
    }

    void print(const char* tag)
    {
    }
};

int main()
{
    thread t1;
}