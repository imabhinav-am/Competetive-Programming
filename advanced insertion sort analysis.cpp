#include<iostream>
#include<vector>

using namespace std;

long long int ctr;

void Merge(long long int A[],long long int l,long long int mid ,long long int r){
    long long int i, j, k;
    long long int n1 = mid - l + 1;
    long long int n2 =  r - mid;
 
    long long int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = A[l + i];
    for (j = 0; j < n2; j++)
        R[j] = A[mid + 1+ j];
 	i=0;
 	j=0;
 	k=l;
 	while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void Merge_sort(long long int A[],long long int l,long long int r){
	if(r<=l)
		return;
	else{
		long long int mid = l+(r-1)/2;
		Merge_sort(A,l,mid);
		Merge_sort(A,mid+1,r);
		Merge(A,l,mid,r);
	}
}

int main()
{
	int n;
	cin>>n;
	long long int N,num,A[100000];
	while(n-->0){
		cin>>N;
		ctr = 0;
		for(long long int i=0; i<N ; i++){
			cin>>A[i];
		}
		Merge_sort(A,0,N-1);
		cout<<endl;
		for(long long int i=0; i<N ; i++){
			cout<<A[i]<<" ";
		}
		cout<<endl;
		cout<<ctr<<endl;
	}
	return 0;	
}
