#include <iostream>

void sortArray(int array[], int size);

int main()
{
    int numbers[] = { 2,7,8,4,3,5,1,6,10,9 };
    int size = sizeof(numbers) / sizeof(int);

    sortArray(numbers, size);

    // Display the numbers
    for (int number : numbers) 
    {
        std::cout << number << " ";
    }

    return 0;
}
void sortArray(int array[], int size) 
{
    int temp;

    // Outer loop - Runs n-1 passes; each pass pushes the largest unsorted element to the end
    for (int i = 0; i < size - 1; i++)
    {
        // Inner Loop - Compares and swaps adjacent elements if out of order
        for (int j = 0; j < size - i - 1; j++)
        {
            // Check if the element on the left is greater
            if (array[j] > array[j + 1]) 
            {
                // Swap values - Put the larger number one space further to the right (Ascending)

                    // Stores the left (Larger) value into temp storage
                    temp = array[j];

                    // Shift the smaller value left
                    array[j] = array[j + 1];

                    // Shift the larger value right
                    array[j + 1] = temp;
            }
        }
    }
}

