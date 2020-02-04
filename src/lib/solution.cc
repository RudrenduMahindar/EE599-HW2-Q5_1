#include "solution.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

void Solution::SwapChar(string& s,int& first_index,int& second_index) { 
  
  if(first_index<0 || first_index>=s.length())
    cout<< "invalid  indices" << endl;
  else if(second_index<0 || second_index>=s.length())  
    cout<< "invalid  indices" << endl;
  else  
    swap(s[first_index],s[second_index]);
  
}
