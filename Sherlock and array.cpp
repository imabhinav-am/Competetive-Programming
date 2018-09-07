#include <bits/stdc++.h>

using namespace std;

string solve(vector < int > a){
    long long int sum =0,lsum=0,rsum=sum;
    if(a.size()==1){
    	return "YES";
	}
	for(int i=0; i<a.size(); i++){
    	sum+=a[i];
	}
	for(int i=1; i<a.size()-1; i++){
		lsum += a[i-1];
		rsum = sum - lsum - a[i];
		if(lsum == rsum){
			return "YES";
		}
	}
	return "NO";
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = solve(a);
        cout << result << endl;
    }
    return 0;
}

