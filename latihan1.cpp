#include <iostream>
using namespace std;
int main()
{
int A, B, C, terbesar;
cout<<"Masukkan bilangan 1 : ";
 cin>>A;
cout<<"Masukkan bilangan 2 : ";
 cin>>B;
cout<<"Masukkan bilangan 3 : ";
 cin>>C;

{
if(A > B)
terbesar = A;

else
terbesar = B;

if(C > terbesar)
terbesar = C;

cout<<endl;
cout<<"Nilai Terbesar = "<<terbesar;cout<<endl;}

    return 0;
}
