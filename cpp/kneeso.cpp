#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;
string readline() {
    string str;
    getline(cin, str);
    return str;
}
int main(void){
    auto width = stoi(readline());
    auto length = stoi(readline());
    
    vector<string> pattern = {"R", "W"};
    
    string str = "";
    for (auto idx = 0; idx < length; idx++) {
        str += pattern[(idx / width) % pattern.size()];
    }
    cout << str << endl;
    
    return EXIT_SUCCESS;
}
