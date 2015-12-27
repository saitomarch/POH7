#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
    string str;
    getline(cin, str);
    int times = stoi(str);
    int num = 1;
    for (int cnt = 1; cnt <= times; cnt++) {
        num *= cnt;
    }
    cout << num << endl;
    return EXIT_SUCCESS;
}
