#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, n;
	cin >> t;
	while(t-- > 0){
		cin >> n;
		int val[n][4];
		string pr[n][2];
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j <4; ++j)
			{
				cin >> val[i][j];
			}
			for (int j = 0; j <2; ++j)
			{
				cin >> pr[i][j];
			}
		}
		int flag;
		for (int i = 0; i < n; ++i){
			string ch1 = pr[i][1];
			flag = 0;
			for (int j = 0; j < i; ++j)
			{
				string ch2 = pr[j][1];
				if(pr[i][0] == pr[j][0]){
					if((ch1 == ch2 && ch1 == "random") || (ch1!=ch2 && ch1 != "random" && ch2 != "random")){
						if(val[i][3] == val[j][3]){
							if(val[i][0] <= val[j][2] && val[i][0] >= val[j][1]){
								if (val[j][0] <= val[i][2] && val[j][0] >= val[i][1]){
									cout << j+1 << endl;
									val[j][0] = 999999999;
									val[i][0] = 999999999;
									flag = 1;
									break;
								}
								else
									flag = 0;
							}
							else
									flag = 0;
						}
						else
									flag = 0;
					}
					else
									flag = 0;
				}
				else
									flag = 0;
			}
			if(flag == 0)
				cout << "wait\n";
		}
	}
	return 0;
}
