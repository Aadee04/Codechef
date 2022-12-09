// AS 02/08/22

#include <iostream>
using namespace std;

int main() 
{
	int T, N, i;
	bool flag;
	cin >> T;
	while(T--)
	{
        cin >> N;
        flag = false;
        if(N > 1 && N <= 100000)
        {
            for(i = 2; i < N; i++)
                if(N%i == 0)
                {
                    flag = true;
                    break;
                }
            
            if(flag == false)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
	    }
	    else
    	    cout << "no" << endl;
	}
	return 0;
}
