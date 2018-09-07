#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


int maximumPackages(vector<int> S, vector<int> K, vector<int> R, vector<int> C) {
    int ctr = 0;
    int n=S.size(), m=R.size();
    vector<pair<int,int>> b(n),c(m);
    for(int i=0; i<n; i++)
        b[i] = make_pair(S[i],K[i]);
    for(int i=0; i<m; i++)
        c[i] = make_pair(R[i],C[i]);
    //sort(b.begin(), b.end());
    //sort(c.begin(), c.end());
    for(int i=0; i<n; i++){
        int s = ceil(sqrt(2)*b[i].first);
        for(int j=0; j<m; j++){
            if(b[i].second == 0)
                break;
            if(s <= 2*c[j].first){
                if(b[i].second <= c[j].second){
                    ctr += b[i].second;
                    c[j].second -= b[i].second;
                    b[i].second = 0;
                }
                else{
                    ctr += c[j].second;
                    b[i].second -= c[j].second;
                    c[j].second = 0;
                }
            }
        }
    }
    return ctr;
}


int main(){
    int n,m;
    cin >> n >> m;
    vector <int> S(n), K(n), R(m), C(m);
    for(int i=0; i<n; i++)
        cin >> S[i];
    for(int i=0; i<n; i++)
        cin >> K[i];
    for(int i=0; i<m; i++)
        cin >> R[i];
    for(int i=0; i<m; i++)
        cin >> C[i];
    cout << maximumPackages(S,K,R,C);
}