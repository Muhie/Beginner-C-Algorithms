#include <iostream>
using namespace std; // this means that you do not need to start the line with std
int main(int argc, char** argv)
{
    unsigned int n = 0;
    cout << "Hello this is a test of the bubble sort in c++! please enter the size of the unordered array: ";
    cin >> n;
    cout << "You have chosen for the array to be: " << n << "\n";
    int* bubble_array = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Please enter the: " << i+1 << " item in the list ";
        int x = 0;
        cin >> x;
        bubble_array[i] = x;
    } //getting all user inputs! bubble sort starts here!
    int temp = 0;
    bool swapped = 1;
    while (swapped != 0) {
        swapped = 0;
        for (int i = 0; i < n; i++) {
            if (bubble_array[i]  < bubble_array[i + 1]) {
                temp = bubble_array[i + 1];
                bubble_array[i + 1] = bubble_array[i];
                bubble_array[i] = temp;
                swapped = 1;
            }
        }
    }
    cout << "The sorted array is: "; //outputting the sorted array
    for (int i = 0; i < n; i++) {
        if (i+1 == n) {
            cout << bubble_array[i];
        }
        else {
            cout << bubble_array[i] << ",";
        }
    }
