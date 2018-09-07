/* 
	Author   : Abhinav
   
	Modified : 21-12-2017 09:28:48 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

bool comp(pair<ll,ll> a, pair<ll,ll> b){
	return (a.first > b.first);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,m,r,k,i,c1,c2;
	vector<pair<ll,ll>> temp,tr;
	map <ll, vector<pair<ll,ll>>> grid;
	cin >> n >> m >> k;
	ll ans = n*m;
	while(k-- > 0){
		cin >> r >> c1 >> c2;
		if(grid.count(r)){
			temp = grid.find(r)->second;
			temp.emplace_back(make_pair(c1,c2));
			grid.erase(r);
			grid.insert(make_pair(r,temp));	
		}
		else{
			vector<pair<ll,ll>> tr;
			tr.emplace_back(make_pair(c1,c2));
			grid.insert(make_pair(r,tr));
		}
	}
	map <ll, vector<pair<ll,ll>>> :: iterator it;
	it = grid.begin();
	while(it != grid.end()){
		temp = it->second;
		sort(temp.begin(), temp.end(),comp);
		i = temp.size()-1;
		for (j,0,temp.size()){
    		if (i!=0 && temp[i-1].first <= temp[i].second){
	        	while (i!=0 && temp[i-1].first <= temp[i].second){
	            	temp[i-1].second = max(temp[i-1].second, temp[i].second);
	            	temp[i-1].first = min(temp[i-1].first, temp[i].first);
	            	i--;
	        	}
    		}		
    		else
        		temp[i] = temp[j]; 
    		i++;
		}
		for(j,0,i){
			ans -= (temp[j].second - temp[j].first + 1);
		}
		it++; 
	}
	it = grid.begin();
	while(it != grid.end()){
		i = 0;
		temp = it->second;
		while(i < temp.size()){
			i++;
		}
		it++;
	}
	cout << ans << "\n";
	return 0;
}