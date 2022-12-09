// AS 21/10/22

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int T;
	cin >> T;
	
	while(T--)
	{
	    long N;
	    cin >> N;
	    int A[N];
	    
	    for (int i = 0; i < N; i++) 
	        cin >> A[i];
	    
	    cout << N*(N-1)/2 << endl;
	}
	
	return 0;
}