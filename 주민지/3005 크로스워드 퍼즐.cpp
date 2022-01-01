#include<iostream>
 
using namespace std;
int r, c;
char p[22][22];
string ret="";
 
void find(int a,int b,bool d) {
    for (int i = 0; i < a; ++i) {
        string tmp = "";
        for (int j = 0; j <= b; ++j) {
            char& ref = (d ? p[i][j] : p[j][i]);
            if (ref == '#') {
                if (tmp.length()>1 && ret > tmp) ret = tmp;                
                tmp = "";                
            }
            else tmp.push_back(ref);
        }
    }
}
 
int main() {
    cin >> r >> c;
    for (int i = 0; i < r; ++i) cin >> p[i];
    for (int i = 0; i < r; ++i)p[i][c] = '#';
    for (int i = 0; i < c; ++i)p[r][i] = '#';
    for (int i = 0; i < 20; ++i)ret += 'z';
 
    find(r, c, true); 
    find(c, r, false);
    cout << ret;
}
