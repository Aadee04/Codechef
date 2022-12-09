// AS 06/10/22

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        string a, b;
        cin >> a >> b;
        
        if((a[0] == 'b' || b[0] == 'b') && (a[1] == 'o' || b[1] == 'o') && (a[2] == 'b' || b[2] == 'b'))
            cout << "yes" << endl;
        else if((a[0] == 'o' || b[0] == 'o') && (a[1] == 'b' || b[1] == 'b') && (a[2] == 'b' || b[2] == 'b'))
            cout << "yes" << endl;
        else if((a[0] == 'b' || b[0] == 'b') && (a[1] == 'b' || b[1] == 'b') && (a[2] == 'o' || b[2]=='o'))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    
    return 0;
}
