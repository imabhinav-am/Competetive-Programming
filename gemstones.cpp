#include <bits/stdc++.h>

using namespace std;
int ctr[27]={0},N;

void count_char(string s)
{
	sort(s.begin(),s.end());
	N=s[s.size()-1]-96;
	int ch=97,k=0;
	for(int j=1;j<=N;j++)
	{
		for(;k<s.size();k++)
		{
			if(s[k]==ch)
			{
				ch++;
				ctr[j]++;
				break;	
			}	
		}	
	}	
}

int gemstones(vector <string> arr){
	int count=0;
    for(int i=1;i<=N;i++)
    {
    	if(ctr[i]==arr.size())
    	{
    		count++;
		}
	}
	return count;
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
       count_char(arr[arr_i]);
    }
    int result = gemstones(arr);
    cout << result << endl;
    return 0;
}

