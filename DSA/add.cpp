#include<iostream>
using namespace std;

int swap(int *x, int *y){
    cout<<"The x value "<<*x<<endl;
    cout<<*y<<endl;
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}
int main(){
    int a = 10;
    int b = 20;
    swap(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
