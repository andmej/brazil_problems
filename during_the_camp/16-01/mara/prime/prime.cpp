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

bool isPrime(int x){
  if (x == 2) return true;
  if (x <= 1) return false;
  if (x % 2 == 0) return false;
  for (int i = 3; 1LL * i * i <= x; ++i) {
    if (x % i == 0) return false;
  }
  return true;
}

int main(){
    #ifndef LOCAL
    #define problem_name "prime"
    assert( freopen(problem_name ".in", "r", stdin) != NULL);
    assert( freopen(problem_name ".out", "w", stdout) != NULL);
    #endif
    
    int k; cin >> k;
    
    vector< int > p;
    p.push_back(2);
    for (int next = 3; p.size() < k; next += 2) {
      if (isPrime(next)) p.push_back(next);
    }
    
    cout << p.back() << endl;
    
    return 0;
}


