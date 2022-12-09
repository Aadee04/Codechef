// AS 17/08/22

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int N, min = -1;
	    cin >> N;
	    int S[N];
	    for(int i = 0; i < N; i++)
	        cin >> S[i];
	        
	    char V[N];
	    for(int i = 0; i < N; i++)
	    {
	        cin >> V[i];
	        if(V[i] == '0' && min == -1)
	        {
	            min = S[i];
	        }
	        else if(V[i] == '0')
	            if(min > S[i])
	                min = S[i];
	    }
	    
	    cout << min << endl;
	    
	}
	return 0;
}
