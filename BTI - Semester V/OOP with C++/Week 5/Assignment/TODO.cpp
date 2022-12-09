// AS 24/09/22

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, tasks = 0, Ai, i, j;
        cin >> N;
         
        for(i = 1; i <= N; i++)
        {
            cin >> Ai;
            if(Ai <= 7)
                tasks++;
            
            if(tasks == 7)
            {
                j = i;
                tasks--;
            }
                
        }
        
        while(i++ <= N)
            cin >> Ai;
            
        cout << j << endl;
        
        
    }
    
	return 0;
}
