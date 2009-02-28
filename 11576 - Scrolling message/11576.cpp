using namespace std;
#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <fstream>
#include <numeric>
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

#define foreach(x, v) for (typeof (v).begin() x = (v).begin(); x != (v).end(); ++x)
#define For(i, a, b) for (int i=(a); i<(b); ++i)
#define D(x) cout << #x " is " << x << endl

int main(){
  int casos;
  cin >> casos;
  while (casos--){
    int n, w;
    cin >> n >> w;
    int ans = 0;
    string prev(n, ' ');
    for (int i=0; i<w; ++i){
      string s;
      cin >> s;
      ans += n;
      for (int i=0; i<n; ++i){
        if (s.find(prev.substr(i)) == 0){
          ans -= n - i;
          break;
        }
      }
      prev = s;
    }
    cout << ans << endl;
  }
  return 0;
}
