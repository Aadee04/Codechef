// AS 21/10/22

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int M, x, y, Mi, count = 0;
        int safe[101] = {0};
        cin >> M >> x >> y;
        
        int search = x*y;
        
        for(int i = 0; i < M; i++)
        {
            cin >> Mi;
            
            for(int j = Mi-search; j <= Mi+search; j++)
            {
                if(j <= 0 || j >= 101)
                    continue;
                
                safe[j] = 1;
            }
        }
        
        for(int i = 1; i <= 100; i++)
            if(safe[i] == 0)
                count++;
        
        cout << count << endl;
    }
    
	return 0;
}
