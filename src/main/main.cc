#include <iostream>
#include "src/lib/solution.h"
#include <vector>
using namespace std;

int main()
{
    Solution solution ;
    string s="test";
    int first_index=0;
    int second_index=4;
    cout<<"before swap = "<< s <<endl;
    solution.SwapChar(s,first_index,second_index);
    //std::cout << solution.PrintHelloWorld() << std::endl;
    cout<<"after swap = "<< s <<endl;

    return EXIT_SUCCESS;
}