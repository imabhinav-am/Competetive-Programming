/* 
	Author   : Abhinav
   
	Modified : 04-12-2017 02:37:11 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll a,b,c;
	cin >> a >> b >> c;
	vector<ll> n1(a),n2(b),n3(c),res;
	for(ll i=0; i<a; i++)
		cin >> n1[i];
	for(ll i=0; i<b; i++)
		cin >> n2[i];
	for(ll i=0; i<c; i++)
		cin >> n3[i];
	ll x=0, y=0, z=0;
	for(;x<a && y<b && z<c;){
		if(n1[x] == n2[y]){
			res.emplace_back(n1[x]);
			x++;
			y++;
		}
		else if(n2[y] == n3[z]){
			res.emplace_back(n2[y]);
			y++;
			z++;
		}
		else if(n1[x] == n3[z]){
			res.emplace_back(n1[x]);
			x++;
			z++;
		}
		else if(n1[x] < n2[y]){
			if(n1[x] < n3[z])
				x++;
			else
				z++;
		}
		else{
			if(n2[y]<n3[z])
				y++;
			else
				z++;
		}
	}
	if(x == a){
		while(y<b && z<c){
			if(n2[y] == n3[z]){
				res.emplace_back(n2[y]);
				y++;
				z++;
			}
			else if(n2[y]<n3[z])
				y++;
			else
				z++;
		}
	}
	else if(y == b){
		while(x<a && z<c){
			if(n1[x] == n3[z]){
				res.emplace_back(n1[x]);
				x++;
				z++;
			}
			else if(n1[x]<n3[z])
				x++;
			else
				z++;
		}
	}
	else if(z == c){
		while(x<a && y<b){
			if(n1[x] == n2[y]){
				res.emplace_back(n1[x]);
				x++;
				y++;
			}
			else if(n1[x]<n2[y])
				x++;
			else
				y++;
		}
	}
	cout << res.size() << "\n";
	for(ll i = 0; i<res.size(); i++)
		cout << res[i] << "\n";
	return 0;
}