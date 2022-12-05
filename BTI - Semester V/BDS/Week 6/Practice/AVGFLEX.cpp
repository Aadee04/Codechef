// AS 12/10/22

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, boast = 0;
        cin >> N;
        
        int A[N];
        
        for(int i = 0; i < N; i++)
            cin >> A[i];
        
        for(int i = 0; i < N; i++)
        {
            int greater = 0, lesser = 0;
            for(int j = 0; j < N; j++)
            {
                if(j == i)  
                    continue;
                if(A[i] >= A[j])
                    lesser++;
                else
                    greater++;
            }
            
            if(greater <= lesser)
                boast++;
        }
        
        cout << boast << endl;
    }
    
	return 0;
}
