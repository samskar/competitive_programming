// Andrés Mejía
using namespace std;
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>

////////////// Prewritten code follows. Look down for solution. ////////////////
#define foreach(x, v) for (typeof (v).begin() x=(v).begin(); x !=(v).end(); ++x)
#define For(i, a, b) for (int i=(a); i<(b); ++i)
#define D(x) cout << #x " is " << (x) << endl

const double EPS = 1e-9;
int cmp(double x, double y = 0, double tol = EPS) {
    return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}
////////////////////////// Solution starts below. //////////////////////////////

int main(){
    string s, t;
    while (getline(cin, s) and getline(cin, t)) {
        string ans = "";
        map<char, int> times;
        for (int i = 0; i < s.size(); ++i) times[s[i]]++;
        for (int i = 0; i < t.size(); ++i) {
            if (times[t[i]] > 0) {
                ans += t[i];
                times[t[i]]--;
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}