/* 
	Author   : Abhinav
   
	Modified : 15-12-2017 06:09:27 PM
*/ 
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
 
const ll mod = 1e9;

template<ull mod>
class fast_fact {
public:
  ull m( ull a, ull b ) const {
    ull r = (a*b)%mod;
    return r;
  }
  template<class...Ts>
  ull m( ull a, ull b, Ts...ts ) const {
    return m( m( a, b ), ts... );
  }
  // calculates x!!, ie 1*3*5*7*...
  ull double_fact( ull x ) const {
    ull ret = 1;
    for (ull i = 3; i < x; i+=2) {
      ret = m(i,ret);
    }
    return ret;
  }
  // calculate 2^2^n for n=0...bits in ull
  // a pointer to this is stored statically to make calculating
  // 2^k faster:
  ull const* get_pows() const {
    static ull retval[ sizeof(ull)*8 ] = {2%mod};
    for (int i = 1; i < sizeof(ull)*8; ++i) {
      retval[i] = m(retval[i-1],retval[i-1]);
    }
    return retval;
  }
  // calculate 2^x.  We decompose x into bits
  // and multiply together the 2^2^i for each bit i
  // that is set in x:
  ull pow_2( ull x ) const {
    static ull const* pows = get_pows();
    ull retval = 1;
    for (int i = 0; x; ++i, (x=x/2)){
      if (x&1) retval = m(retval, pows[i]);
    }
    return retval;
  }
  // the actual calculation:
  ull operator ()( ull x ) const {
    x = x%mod;
    if (x==0) return 1;
    ull result = 1;
     // odd case:
    if (x&1) result = m( (*this)(x-1), x );
    else result = m( double_fact(x), pow_2(x/2), (*this)(x/2) );
    return result%mod;
  }
};

ull factorial_mod( ull x ) {
  return fast_fact<mod>()(x);
}

ull getMid(ull s, ull e) {  return s + (e -s)/2;  }
 
ull constructSTUtil(vector<ull> arr, ull ss, ull se, ull *st, ull si){
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    ull mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}

ull *constructST(vector<ull> arr, ull n){
    ull x = (ull)(ceil(log2(n))); 
 
    
    ull max_size = 2*(ull)pow(2, x) - 1; 
 
    ull *st = new ull[max_size];
 
    constructSTUtil(arr, 0, n-1, st, 0);
 
    return st;
}

ull getSumUtil(ull *st, ull ss, ull se, ull qs, ull qe, ull si){
    if (qs <= ss && qe >= se)
        return st[si];

    if (se < qs || ss > qe)
        return 0;
    ull mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}

ull getSum(ull *st, ull n, ull qs, ull qe){
    if (qs < 0 || qe > n-1 || qs > qe){
        printf("Invalid Input");
        return -1;
    }
 
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}

void updateValueUtil(ull *st, ull ss, ull se, ull i, ull diff, ull si)
{
    // Base Case: If the input index lies outside the range of 
    // this segment
    if (i < ss || i > se)
        return;
 
    // If the input index is in range of this node, then update 
    // the value of the node and its children
    st[si] = st[si] + diff;
    if (se != ss)
    {
        ull mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);
    }
}
 
// The function to update a value in input array and segment tree.
// It uses updateValueUtil() to update the value in segment tree
void updateValue(vector <ull> &arr, ull *st, ull n, ull i, ull new_val,vector <ull> v)
{
    // Check for erroneous input index
    if (i < 0 || i > n-1)
    {
        printf("Invalid Input");
        return;
    }
 
    // Get the difference between new value and old value
    ull diff = factorial_mod(new_val) - factorial_mod(v[i]);
 
    // Update the value in array
    arr[i] = factorial_mod(new_val);
 
    // Update the values of nodes in segment tree
    updateValueUtil(st, 0, n-1, i, diff, 0);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ull n,t,temp,a,l,r,sum=0;
    cin >> n >> t;
    vector <ull> arr(n),v(n);
    for(ull i=0; i<n; i++){
        cin >> temp;
        arr[i] = factorial_mod(temp);
        v[i] = temp;
    }
    ull num = arr.size();
    ull *st = constructST(arr, num);
    while(t-- > 0){
        cin >> a >> l >> r;
        sum = 0;
        if(a == 1){
            for(ull i=l-1; i<r; i++){
                v[i]+=1;    
            }
        }
        else if(a == 2){
            for(ull i=l-1; i<r; i++){
                sum += factorial_mod(v[i]);    
            }
            cout << sum%mod << "\n";        
        }
        else if(a==3){
            v[l-1] = r;
        }
    }
}

