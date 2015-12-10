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
int main() {
    auto cmd_arr = split(readline(), ' ');
    
    const auto x = stoi(cmd_arr[0]);
    const auto y = stoi(cmd_arr[1]);
    const auto z = stoi(cmd_arr[2]);
    const auto n = stoi(cmd_arr[3]);
    
    vector<int> cut_x, cut_y;
    
    for (auto cnt = 0; cnt < n; cnt++) {
        auto cut_arr = split(readline() , ' ');
        switch(stoi(cut_arr[0])) {
        case 0:
            cut_x.push_back(stoi(cut_arr[1]));
            break;
        case 1:
            cut_y.push_back(stoi(cut_arr[1]));
            break;
        default:
            break;
        }
    }
    
    sort(cut_x.begin(), cut_x.end());
    sort(cut_y.begin(), cut_y.end());
    
    int w = x, h = y;
    for (int idx = 0; idx <= cut_x.size(); idx++) {
        int tmp_w = ((idx == cut_x.size()) ? x : cut_x[idx]) - ((idx > 0) ? cut_x[idx - 1] : 0);
        if (w > tmp_w) {
            w = tmp_w;
        }
    }
    for (int idx = 0; idx <= cut_y.size(); idx++) {
        int tmp_h = ((idx == cut_y.size()) ? x : cut_y[idx]) - ((idx > 0) ? cut_y[idx - 1] : 0);
        if (h > tmp_h) {
            h = tmp_h;
        }
    }

    cout << w * h * z << endl;
    
    return EXIT_SUCCESS;
}

