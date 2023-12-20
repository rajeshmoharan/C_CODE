#include <iostream>
using namespace std;
int fun(int A[],int n){

    for (int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }

    return 0;
}


int main()
{
    int A[] = {2, 3, 4, 5, 6};
    int n = 5;
    fun(A, n);
    for (int x : A)
        cout << x << endl;
    return 0;
}