/* 
	Author   : Abhinav
   
	Modified : 10-02-2018 03:07:42 PM

*/ 

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define faster  ios_base::sync_with_stdio(false);cin.tie(0);

const ll mod = 1e9+7;


int maxSubArraySum(vi a){
   int max_so_far = a[0];
   int curr_max = a[0];
 
   for (int i = 1; i < a.size(); i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

int kadane(int* arr, int* start, int* finish, int n){
    int sum = 0, maxSum = INT_MIN, i;
 
   	*finish = -1;
 
    int local_start = 0;
 
    for (i = 0; i < n; ++i){
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
            local_start = i+1;
        }
        else if (sum > maxSum)
        {
            maxSum = sum;
            *start = local_start;
            *finish = i;
        }
    }
 
    if (*finish != -1)
        return maxSum;
 
    maxSum = arr[0];
    *start = *finish = 0;
 
    for (i = 1; i < n; i++){
        if (arr[i] > maxSum)
        {
            maxSum = arr[i];
            *start = *finish = i;
        }
    }
    return maxSum;
}
 
int findMaxSum(vector<vi> M,int row,int col){//int M[][col]
    int maxSum = INT_MIN, finalLeft, finalRight, finalTop, finalBottom;
 
    int left, right, i;
    int temp[row], sum, start, finish;
 
    for (left = 0; left < col; ++left)
    {
        memset(temp, 0, sizeof(temp));
 
        for (right = left; right < col; ++right)
        {
            for (i = 0; i < row; ++i)
                temp[i] += M[i][right];
 
            sum = kadane(temp, &start, &finish, row);
 
            if (sum > maxSum){
                maxSum = sum;
                finalLeft = left;
                finalRight = right;
                finalTop = start;
                finalBottom = finish;
            }
        }
    }
 	return maxSum;
}

int main(){
	faster;
	int row,col, k,temp,max_sum = INT_MIN,max_pos=0,sum,ctr=0,min_e_p=INT_MAX,min_e=INT_MAX;
	cin >> row >> col >> k;
	vector<vi> v_r(row,vi(col,0)),v_c(col,vi(row,0));
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cin >> temp;
			if(temp > 0){
				max_pos += temp;
				ctr++;
				if(temp < min_e_p)
					min_e_p = temp;
			}
			if(temp < min_e)
					min_e = temp;
			v_r[i][j] = temp;
			v_c[j][i] = temp;
		}
	}

	sum = findMaxSum(v_r,row,col);

	if(ctr == row*col){
		cout << sum - min_e_p << "\n";
		exit(0);
	}

	for(int i=1; i<=k; i++){
		for(int l=0; l<row; l++){
			int start=0;
			int finish = i;
			for(int m=0; m<col && finish<col+1; m++){
				vector<vi> v_t = v_r;
				int flag = 0;
				for(int p=start; p<finish; p++){
					if(v_t[l][p] > 0)
						break;
					v_t[l][p] = 0;
					flag = 1;
				}
				start++;
				finish++;
				if(flag == 1)
					temp = findMaxSum(v_t,row,col);
				if(temp > max_sum)
					max_sum = temp;
				if(max_sum == max_pos){
					cout << max_sum << "\n";
					exit(0);
				}
			}
		}
	}

	for(int i=1; i<=k; i++){
		for(int l=0; l<col; l++){
			int start=0;
			int finish = i;
			for(int m=0; m<row && finish<row+1; m++){
				vector<vi> v_t = v_c;
				int flag = 0;
				for(int p=start; p<finish; p++){
					if(v_t[l][p] > 0)
						break;
					v_t[l][p] = 0;
					flag = 1;
				}
				start++;
				finish++;
				if(flag == 1)
					temp = findMaxSum(v_t,col,row);
				if(temp > max_sum)
					max_sum = temp;
				if(max_sum == max_pos){
					cout << max_sum << "\n";
					exit(0);
				}
			}
		}
	}
	cout << max_sum << "\n";
	return 0;
}