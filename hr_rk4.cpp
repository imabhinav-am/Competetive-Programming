/* 
    Author   : Abhinav
   
    Modified : 18-02-2018 12:23:31 AM

*/ 

#include <bits/stdc++.h>

using namespace std;
int power(int x, unsigned int y){
    int temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}


int win(int m,int x, vector<int> cards,int n){
    unsigned int opsize = power(2, n);
    int ctr=0;
    for (int counter = 1; counter < opsize; counter++){  
        int prod=1;
        for (int j = 0; j < n; j++){
            if (counter & (1<<j))
                prod = ((prod%m)*(cards[j]%m))%m;
        }
        if(prod%m==x) ctr++;
    }
    return ctr;
}

int main() {
    int n;
    int m;
    int x,temp,ctr=0,ctr1=0,ctr2=0;
    cin >> n >> m >> x;
    vector<int> cards;
    for(int i = 0; i < n; i++){
        cin>>temp;
        if(temp%m==0) ctr++;
        if(temp%m == 1) ctr1++;
        if(temp%m == 2) ctr2++;
        cards.push_back(temp%m);
    }
    if(x==0) cout<< power(2,n)-power(2,n-ctr)<<"\n";
    else if(ctr1 == n) 
        cout << power(2,n) - 1 << "\n";
    else if(ctr2 == n) 
        cout << power(2,n) - power(2,n-1) << "\n";
    else{
    int res = win(m, x, cards, cards.size());
    cout << res << "\n";
    }
    return 0;
}