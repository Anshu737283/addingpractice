#include<iostream>
using namespace std;

int add(int,int);
int main()
{
    int n1,n2;
    cout<<"enter two numbers";
    cin>>n1>>n2;
    cout<<"the sum is"<<add(n1,n2);
    return 0;
}
int add(int a,int b)
{
    int sum=a+b;
    return sum;
}