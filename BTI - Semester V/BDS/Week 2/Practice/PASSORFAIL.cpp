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
            int N, X, P;
            cin >> N >> X >> P;
            if(1 <= N && N <= 100 && 0 <= X && X <= N && 0 <= P && P <= N*3)
               {
                   if(P <= 3*X - (N-X))
                       cout << "PASS" << endl;
                   else
                       cout << "FAIL" << endl;
               }
        }
    }while(T--);
    return 0;
}
