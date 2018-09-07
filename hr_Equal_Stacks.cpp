/* 
	Author   : Abhinav
   
	Modified : 12-12-2017 10:47:20 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

const ll mod = 1e9+7;

void enter(vector <int> &v, int n){
	for (int i = 0; i < n; ++i)
		cin >> v[i];
}

int sum(vector <int> v){
	int s=0;
	for (int i = 0; i < v.size(); ++i){
		s+=v[i];
	}
	return s;
}

int max_sum(int sum1,int sum2,int sum3){
	int z = max(sum1,sum2);
	return(max(z,sum3));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n1,n2,n3,t;
	cin >> n1 >> n2 >> n3;
	vector <int> s1(n1),s2(n2),s3(n3);
	enter(s1,n1);
	enter(s2,n2);
	enter(s3,n3);
	int sum1 = sum(s1);
	int sum2 = sum(s2);
	int sum3 = sum(s3);
	while(sum1!=sum2 || sum2!=sum3 || sum1!=sum3){
		t = max_sum(sum1,sum2,sum3);
		if(t == sum1){
			sum1 = sum1 - s1[0];
			s1.erase(s1.begin());
		}
		else if(t == sum2){
			sum2 = sum2 - s2[0];
			s2.erase(s2.begin());
		}
		else{
			sum3 = sum3 - s3[0];
			s3.erase(s3.begin());
		}
	}
	cout << sum1;
	return 0;
}