#include <iostream>

using namespace std;

int NWD(int a, int b)
{
   if(a!=b)
     return NWD(a>b?a-b:a,b>a?b-a:b);
   return a;
}

int main()
{
    int a, b;
    
    cout<<"Podaj dwie liczby: ";
    cin>>a>>b;
    
    cout<<"NWD("<<a<<","<<b<<") = "<<NWD(a,b)<<endl;
     
    system("pause");
    return 0;
}
