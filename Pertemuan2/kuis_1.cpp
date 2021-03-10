//Buatlah sebuah contoh Array menggunakan C++.

#include <iostream>

using namespace std;

int i, n, data[100];
float xbar, jum;

int main()
{
    
    cout<<"Banyaknya Data = ";
    cin>>n;
    cout<<endl;
    
    for ( i=0; i<n; i++ )
    {
           cout<<"Data ke-"<<i+1<<" = ";
           cin>>data[i];
           jum += data[i];
    }
        
    xbar=jum/n;
        
    cout<<endl;
    cout<<"Nilai Total = "<<jum<<endl;
    cout<<"Nilai Rata-rata = "<<xbar<<endl;
    cout<<endl;
}
