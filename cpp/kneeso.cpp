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
    auto width = stoi(readline());
    auto length = stoi(readline());
    
    string str = "";
    for (auto idx = 0; idx < length; idx++) {
        string colorstr = (idx / width) % 2 == 0 ? "R" : "W";
        str += colorstr;
    }
    cout << str << endl;
    
    return EXIT_SUCCESS;
}

