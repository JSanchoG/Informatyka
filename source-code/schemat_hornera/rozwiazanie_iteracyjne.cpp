#include <iostream>

using namespace std;

int main (){
int n,i;
float x,w;

cout<<"POBIERANIE DANYCH"<<endl;
cout<<"Podaj stopien wielomianu:"<<endl;
cin>>n;

float *a;
a=new float[n+1];

cout<<"Podaj X:"<<endl;
cin>>x;

cout<<"Podaj wspolczynniki:"<<endl;
for (i=0; i<=n; i++)
cin>>a[i];

cout<<endl<<"WYKONYWANIE PROGRAMU"<<endl;

w=a[0];

for (i=1; i<=n; i++)
w=w*x+a[i];

cout<<"Wynik dzialania programu to "<<w<<endl<<endl;

delete [] a;
a=0;

system("pause");

return 0;
}
