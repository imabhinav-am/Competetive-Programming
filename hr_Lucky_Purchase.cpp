#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, min = 999999999;
    string ans = "-1";
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        string name;
        int value;
        cin >> name >> value;
        int ctr4 = 0, ctr7 = 0;
        int i = value, num, flag = 0;
        while(i>0){
        	num = i%10;
        	if(num != 4 && num !=7){
        		flag = 1;
        		break;
        	}
        	if(num == 4)
        		ctr4++;
        	if(num == 7)
        		ctr7++;
        	i /= 10;
        }
        if(flag == 1)
        	continue;
        else if(ctr4 == ctr7){
        	if(value < min){
        		min = value;
        		ans = name;
        	}
        }
    }
    cout << ans ;
    return 0;
}
