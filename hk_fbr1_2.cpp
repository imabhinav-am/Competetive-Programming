#include <bits/stdc++.h>

using namespace std;

#define faster ios_base::sync_with_stdio(false);cin.tie(0);

vector<long long> preorder(vector<long long> v){
    stack<long long> st;
    long long tp;
    vector<long long> ans;
    st.push(1);
    while(!st.empty()){
        tp = st.top();
        ans.emplace_back(tp);
        st.pop();
        if(v[2*tp+1])
            st.push(v[2*tp+1]);
        if(v[2*tp])
            st.push(v[2*tp]);
    }
    /*    cout << "Preorder\n"; 
        for(long long i=0; i<ans.size(); i++)
            cout << ans[i] << " ";
        cout << "\n";*/
    return ans;
}

vector<long long> postorder(vector<long long> v){
    stack<long long> st1,st2;
    long long tp;
    vector<long long> ans;
    st1.push(1);
    while(!st1.empty()){
        tp = st1.top();
        st2.push(tp);
        st1.pop();
        if(v[2*tp])
            st1.push(v[2*tp]);
        if(v[2*tp+1])
            st1.push(v[2*tp+1]);
    }
    while(!st2.empty()){
        ans.emplace_back(st2.top());
        st2.pop();
    }
    return ans;
}

int main(){
    faster;
    long long t,n,k,a,b,tp;
    cin >> t;
    for(long long x=1; x<=t; x++){
        cin >> n >> k;
        vector<long long> v(100000,0),pre,post;
        for(long long i=1; i <= n; i++){
            cin >> a >> b;
            v[2*i] = a;
            v[2*i+1] = b;
        }
        if(k==1){
            cout << "Case #" << x << ": ";
            for(long long i=1; i<=n; i++)
                cout << "1 ";
            cout << "\n";
            continue;
        }
        /*for(long long i=0; i<=2*n+1; i++){
            cout << v[i] << " ";
        }
        cout << "\n";*/
        pre = preorder(v);
        /*cout << "Preorder\n"; 
        for(long long i=0; i<pre.size(); i++)
            cout << pre[i] << " ";
        cout << "\n";*/
        post = postorder(v);
        /*cout << "Postorder\n"; 
        for(long long i=0; i<post.size(); i++)
            cout << post[i] << " ";
        cout << "\n\n";*/
        map<long long,long long> m;
        for(long long i=0; i<n; i++)
            m[pre[i]] = post[i];
        long long label[n+1]={0};
        long long l = 1;
        //cout << "1 2 3 4 5 6 7 8 9 1 1 1 1 1 1\n";
        long long freq[k+1]={0};
        for(long long i=0; i<n; i++){
            if(label[pre[i]]==0){
                freq[l]++;
                label[pre[i]] = l;
                tp = m[pre[i]];
                while(label[tp]==0){
                    label[tp] = l;
                    tp = m[tp];
                }
                l++;
                if(l>k)
                    l=1;
            }
            /*for(long long j=1; j<=n; j++)
                cout << label[j] << " ";
            cout << "\n";*/
        }
        long long flag=0;
        for(long long i=0; i<n; i++){
            if(label[pre[i]] != label[post[i]]){
                flag=1;
            }
        }   
        if(flag)
            cout << "Case #" << x << ": Impossible\n";
        else{
            flag = 0;
            for(long long i=1; i<=k; i++){
                if(freq[i]==0){
                    flag = 1;
                    break;
                }
            }
            if(flag)
                cout << "Case #" << x << ": Impossible\n";
            else {  
                cout << "Case #" << x << ": ";
                for(long long i=1; i<=n; i++)
                    cout << label[i] << " ";
                cout << "\n";
            }
        }
    }
    return 0;
}