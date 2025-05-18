#include <iostream>
#include <string>
using namespace std;
//cses #1
int main() {
    long long n;
    cin >> n;
    while (true) {
        cout << n << " ";
        if (n==1) break;
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n= n * 3 + 1;
        }
 
 
    }
    return 0;
 
    
}
