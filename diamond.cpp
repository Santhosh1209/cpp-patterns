#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printDiamond(int n) {
        for(int i=1;i<=n;i++)
        {
            for(int s=1;s<=(n-i);s++)
            {
                printf(" ");
            }
            for(int j=1;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for(int i=n;i>=1;i--)
        {
            for(int s=1;s<=(n-i);s++)
            {
                printf(" ");
            }
            for(int j=1;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
};

//{ Driver Code Starts.

int main() {
    
        int n;
        cin >> n;

        Solution s;
        s.printDiamond(n);
    return 0;
}