#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Wymien liczby, litery lub znaki do posortowania: " << endl;
	string abc;
	cin >> abc;
    string litery = abc;

    for (int i=0; i<litery.length()-1; i++)
    {
        for (int j=0; j<litery.length()-1; j++)
        {
            if (litery[j]>litery[j+1])
            {
                swap(litery[j], litery[j+1]);
            }
        }
    }

    cout << litery << endl << endl;

    system("PAUSE");
    return 0;
}
