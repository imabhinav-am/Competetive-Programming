/* 
	Author   : Abhinav
   
	Modified : Sunday 17 February 2019 01:06:55 AM IST

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef map<ll,ll> mllmp;
typedef pair<int,int> PII;

#define faster  ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define PB push_back 
#define MP make_pair
# define INF 0x3f3f3f3f

const ll mod = 1e9+7;

#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)

int main(){
	faster;
	ll n,x;
	int flag=0;
	set<ll> pos, neg, zero;
	set<ll> ans_pos, ans_neg, ans_zero;
	cin >> n;
	rep(i,0,n){
		cin >> x;
		if(x>0)
			pos.insert(x);
		else if(x==0);
		else
			neg.insert(x);
	}
	if(neg.size()>1){
		ans_neg.insert(*neg.begin());
		neg.erase(neg.begin());
		for(auto s: neg) ans_zero.insert(s);	
	}
	else{
		ans_neg.insert(*neg.begin());
	}
	if(pos.size()==0){
		auto tt = ans_zero.begin();
		ans_pos.insert(*tt);
		ans_zero.erase(tt);
		tt = ans_zero.begin();
		ans_pos.insert(*tt);
		ans_zero.erase(tt);
	}
	else{
		for(auto s: pos) ans_pos.insert(s);	
	}
	ans_zero.insert(0);
	cout << ans_neg.size() << " ";
	for(auto s: ans_neg) cout << s << " ";
	cout << "\n";
	cout << ans_pos.size() << " ";
	for(auto s: ans_pos) cout << s << " ";
	cout << "\n";
	cout << ans_zero.size() << " ";
	for(auto s: ans_zero) cout << s << " ";
	cout << "\n";
	return 0;
}