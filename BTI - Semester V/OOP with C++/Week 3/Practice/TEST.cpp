// AS 26/08/22	

#include <iostream>
using namespace std;

int main() 
{
    int num;
    
    while(true)
    {
        cin >> num;
        
        if(num == 42)
            break;
        else 
            cout << num << endl;
        
    }
    
	return 0;
}
