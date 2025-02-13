#include <iostream>

using namespace std;

int ArraySum(int arr[], int integerArray) 
{
    if (integerArray < 0)
    {
        return 0;
    }
    else
    {
        return (arr[integerArray] + ArraySum(arr, integerArray - 1));
    }
}

int main() 
{
    // Declare variables
    int arraySize[100];
    int sumTotal = 0;
    int integerArray;

    // Allow user to input array size
    cout << "Enter the array size: ";
    cin >> integerArray;
    // Prompt user to input each integer
    cout << "Enter " << integerArray << " total integers. " << endl; // include a input prompt for reading array if needed
    for (int i = 0; i < integerArray; i++)
    {
        // Use loop to prompt user for each number until array size met
        cout << "Please enter integer: ";
        cin >> arraySize[i];
    }
    // Use function to use recursive math
    sumTotal = ArraySum(arraySize, integerArray - 1);
    // Prompt message of total
    cout << "Sum of Array is: " << sumTotal << endl;
    return 0;
}
