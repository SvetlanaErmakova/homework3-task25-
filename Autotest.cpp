#include <iostream>
#include "header.hpp"
#include "Autotest.hpp"

using namespace std;

int Autotest1()
{
    list l;
    l.push_back("hhhff8");
    l.push_back("w3");
    l.push_back("33");
    l.remove_first();

    int f = 0;

    if (l[0]->val.length() == 2)
    {
        f = 1;
        cout << "Test 1 passed...\n";
    }
    else
    {
        cout << "Test 1 failed!\n";
        f = 0;
    }
    return f;
}

int Autotest2()
{
    list l;
    l.push_back("3");
    l.remove_first();

    int f = 0;

    if (l[0] == nullptr)
    {
        f = 1;
        cout << "Test 2 passed...\n";
    }
    else
    {
        cout << "Test 2 failed!\n";
        f = 0;
    }
    return f;
}

int Autotest3()
{
    list l;
    l.push_back("hhhff8");
    l.push_back("w3");
    l.push_back("33");
    l.push_back("erfgtr");

    int f = 0;

    if (l.size == 4)
    {
        f = 1;
        cout << "Test 3 passed...\n";
    }
    else
    {
        cout << "Test 3 failed!\n";
        f = 0;
    }
    return f;
}


int Autotest()
{
    if (Autotest1() * Autotest2() * Autotest3() == 1)
        return 1;
    else
        return 0;
}

