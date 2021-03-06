#include<iostream>
#include<stack>
#include<queue>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#include<cstring>
#include<map>
#include<numeric>
#include<sstream>
#include<cmath>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define pb push_back
#define f(i,x,y) for(int i = x; i<y; i++ )
#define FORV(it,A) for(vector<int>::iterator it = A.begin(); it!= A.end(); it++)
#define FORS(it,A) for(set<int>::iterator it = A.begin(); it!= A.end(); it++)
#define quad(x) (x) * (x)
#define mp make_pair
#define clr(x, y) memset(x, y, sizeof x)
#define fst first
#define snd second
typedef pair<int, int> pii;
typedef long long ll;
typedef long double ld;
#define inf (1 << 30)
#define N 100001

ll joseph(ll n, ll k){
	if(n == 1) return 0;
	if(k == 1) return n - 1;
	if(k > n) return (joseph(n - 1, k) + k) % n;
	ll cnt = n / k;
	ll res = joseph(n - cnt, k);
	res -= n % k;
	if(res < 0) res += n;
	else res += res / (k - 1);
	return res;
}

int main(){
	freopen("joseph.1n", "r", stdin);
	freopen("joseph.out", "w", stdout);
	ll n, k;
	cin >> n >> k;
	cout << joseph(n, k) + 1 << endl;
}


