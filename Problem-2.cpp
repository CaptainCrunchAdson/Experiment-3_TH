#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	const int DAY = 7;
	const int PROV = 3;
	char province[3][3] = {"A", "B", "C"};
	int temp[PROV] [DAY];

    cout << "Enter the recorded temperature of Province A, B and C: \n" << endl;

    for (int x = 0; x < PROV; ++x)
    {
        for(int y = 0; y < DAY; ++y)
        {
            cout << "Province " << province[x] << ", " << "Day " << y + 1 << " : ";
            cin >> temp[x][y];
        }
    }

    cout << endl;
	cout << endl;
	cout << "Displaying Values:";
	cout << endl;

    for (int x = 0; x < PROV; ++x)
    {
        for(int y = 0; y < DAY; ++y)
        {
            cout << "Province " << province[x] << "," << "Day " << y + 1 << " = " << temp[x][y] << endl;
        }
    }

cout << endl;
system ("pause");
_getch();
return 0;
}