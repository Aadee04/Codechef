// AS 12/08/22

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int T;
	cin >> T;
	
	while(T)
	{
	    if(1 <= T && T <= 2500)
	    {
	        int A, B;
	        cin >> A >> B;
	        if(1 <= A && A <= 50 && 1 <= B && B <= 50)
	        {
	            if(A == B)
	                cout << "YES" << endl;
	                
	            else if(A > B)
	            {
	                if(A%B == 0)
	                {
	                    if(ceil(log2(A/B)) == floor(log2(A/B)))
	                        cout << "YES" << endl;
	                    else
	                        cout << "NO" << endl;
	                }
	                else
	                    cout << "NO" << endl;
	            }
	            
	            else
	            {
	                if(B%A == 0)
	                {
	                    if(ceil(log2(B/A)) == floor(log2(B/A)))
	                        cout << "YES" << endl;
	                    else
	                        cout << "NO" << endl;
	                }
	                else
	                    cout << "NO" << endl;
	            }
	            
	        }
	        
	    }
	    
	    T--;
	}
	return 0;
}
