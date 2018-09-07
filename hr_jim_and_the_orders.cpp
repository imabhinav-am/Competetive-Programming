/* 
	Author   : Abhinav
   
	Modified : 14-12-2017 12:55:36 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

struct order {
    ll id;
    ll start;
    ll end;
};

bool comp(order &order1, order &order2) {
    return (order1.end < order2.end || (order1.end == order2.end && order1.id < order2.id));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,d;
    cin >> n;
    vector<order> orders(n);
    for(int i=0; i < n; i++) {
        cin >> orders[i].start >> d;
        orders[i].end = orders[i].start + d;
        orders[i].id = i+1;
    }
    sort(orders.begin(), orders.end(), comp);
    for(int i=0; i < n; i++)
        cout << orders[i].id << " ";
    return 0;
}