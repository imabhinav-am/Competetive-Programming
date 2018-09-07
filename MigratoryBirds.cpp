#include <bits/stdc++.h>

using namespace std;

int greatest(int arr[]){
    int max=0,j=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        { max=arr[i];
          j=i;
    	}
	}
    return j;
}

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    int arr[5]={0};
    for(int i=0;i<n;i++)
    {
        if(ar[i]==1)
            arr[0]++;
        if(ar[i]==2)
            arr[1]++;
        if(ar[i]==3)
            arr[2]++;
        if(ar[i]==4)
          arr[3]++;
        if(ar[i]==5)
          arr[4]++;
     }
    int grt=greatest(arr);
    return (grt+1);
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}

