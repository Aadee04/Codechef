// AS 12/10/22

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long N, W, L;
	cin >> N >> W >> L;
	vector<long long> H(N), R(N);
	
	for(int i = 0; i < N; i++)
	    cin >> H[i] >> R[i];
	
	long long left = 0, right = 1e18, ans, m;
	
	while(left <= right)
	{
	    m = (right + left) / 2;
	    long long sum = 0;
	    bool x = false;
	    
	    for(int i = 0; i < N; i++)
	    {
	        if(H[i] + R[i] * m >= L)
	            sum += H[i] + R[i] * m;
	            
	        if(sum >= W)
	        {
    	        x = true;
    	        break;
	        }
	    }
	    
	    if(x)
	    {
	        ans = m;
	        right = m - 1;
	    }
	    else left = m + 1;
	}
	
	cout << ans;
	return 0;
}