#include<iostream>
#include<vector>

using namespace std;

long long int Max;

int max_sarr(vector<long> a,int n, long m){
	
	if(n==1){
		return a[0];
	}
	
	int mid = n/2;
	int left_max_sarr = max_sarr(a,mid,m); 
	vector<long> b(a.begin() + mid, a.end());
	int right_max_sarr = max_sarr(b,n-mid,m);
	int left_sum = -999;
	int sum=0,max_left;
	for(int i=mid-1;i>=0;i--){
		sum=sum+a[i];
		sum = sum % m;
		if(sum>left_sum){
			left_sum=sum;
		}
		if(left_sum > Max){
			Max = left_sum;
		}
	}
	int right_sum = -999;
	int max_right;
	sum=0;
	for(int i=mid;i<n;i++){
		sum=sum+a[i];
		sum = sum % m;
		if(sum>right_sum){
			right_sum=sum;
		}
		if(right_sum > Max){
			Max = right_sum;
		}
	}
	int ans = max(left_max_sarr,right_max_sarr);
	return max(ans,left_sum+right_sum);
}


int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        long m;
        cin >> n >> m;
        vector<long> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        Max =0;
        long mx = max_sarr(a, n, m);
        cout << Max << endl;
    }
    return 0;
}
