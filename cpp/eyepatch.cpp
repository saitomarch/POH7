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
    auto total_cnt = stoi(readline());
    auto have_cnt = stoi(readline());
    auto have_list = split(readline(), ' ');
    auto sell_cnt = stoi(readline());
    auto sell_list = split(readline(), ' ');
    
    std::vector<int> should_buy_list;
    for (auto sell : sell_list) {
        bool matches = false;
        for (auto have : have_list) {
            if (stoi(sell) == stoi(have)) {
                matches = true;
                break;
            }
        }
        if (!matches) {
            should_buy_list.push_back(stoi(sell));
        }
    }
    
    sort(should_buy_list.begin(), should_buy_list.end());
    
    string str = "";
    for (auto should_buy : should_buy_list) {
        if (!str.empty()) {
            str += " ";
        }
        str += to_string(should_buy);
    }
    cout << (str.empty() ? "None" : str) << endl;
    return EXIT_SUCCESS;
}

