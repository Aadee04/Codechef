// AS 07/12/22

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
        int N, X, C, max = 0;
        cin >> N >> X >> C;
        
        vector<int> A(N);
        
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
            
            if(X-A[i] > C)
            {
                A[i] = X;
                max -= C;
            }
                
            max += A[i];
        }
        
        cout << max << endl;
        
	}
	return 0;
}
