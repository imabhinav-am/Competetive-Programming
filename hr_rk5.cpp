#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;

int main(){
	faster;
	ll ans,j,k,ctr,n;
	string s;
	cin >> s;
	n = s.size();
	cout << "1 ";
	for(int i=1;i<n;i++){
        if(s[i]!=s[0]) cout << "0 ";
        else{
            int k=0;
            string str_left = "", str_right = "";
            while(1){
                if(s[k]==s[i+k]&& i+k<n) {
                    str_right += s[i+k];
                    k++;
                }
                else 
                    break;
            }
            k = i;
            while(1){
                if(s[k]==s[i-k]&& i-k>=0) {
                    str_left += s[i-k];
                    k--;
                }
                else 
                    break;
            }
            k = 0;
           	for(int i=0; i<min(str_left.size(),str_right.size()); i++){
           		if(str_left[i] != str_right[i])
           			break;
           		k++;
           	}
           	cout << k << " ";
        }
    }
	return 0;
}