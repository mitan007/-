
#include <bits/stdc++.h>
#define MAXN 10010
using namespace std;


bool judgePalindrome(char* str, int len) {
    // 判断第 i 个字符是否和倒数第 i 个字符相等 
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[MAXN];
    // 采用这种输入方式可以录入空格
    while (cin.getline(str, MAXN)) {
        cout << (judgePalindrome(str, strlen(str)) ? "true" : "false") << endl;
    }

    return 0;
}