
#include <bits/stdc++.h>
#define MAXN 10010
using namespace std;


bool judgePalindrome(char* str, int len) {
    // �жϵ� i ���ַ��Ƿ�͵����� i ���ַ���� 
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[MAXN];
    // �����������뷽ʽ����¼��ո�
    while (cin.getline(str, MAXN)) {
        cout << (judgePalindrome(str, strlen(str)) ? "true" : "false") << endl;
    }

    return 0;
}