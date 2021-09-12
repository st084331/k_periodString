#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main() {
    int N, i, j;
    string str;
    int logic;
    cin >> N;
    while (N--) {
        cin >> str;
        logic = true;
        for (i = 1; i <= str.length(); i++) {
            if (str.length() % i != 0) continue;
            for (j = i; j < str.length(); j++)
                if (str[j] != str[j % i]) {
                    logic = false;
                    break;
                }
            if (logic) break;
            logic = true;
        }
        cout << i << endl;
        if(N) cout << endl;
    }
    return 0;
}