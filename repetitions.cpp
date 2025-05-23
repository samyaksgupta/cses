#include <iostream>
#include <string>
using namespace std;
//cses #3
int main() {
    string n;
    cin >> n;
    int ans = 1, temp = 1;
    for (int i = 1 ; i < n.size() ; i++) {
        if (n[i] == n[i-1]) {
            ++temp;
        } else {
            ans = max(ans, temp);
            temp = 1;
 
        }
 
    }
    ans = max(ans, temp);
    cout << ans;
    return 0;
 
    
}

