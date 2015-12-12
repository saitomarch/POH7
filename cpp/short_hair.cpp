#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(void){
    const auto times = 2;
    int num = 0;
    for (int cnt = 0; cnt < times; cnt++) {
        string str;
        getline(cin, str);
        num += stoi(str);
    }
    cout << num << endl;
    return EXIT_SUCCESS;
}

