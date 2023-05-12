#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                cout << j+1;
                cout << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
        int n;
        cin >> n;
        Solution s;
        s.printTriangle(n);
        
    return 0;
}