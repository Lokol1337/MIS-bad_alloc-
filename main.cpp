#include <iostream>
#include "llist.cpp"

using namespace std;

int main()
    {
        LList l;
        try{
            while(true)
                l.push_back(5);
        }
        catch(const bad_alloc& e)          
        {
            cout<<e.what();
        }
    }