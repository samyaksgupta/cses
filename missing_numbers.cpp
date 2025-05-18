#include <iostream>
#include <string>
using namespace std;
//cses #2
int main() {
    long long n;
    long long t;
    long long sum = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        cin >>t;
        sum += t;
    }
    long long total;
    total = n*(n+1)/2;
    long long fin;
    fin = total-sum;
    cout<<fin;
 
 
    return 0;

}
