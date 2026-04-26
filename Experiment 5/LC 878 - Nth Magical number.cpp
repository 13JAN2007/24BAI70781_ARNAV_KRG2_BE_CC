class Solution {
public:
    int gcd(int a, int b){
        while(a>0&&b>0){
            if(a>b) a=a%b;
            else b=b%a;
        }
        if(a==0) return b;
        else return a;
    }
        
    
    int nthMagicalNumber(int n, int a, int b) {
        long long l = min(a, b) ;
        long long high = n*l;
        long long mid, x;
        while(l<high) {
           mid = (l+high)/2;
           x = mid/a + mid/b -mid/((a * b) / gcd(a, b));
            if(x<n){
                l = mid+1;
            }
            else high = mid;
        }
        int mod = 1e9 + 7 ;
    return l%mod;
        
    
    }
};