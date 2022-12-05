// AS 01/09/22

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, A, count = 0, ans;
        cin >> N;
        
        for(int i = 1; i <= N; i++)
        {
            cin >> A;
            
            if(A <= 7)
                count++;
            
            if(count == 7)
            {
                count++;
                ans = i;
            }
        }
        
        cout << ans << endl;
    }
    
	return 0;
}