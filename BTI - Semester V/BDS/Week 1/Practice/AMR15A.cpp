// AS 01/08/22

#include <iostream>
using namespace std;

int main() 
{
	int N;
	cin >> N;
	int A[N], odd = 0, even = 0;
	
	if(N >= 1 && N <= 100)
	{
	    for(int i = 1; i <= N; i++)
	    {
	        cin >> A[N];
	        
	        if(A[N] % 2 == 0)
	            even++;
	        else
	            odd++;
	       
	    }
	    
	    if(even > odd)
	        cout << "READY FOR BATTLE";
	    else
	        cout << "NOT READY";
	        
	}
	
	return 0;
}
