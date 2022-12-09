// AS 21/10/22

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, temp = 0;
        cin >> N;
        
        int A[N], B[N] = {0};
        for(int i = 0; i < N; i++)
            cin >> A[i];
            
        for(int i = 0; i < N-1; i++)
        {
            if(A[i] != A[i+1])
            {
                for(int j = temp; j <= i; j++)
                    B[j] = N-i-1;
                
                temp = i+1;
            }
        }
        
        for(int i = 0; i < N; i++)
            cout << B[i] << " ";
        cout << endl;
    }
    
	return 0;
}
