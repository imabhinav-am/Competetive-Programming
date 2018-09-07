#include<iostream>
#include<cstring>

using namespace std;

int check_anagram(char sub1[], char sub2[])
{
   int first[26] = {0}, second[26] = {0};
   for(int c=0;sub1[c]!='\0';c++) {
      first[sub1[c]-'a']++;
   }
   for(int c=0;sub2[c]!='\0';c++){
      second[sub2[c]-'a']++;
   }

   for (int c = 0; c < 26; c++) {
      if (first[c] != second[c])
         return 0;
   }
   return 1;
}

int main() {
    int t;
    cin>>t;
    while (t>0) {
        char s[100];
        char sub1[100] = {0};
        char sub2[100] = {0};
        cin>>s;

        int count = 0;
        for (int len = 1; len < strlen(s); len++) {
            memset(sub1, 0, len);
            for (int i = 0; i < strlen(s) - len; i++) {
                strncpy(sub1, &s[i], len);
                memset(sub2, 0, len);
                for (int j = i + 1; j < strlen(s) - len + 1; j++) {
                    strncpy(sub2, &s[j], len);
                    if (check_anagram(sub1, sub2) == 1) {
                        count++;
                    }  
                }
            }     
        }
       cout<<count<<endl;
       t--;
}

return 0;
}
