#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string readline() {
    string str;
    getline(cin, str);
    return str;
}
int main(void){
    int times = stoi(readline());
    string str = "";
    for (int cnt = 0; cnt < times; cnt++) {
        if (cnt > 0) {
            str += "_";
        }
        str += readline();
    }
    cout << str << endl;
    return EXIT_SUCCESS;
}

