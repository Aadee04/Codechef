// AS 01/09/22

#include <iostream>
using namespace std;

int main() 
{
    int N, M, K, T, count = 0;
    cin >> N >> M >> K;
    
    while(N--)
    {
        int min = 0;
        bool flag = true;
    
        for(int i = 0; i <= K; i++)
        {
            cin >> T;
            
            if(i != K)
                min += T;
            else
                if(T > 10)
                    flag = false;
        }
        
        if(min < M)
            flag = false;
        
        if(flag == false)
            continue;
        
        count++;
    }
    
    cout << count << endl;
	return 0;
}
