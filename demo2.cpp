#include <bits/stdc++.h>

using namespace std;
string reverse(string str){
    string rev = str;
    reverse(rev.begin(), rev.end());
    return rev;
}
   int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
		string s;
        cin >> s;
		int freq[26]={0};
		for(int i=0;i<26;i++)
		  freq[s[i]-'a']++;
		int odd=0;
		int l=s.length();
		for(int i=0;i<l;i++)
		{
		  if(freq[i]%2!=0)
		    odd++;
	    }
		bool flag;
	   if((l % 2 == 1 && odd == 1 ) || (l %2 == 0 && odd == 0))
		  flag=1;
		else 
		  flag=0;
		 
		//cout<<"flag="<<flag<<endl;  
		if(flag==1)
		{
          string half = "";
          char oddC;
          for (int i = 0; i < 26; i++)
          {
            if(freq[i] % 2 == 1)
              oddC = i + 'a';
 
           half += string(freq[i] / 2, i + 'a');
          }
		  string palin;
		  palin = half;
        if (l % 2 == 1)
            palin += oddC;
        palin += reverse(half);
		//cout<<"palin="<<palin<<endl;
		for(int x=0;x<l;x++)
		{
		  for(int y=0;y<l;y++)
		  {
		    if(palin[x]==s[y])
			{
			  s[y]=-1;
			  cout<<y+1<<" ";
			  break;
			}
		  }
		 }
       }
	  else 
		  cout<<"-1";
	  cout<<endl;	 	   
    }
    return 0;
}

    

