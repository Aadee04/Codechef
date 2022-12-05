// AS 21/10/22

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int n, dim[2] = {0};
	    cin >> n;
	    vector <int> a(n);
	    
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    
	    sort(a.begin(), a.end());
	    
	    int j = 0;
	    for(int i = n-1; i > 0; i--)
	    {
	        if(a[i] == a[i-1])
	        {
	            dim[j] = a[i];
	            j += 1;
	            i -= 1;
	        }
	        
	        if(j > 1)
	            break;
	    }
	    
	    if(dim[0]*dim[1] != 0 && j > 1)
	        cout << dim[0]*dim[1] << endl;
        else
            cout << -1 << endl;
	}
	return 0;
}