#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {
    ifstream fStream("../Share/dox/testcmake3");
    string strOutput;
    
    fStream >> strOutput;
    
    cout << strOutput <<endl;
    
    return 0;
}
