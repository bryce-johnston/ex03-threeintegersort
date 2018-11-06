#include "threeintegersort.h"
#include <iostream>

using std::cout;
using std::endl;
using edu::vcccd::vc::csv13::sort;

int main(){
    int int1 = 5000;
    int int2 = 50000;
    int int3 = 500;
    sort(int1, int2, int3);
    cout << int1 << " " << int2 << " " << int3 << endl;
    return 0;
}
