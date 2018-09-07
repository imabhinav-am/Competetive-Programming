    /* 
    	Author   : Abhinav
       
    	Modified : 10-06-2018 01:53:51 AM
    */ 
     
    #include <bits/stdc++.h>
     
    using namespace std;
     
    typedef long long ll;
    typedef vector<ll> vi;
     
    #define faster  ios_base::sync_with_stdio(false);cin.tie(0);
     
    const ll mod = 1e9+7;
     
    #define rep(i,j,k) for(ll i=j; i<k; i++)
    #define repv(i,j,k) for(ll i=j; i>k; i--)
     
    int ROW,COL;
     
    int isSafe(vector<vector<int>> v, int row, int col,vector<vector<bool>> visited){
        return (row >= 0) && (row < ROW) &&
               (col >= 0) && (col < COL) &&
               (v[row][col] && !visited[row][col]);
    }

    struct comp{
	    template<typename T>
	    bool operator()(const T& l, const T& r) const{
	        if (l.second != r.second)
	            return l.second > r.second;

	        return l.first < r.first;
	    }
	};
     
    void DFS(vector<vector<int>> v, int row, int col,vector<vector<bool>> &visited, int &count){
        static int rowNbr[] = {-1,0,0,1};
        static int colNbr[] = {0,-1,1,0};
     
        visited[row][col] = true;
     
        for (int k = 0; k < 4; ++k){
            if (isSafe(v, row + rowNbr[k], col + colNbr[k],
                                                  visited)){
                count++;
                DFS(v, row + rowNbr[k], col + colNbr[k],
                                        visited, count);
            }
        }
    }
     
    int  largestRegion(vector<vector<int>> v){
        vector<vector<bool>> visited(ROW,vector<bool>(COL));
     
        int result  = INT_MIN;
        for (int i = 0; i < ROW; ++i){
            for (int j = 0; j < COL; ++j){
                if (v[i][j] && !visited[i][j]){
                    int count = 1 ;
                    DFS(v, i, j, visited , count);
     
                    result = max(result , count);
                }
             }
        }
        return result ;
    }
     
    int main(){
    	faster;
    	int ans=0;
    	cin >> ROW >> COL;
     	vector<vector<int>> v(ROW,vector<int>(COL)), tempv(ROW,vector<int>(COL));
     	map<ll,ll> m;
     	rep(i,0,ROW)
     		rep(j,0,COL){
     			cin >> v[i][j];
     			m[v[i][j]]++;
     		}
     	//for(auto it=m.begin(); it!=m.end(); it++)
     	//	cout << it->first << " " << it->second << "\n";
     	set<pair<ll,ll>, comp>s(m.begin(), m.end());
     	//for (auto it = s.begin(); it!=s.end();  ++it)
     		//cout << it->first << " " << it->second << "\n";
     	int ctr=0;
     	for (auto it = s.begin(); it!=s.end();  ++it){
     		for(auto it1 = it; it1!=s.end();  ++it1){
     			ctr++;
            	for(int i=0; i<ROW; i++){
     				for(int j=0; j<COL; j++){
     					if(v[i][j] == it->first || v[i][j] == it1->first)
     						tempv[i][j] = 1;
     					else
     						tempv[i][j] = 0;
     				}
     			}
     			//cout << largestRegion(tempv) << " " << *it << " " << *it1 << "\n";
     			ans = max(ans,largestRegion(tempv));
            }
            if(ctr >= 1000)
            	break;
     	}
        cout << ans;
        return 0;
    }