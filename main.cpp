#include <iostream>
#include <fstream>
#include <map>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    ifstream man("ManName_utf.txt");
    ifstream woman("WomanName_utf.txt");

    string name, buff;
    map <string, int> imiona;
    for(;;)
    {
        cout<<"Wpisz ime: ";
        cin>>name;
        cout<<"1  -  imiona meskie\n";
        cout<<"2  -  imiona zenskie\n";

        int a;
        cin>>a;

        switch(a)
        {
        case 1:

            if(!man.is_open())
                cout<<"NOT Plik dziala:"<<endl;
            else
            {
                while(!man.eof())
                {
                    man>>buff;
                    imiona [buff]++;
                }
                man.close();
                if( imiona.count(name))
                {
                    cout<<"------------------------\n";
                    cout<<"Twoja plec - Mezczyzna\n";
                    cout<<"------------------------\n";
                }
                else cout<<"Brak imienia w bazie(\n";

            }
            break;

        case 2:
            if(!woman.is_open())
                cout<<"NOT Plik dziala:"<<endl;
            else
            {
                while(!woman.eof())
                {
                    woman>>buff;
                    imiona [buff]++;

                }
                man.close();
                if( imiona.count(name))
                {
                    cout<<"------------------------\n";
                    cout<<"Twoja plec - Kobieta\n";
                    cout<<"------------------------\n";
                }
                else cout<<"Brak imienia w bazie(\n";
            }

            break;
        }
        system("pause");
        system("cls");
    }
    return 0;
}
















