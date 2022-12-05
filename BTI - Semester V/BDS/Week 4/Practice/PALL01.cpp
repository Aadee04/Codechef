// AS 19/09/22

#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, count = 0;
        int num[5];
        bool pal = true;
        cin >> N;
        
        for(int i = N; i > 0; i/=10)
        {
            num[count++] =i%10;
        }
        count --;
            
        
        for(int i = 0; i <= count-i; i++)
        {
            if(num[i] != num[count - i])
            {
                pal = false;
                break;
            }
        }
        
        if(pal)
            cout << "wins" << endl;
        else
            cout << "loses" << endl;
            
    }
    
	return 0;
}
