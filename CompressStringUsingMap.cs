#include <bits/stdc++.h>
#include <unordered_map>
#include <string>

using namespace std;

void fun(string s) {
    map<char, int> mp;

    for (auto &x : s) {
        mp[x]++;
    }

    for (auto &it : mp) {
        cout << it.first << it.second;
    }
}

int main() {
    string s1 = "AAABBCCCGGHHHJJJKK";
    fun(s1);
    return 0;
}
