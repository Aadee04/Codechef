// AS 16/08/22

#include <iostream>
using namespace std;

int main() 
{
    int L, B;
    cin >> L >> B;
    
    if(L*B > 2*(L+B))
    {
        cout << "Area\n" << L*B << endl;
    }
    else if(L*B < 2*(L+B))
        cout << "Peri\n" << 2*(L+B) << endl;
    else
        cout << "Eq\n" << L*B << endl;
}
