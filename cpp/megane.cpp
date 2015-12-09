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
    const auto mapSize = stoi(readline());
    int map[mapSize][mapSize];
    
    for (int cnt = 0; cnt < mapSize; cnt++) {
        auto arr = split(readline(), ' ');
        for (int idx = 0; idx < mapSize; idx++) {
            map[cnt][idx] = stoi(arr[idx]);
        }
    }
    
    const auto patSize = stoi(readline());
    int pat[patSize][patSize];
    for (int cnt = 0; cnt < patSize; cnt++) {
        auto arr = split(readline(), ' ');
        for (int idx = 0; idx < patSize; idx++) {
            pat[cnt][idx] = stoi(arr[idx]);
        }
    }
    
    int x = 0, y = 0;
    bool finished = false;
    for (int idx = 0; idx <= mapSize - patSize && !finished; idx++) {
        for (int idy = 0; idy <= mapSize - patSize && !finished; idy++) {
            bool matches = true;
            for (int tmp_x = 0; tmp_x < patSize && matches; tmp_x++) {
                for (int tmp_y = 0; tmp_y < patSize && matches; tmp_y++) {
                    if (map[idx + tmp_x][idy + tmp_y] != pat[tmp_x][tmp_y]) {
                        matches = false;
                    }
                }
            }
            if (matches) {
                x = idx;
                y = idy;
                finished = true;
            }
        }
    }
    
    cout << x << " " << y << endl;
    return EXIT_SUCCESS;
}

