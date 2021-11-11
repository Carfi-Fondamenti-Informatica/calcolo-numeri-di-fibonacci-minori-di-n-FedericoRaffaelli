#include <iostream>
using namespace std;

int main() {
   int n=0, i=1, m=1, k=0, j=0;
    cin >> n;
    for(int i=1; i<n+2; i++){
        j=m+k;
        m=k;
        k=j;
        if(j<=n){
            cout << j << endl;
        }
    }
   return 0;
}
