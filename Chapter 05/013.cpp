#include <iostream>
using namespace std;
int main()
{
    const int SENTINEL_VALUE = -99;
    int num,
        min,
        max;

    cout << "This program will display the greatest\n"
         << "and the least values.\n"
         << "Enter a number to begin and enter -99\n"
         << "to quit the program."
         << "Enter a value: ";
    cin >> num; // Error 

    min = max = num;

    while (num != -99)
    {
        if (num < min)
            min = num;

        if (num > max)
            max = num;

        cout << "Enter a value: ";
        cin >> num;
        
    }
    
    cout << "Smallest number is: " << min << endl;
    cout << "Largest number is: "  << max  << endl;

    return 0;
}