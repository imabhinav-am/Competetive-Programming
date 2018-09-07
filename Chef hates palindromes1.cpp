#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int minLength,temp,a;
char *ans,*tt;

void longestPalSubstr(char *str)
{
    int maxLength = 1;
    int start = 0;
    int len = strlen(str);
    int low, high;
    for (int i = 1; i < len; ++i)
    {
        low = i - 1;
        high = i;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            if (high - low + 1 > maxLength)
            {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            if (high - low + 1 > maxLength)
            {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }
    }
 	if(maxLength < minLength){
 		minLength = maxLength;
 		strcpy(ans,str);
	}
}

void permute(string str)
{
    do {
       strncpy(tt, str.c_str(), sizeof(str));
       longestPalSubstr(tt);
    } while (next_permutation(str.begin(), str.end()));
}

int main(){
	int t,n;
	cin>>t;
	while(t-->0){
		cin>>n>>a;
		char *s = new char[n+1];
		s[n] = '\0';
		char ch = 'a';
		int i;
		if(n/a == 0){
			for(i=0; i<n; i++){
				temp = 1;
			while(temp-->0){
				s[i] = ch;
				i++;
				}
			i--;
			ch++;
			}
			temp = 1;
			cout<<temp<<" "<<s<<endl;
		}
		else if(a == 1){
			for(i=0 ; i<n; i++){
				s[i] = ch;
			}
			temp = n;
			cout<<temp<<" "<<s<<endl;
		}
		else{
	 		for(i=0; i<n - (n%a); i++){
				temp = n/a;
				while(temp-->0){
					s[i] = ch;
					i++;
				}
				i--;
				ch++;
			}
			ch--;
			while(i < n){
				s[i] = ch;
				i++;
			}
			temp = n/a;
			minLength = n;
			ans = new char[n+1];
			tt = new char[n+1];
			tt[n] = '\0';
			ans[n] = '\0';
			permute(s);
			cout<<minLength<<" "<<ans<<endl;
		}
	}
}
