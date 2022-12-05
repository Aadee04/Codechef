// AS 14/08/22

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    do
    {
        if(1 <= T && T <= 1000)
        {
            int A, B, C;
            cin >> A >> B >> C;
            if(A>=1 && B>=1 && C>= 1)
                if(A<=1000000 && B<=1000000 && C<=1000000)
                {
                    if(A > B && A > C)
                        if(B > C)
                            cout << B << endl;
                        else
                            cout << C << endl;
                    else if(B > C && B > A)
                        if(C > A)
                            cout << C << endl;
                        else
                            cout << A << endl;
                    else if(C > A && C > B)
                        if(A > B)
                            cout << A << endl;
                        else
                            cout << B << endl;
                    else
                        if(A > B)
                            cout << B << endl;
                        else
                            cout << A << endl;                }
        }
    }while(T--);
    return 0;
}
