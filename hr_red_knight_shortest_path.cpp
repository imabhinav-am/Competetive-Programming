/* 
	Author   : Abhinav
   
	Modified : 15-12-2017 02:48:56 AM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

#define for(i,j,k) for(ll i=j; i<k; i++)

//UL, UR, R, LR, LL, L

void printShortestPath(int n, int i_start, int j_start, int i_end, int j_end) {
    int flag = -1;
    vector <string> v;
    while(1){
    	if(i_start == i_end && j_start == j_end){
    		flag = 0;
    		break;
    	}
    	if(j_start-2 == j_end && i_start == i_end && j_start-2 >= 0){
    		v.emplace_back("L");
    		j_start -= 2;
    	}
    	else if(j_start+2 == j_end && i_start == i_end && j_start+2 < n){
    		v.emplace_back("R");
    		j_start += 2;
    	}
    	else if(i_start-2 >= i_end && j_start-1 >= j_end && i_start-2 >=0 && j_start-1 >=0){
    		v.emplace_back("UL");
    		i_start -= 2;
    		j_start -= 1;
    	}
    	else if(i_start-2 >= i_end && j_start+1 <= j_end+1 && i_start-2 >=0 && j_start+1 < n){
    		v.emplace_back("UR");
    		i_start -= 2;
    		j_start += 1;
    	}
    	else if(j_start+2 <= j_end && j_start+2 < n){
    		v.emplace_back("R");
    		j_start += 2;
    	}
    	else if(i_start+2 <= i_end && j_start+1 <= j_end+1 && i_start+2 < n && j_start+1 < n){
    		v.emplace_back("LR");
    		i_start += 2;
    		j_start += 1;
    	}
    	else if(i_start+2 <= i_end && j_start-1 >= j_end && i_start+2 < n && j_start-1 >= 0){
    		v.emplace_back("LL");
    		i_start += 2;
    		j_start -= 1;
    	}
    	else if(j_start-2 >= j_end && j_start-2 >= 0){
    		v.emplace_back("L");
    		j_start -= 2;
    	}
    	else{
    		flag = 1;
    		break;
    	}
    }
    if(flag == 0)
    	cout << v.size() << "\n";
    	for(i,0,v.size())
    		cout << v[i] << " ";
    else{
    	cout << "Impossible";
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
    cin >> n;
    int i_start;
    int j_start;
    int i_end;
    int j_end;
    cin >> i_start >> j_start >> i_end >> j_end;
    printShortestPath(n, i_start, j_start, i_end, j_end);
    return 0;
}