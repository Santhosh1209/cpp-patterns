#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printTriangle(int n) {
        for (int i  = 0; i < n; i++)
        {
            for(int j = 0; j < n - i; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j <= (i*2) ; j++)
            {
                cout << "*";
            }
            cout << "\n";
            
        }
    }
};

int main() {
        int n;
        cin >> n;
        Solution sol;
        sol.printTriangle(n);
    return 0;
}