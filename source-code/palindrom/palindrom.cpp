#include<iostream>
using namespace std;
#include<string>
 
int main()
{
int i,j;
string wyraz;
 
cout << "Podaj wyraz, ktory chcesz sprawdzic: ";
cin >> wyraz;
// i - pokazuje na kolejne litery wyrazu pocz�wszy od pocz�tku, j - zaczyna od ko�ca
// funkcja length() wywo�ana na obiekcie string zwraca jego d�ugo��
for (i = 0, j = wyraz.length()-1; i < j; i++, j--)
{
if (wyraz[i] != wyraz[j])
break;
}
if (i < j)
cout << "Podany wyraz nie jest palindromem" << endl;
else
cout << "Podany wyraz jest palindromem" << endl;
 
return 0;
}
