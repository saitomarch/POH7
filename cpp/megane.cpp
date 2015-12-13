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

std::vector<std::vector<int>> prepare(int size) {
    std::vector<std::vector<int>> vec;
    for (int cnt = 0; cnt < size; cnt++) {
        std::vector<int> line;
        auto arr = split(readline(), ' ');
        for (int idx = 0; idx < size; idx++) {
            line.push_back(stoi(arr[idx]));
        }
        vec.push_back(line);
    }
    return vec;
}

int main(void){
    const auto s1 = stoi(readline());
    auto m1 = prepare(s1);
    const auto s2 = stoi(readline());
    auto m2 = prepare(s2);
    
    int x = 0, y = 0;
    bool finished = false;
    for (int x1 = 0; x1 <= s1 - s2 && !finished; x1++) {
        for (int y1 = 0; y1 <= s1 - s2 && !finished; y1++) {
            bool matches = true;
            for (int x2 = 0; x2 < s2 && matches; x2++) {
                for (int y2 = 0; y2 < s2 && matches; y2++) {
                    if (m1[x1 + x2][y1 + y2] != m2[x2][y2]) {
                        matches = false;
                    }
                }
            }
            if (matches) {
                x = x1;
                y = y1;
                finished = true;
            }
        }
    }
    cout << x << " " << y << endl;
    
    return EXIT_SUCCESS;
}

