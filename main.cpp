#include <bits/stdc++.h>

using namespace std;

int main() {
    string source = "1b772435e9a2e3fc77bef1dbab27e1b170745b0af47420f2552213d3c81cd849";
    vector<bitset<32>> lk(64);
    for (int i = 0; i < 64; i++) {
        int hl = source[i] - '0';
        if (hl > 9) {
            hl = source[i] - 'a' + 10;
        }
        bitset<32> x = hl;
        lk[i] = x;
    }
    vector<bitset<32>> a(8);
    for (int i = 0; i < 8; i++) {
        bitset<32> added;
        for (int j = 0; j < 8; j++) {
            added |= lk[j + i * 8];
            if (j != 7) {
                added <<= 4;
            }
        }
        a[i] = added;
    }
    bitset<32> d = a[0];
    for (int i = 1; i < 8; i++) {
        d = d ^ a[i];
    }
    bitset<32> p = 0x24d03294;
    bitset<32> w = p ^ d;
    cout << endl << w;
}
