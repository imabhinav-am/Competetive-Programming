#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll t,n;
    cin >> t;
    for(int x=1; x<=t; x++){
        ll ans = 1;
        cin >> n;
        char a[n],b[n],c[n];
        scanf("%s",a);
        scanf("%s",b);
        scanf("%s",c);
        if(n%2==0){
            if(a[0]=='#' || b[0]=='#' || c[n-1]=='#' || b[n-1]=='#')
                ans = 0;
            else{
                for(int j=1; j<n-2; j+=2){
                    int flag1=1, flag2=1;
                    if(b[j]=='#' || b[j+1]=='#'){
                        ans = 0;
                        break;
                    }
                    if(a[j]=='#' || a[j+1]=='#')
                        flag1 = 0;
                    if(c[j]=='#' || c[j+1]=='#')
                        flag2 = 0;
                    if(flag1==0 && flag2 == 0){
                        ans = 0;
                        break;
                    }
                    if(flag1==1 && flag2==1){
                        ans = (ans*2)%(1000000007);
                    }
                }
            }
        }
        else{
            ans = 0;
        }
        cout << "Case #" << x << ": " << ans << "\n";
    }
    return 0;
}