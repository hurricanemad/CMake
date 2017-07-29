#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {
    ifstream fStream("../share/doc/testcmake3/text.txt");
    string strOutput;
    
    fStream >> strOutput;
    
    cout << strOutput <<endl;
    
    return 0;
}
