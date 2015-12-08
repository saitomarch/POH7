#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
    string str;
    getline(cin, str);
    int num = stoi(str);
    while(num >= 0) {
        cout << num << ((num == 0) ? "!!" : "") << endl;
        num--;
    }
    return EXIT_SUCCESS;
}

