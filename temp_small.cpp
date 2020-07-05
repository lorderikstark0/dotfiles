//user snippet for competiitve coding 

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define MOD 1000000007 

long long fast_expo(int base,int exp){
	long long res =1;
	while(exp>0){
		if(exp%2==1){
			res=(res*base)%MOD;
		}	base=(base*base)%MOD;
			exp/=2;
		
	}	
	return res%MOD;
}

//short hand for usual tokens
#define pb push_back
#define fi first
#define se second
#define ls last 

#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal

// traversal function to avoid long template definition. Now with C++11 auto alleviates the pain.
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)

// find if a given value is present in a container. Container version. Runs in log(n) for set and map
#define present(c,x) ((c).find(x) != (c).end())

//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())

// Avoiding wrap around of size()-1 where size is a unsigned int.
#define sz(a) int((a).size())


using namespace std;

// Shorthand for commonly used types
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    






    return 0;
}

