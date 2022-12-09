// AS 21/10/22

#include <bits/stdc++.h>
using namespace std;

int binary_search(vector <int> &A, int N, int Qi)
{
    int beg = 0;
    int end = N - 1;
    int mid = (beg + end)/2;
    
    while(beg < end)
    {
        if(Qi == A[mid])
            return -1;
        else if(Qi > A[mid])
        {
            beg = mid + 1;
        }
        else if(Qi < A[mid])
        {
            end = mid-1;
        }
        
        mid = (beg + end)/2;
    }
    
    if(Qi == A[mid])
        return -1;
    else
    {
        if(Qi > A[end])
            return end + 1;
        else if(Qi < A[beg])
            return beg;
    }
}

int main() 
{

    int N, Q, Qi;
    long ans = 1;
    cin >> N >> Q;
    
    vector <int> A(N);
	for(int i = 0; i < N; i++)
	    cin >> A[i];
    
    sort(A.begin(), A.end());
    
    for(int i = 0; i < Q; i++)
    {
        cin >> Qi;
        
        int pos = binary_search(A, N, Qi);
        if(pos == -1)
            cout << "0" << endl;
	    else 
	    {
	        if( (N - pos) % 2 == 0)
	            cout<<"POSITIVE"<<endl;
	        else 
	            cout<<"NEGATIVE"<<endl;
	    }
	    
    }
    
	return 0;
}
