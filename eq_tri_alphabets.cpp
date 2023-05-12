#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printTriangle(int n) {
        char x = 'A';
        for (int i=0; i<n;i++)
        {
            for (int k=0;k<n-i;k++)
            {
                cout <<" ";
            }
            for (int j=0;j<=i;j++)
            {
                cout << x;
                x++;
            }
            x=x-2;
            for (int l=0;l<i;l++)
            {
                cout << x;
                x--;
            }
            x = 'A';
            cout <<"\n";
        }
    }
};

//{ Driver Code Starts.

int main() {
        int n;
        cin >> n;
        Solution ob;
        ob.printTriangle(n);
    return 0;
}
// } Driver Code Ends