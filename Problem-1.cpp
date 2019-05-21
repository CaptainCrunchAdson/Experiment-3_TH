#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	int arr[10], count, smallest, largest;
	float SUM = 0;
 
    cout << "Enter 10 integers: ";
    cout << endl;

	for (count = 0; count < 10; count++)
    {
		cin >> arr[count];
	}
    for (count = 0; count < 10; count++)
	{
        SUM = SUM + arr[count];
	}
	largest = arr[0];
    for (count = 0; count < 10; count++)
    {
        if (largest < arr[count])
            largest = arr[count];
    }
    smallest = arr[0];
    for (count = 0; count < 10; count++)
    {
        if (smallest > arr[count])
            smallest = arr[count];
    }
    cout << "\nSmallest encoded integer : " << smallest << endl;
	cout << "Largest encoded integer  : " << largest << endl;
	cout << "Total: " << SUM << endl;
	cout << "Average: " << setprecision(2) << fixed << SUM / 10 << endl;
 
_getch();
return 0;
}
 
