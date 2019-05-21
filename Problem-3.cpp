#include <iostream>
#include <conio.h>

using namespace std;
  
int main()
{
    char input[100], output[100];
	int elements, x;
      
    cout << "Enter number of elements in array: ";
    cin >> elements;

	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "Number of Elements in array: " << elements << endl; 
    cout << "\nEnter " << elements << " characters: ";
      
    for(x = 0; x < elements; x++)
	{
        cin >> input[x];
    }
      
    for(x = 0; x < elements; x++)
	{
        output[x] = input[elements-x-1];
    }    
    
	cout << " " << endl;

	cout << "Reversed Array: \n";
    for(x = 0; x < elements; x++)
	{
        cout << output[x] << " ";
    }

_getch();
return 0;
}