#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        char x = 'A';
        for (int i=0; i<n;i++)
        {
            for (int j=0;j<=i;j++)
            {
                cout << x;
                x++;
            }
            x = 'A';
            cout <<"\n";
        }
    }
};

int main() {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    return 0;
}