#include <iostream>
using namespace std;
int sumx(long long n) {
    int s;
    s=0;
    while (n>=10){
        s=s+n%10;
        n=int(n/10);
    return s+n;    
    }
}

int main(){
   long long n;
    cin >> n;
    long long x[n];
    for (int i=0; i<n;i++){
       cin >> x[i] ;        
    }
     for (int i=0; i<n;i++){
       cout << sumx(x[i]) ;        
    }
}
