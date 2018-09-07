#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> genes(n);
    for(int genes_i = 0; genes_i < n; genes_i++){
       cin >> genes[genes_i];
    }
    vector<int> health(n);
    for(int health_i = 0; health_i < n; health_i++){
       cin >> health[health_i];
    }
    int s;
	long long int min=health[0],max=health[0];
    cin >> s;
    for(int a0 = 0; a0 < s; a0++){
        int first;
        int last;
        string d;
        int flag=1;
		long long int ctr=0;
        cin >> first >> last >> d;
        for(int i=first;i<=last;i++){
				if(genes[i].size()>1){
					for(int j=0;j<d.size();j++){
						if(genes[i].at(0)==d[j])
						{	
							for(int x=1,y=j+1;x<genes[i].size();x++,y++){
								if(genes[i].at(x)!=d[y]){
									flag=0;
									break;
								}
							}
							if(flag!=0){
								ctr+=health[i];
							}
						}
					}
				}
				else{
					for(int l=0;l<d.size();l++){
						if(genes[i].at(0)==d[l])
						{
							ctr+=health[i];
						}
					}
				}
				flag=1;
			}
			if(ctr<=min)
			min=ctr;
			else if(ctr>=max)
			max=ctr;
    }
    cout<<min<<" "<<max;
    return 0;
}

