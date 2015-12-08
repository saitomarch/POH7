#include <string>
#include <cstdlib>
using namespace std;

string readline() {
    string str;
    getline(cin, str);
    return str;
}

int main(void){
    auto times = stoi(readline());
    const string ann = "Ann";
    string str = "";
    for (auto cnt = 0; cnt < times; cnt++) {
        str += ann;
    }
    cout << str << endl;
    return EXIT_SUCCESS;
}

