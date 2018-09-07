#include <bits/stdc++.h>

using namespace std;

char s[1000];
int n;
void delete_val(char s[],int pos)
{
    for(int i=pos;i<n;i++)
    {
        s[i]=s[i+1];
    }
    n--;
}

void super_reduced_string(char s[]){
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            delete_val(s,i+1);
            delete_val(s,i);
            i=-1;
        }
    }
    if(n==0)
    cout<<"Empty String";
    else
    for(int i=0;i<n;i++)
    cout<<s[i];
}

int main() {
    cin >> s;
    n=strlen(s);
    super_reduced_string(s);
    return 0;
}

