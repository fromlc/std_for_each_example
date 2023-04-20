//------------------------------------------------------------------------------
// std_for_each_example.cpp 
// 
// Demos the std::for_each template function with std::vector
// 
// Author: https://cplusplus.com/reference/algorithm/for_each/
// Modified by: Prof. Linda C
//------------------------------------------------------------------------------

#include <iostream>
#include <vector>

//------------------------------------------------------------------------------
// using symbols
//------------------------------------------------------------------------------
using std::cout;
using std::string;
using std::vector;

//------------------------------------------------------------------------------
// called by for_each
//------------------------------------------------------------------------------
void myfunction(int i) {  // function:
    cout << ' ' << i;
}

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
#include <iostream>     // std::cout
#include <algorithm>    // std::for_each
#include <vector>       // std::vector

int main() {
    vector<int> myvector;
    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);
    myvector.push_back(40);
    myvector.push_back(50);
    myvector.push_back(60);
    myvector.push_back(70);

    cout << "myvector contains:";
    for_each(myvector.begin(), myvector.end(), myfunction);
    cout << '\n';

    return 0;
}