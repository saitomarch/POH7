#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
string readline() {
    string str;
    getline(cin, str);
    return str;
}
vector<string> split(const string &str, char sep) {
    vector<string> vec;
    istringstream sstream(str);
    string buf;
    while (getline(sstream, buf, sep)) {
        vec.push_back(buf);
    }
    return vec;
}
int main(void){
    const auto nums = 2;
    int selected = 0;
    int max_performance = 0.0;
    for (int cnt = 0; cnt < nums; cnt++) {
        auto arr = split(readline(), ' ');
        float performance = stof(arr[0]) / stof(arr[1]);
        if (performance > max_performance) {
            selected = cnt;
            max_performance = performance;
        }
    }
    cout << selected + 1 << endl;
    return EXIT_SUCCESS;
}

