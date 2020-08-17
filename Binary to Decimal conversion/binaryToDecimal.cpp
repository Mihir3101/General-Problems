#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int binaryNo;
    cout<<"Enter a binary no : ";
    cin>>binaryNo;
    cout<<"Decimal conversion of binary no "<<binaryNo<<" is ";
    int deci=0;
    for(int i=0;binaryNo!=0;i++)
    {
        deci+= (pow(2,i)*(binaryNo%10));
        binaryNo/=10;
    }
    cout<<deci;
    

    return 0;
}
