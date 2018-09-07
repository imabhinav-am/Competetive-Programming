/* 
	Author   : Abhinav
   
	Modified : 05-08-2018 11:54:42 PM
*/ 
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef vector<ll> vi;
 
#define faster  ios_base::sync_with_stdio(false);cin.tie(0);
 
const ll mod = 1e9+7;
 
#define rep(i,j,k) for(ll i=j; i<k; i++)
#define repv(i,j,k) for(ll i=j; i>k; i--)
 
int main(){
	faster;
	ll t,n,p,sum,ctr;
	cin >> t;
	while(t--){
		cin >> n >> p;
		vi v(n);
		map<ll,ll> m;
		rep(i,0,n){
			cin >> v[i];
			m[v[i]]++;
		}
		sort(v.begin(), v.end());
		if(n==1){
			if(p > v[0])
				cout << "0\n";
			else
				cout << "1\n";
			continue;
		}
		vi ans;
		ll tp=v[n-1],tm;
		ans.push_back(tp);
		m[tp]--;
		tm = p - tp;
		int flag;
		while(tm>0){
			if(m[tm]){
				m[tm]--;
				tp += tm;
				ans.emplace_back(tm);
			}
			else{
				flag=0;
				rep(i,0,n){
					if(m[v[i]] && v[i]>tm){
						m[v[i]]--;
						tp += v[i];
						ans.emplace_back(v[i]);
						flag=1;
						break;
					}
				}
				if(flag==0){
					for(auto itr=m.rbegin(); itr!=m.rend(); itr++){
						if(itr->second > 0){
							m[itr->first]--;
							tp += itr->first;
							ans.emplace_back(itr->first);
							break;
						}
					}
				}
			}
			tm = p - tp;
		}
		ll sz=ans.size();
		tp = v[n-1];
		tm = p - tp;
		while(tm>0){
			if(m[tm]){
				m[tm]--;
				tp += tm;
				ans.insert(ans.begin(),tm);
			}
			else{
				flag=0;
				rep(i,0,n){
					if(m[v[i]] && v[i]>tm){
						m[v[i]]--;
						tp += v[i];
						ans.insert(ans.begin(),v[i]);
						flag=1;
						break;
					}
				}
				if(flag==0){
					for(auto itr=m.rbegin(); itr!=m.rend(); itr++){
						if(itr->second > 0){
							m[itr->first]--;
							tp += itr->first;
							ans.insert(ans.begin(),itr->first);
							break;
						}
					}
				}
			}
			tm = p - tp;
		}
		rep(i,0,ans.size())
			cout << ans[i] << " ";
		cout << "\n";
	}
	return 0;
}