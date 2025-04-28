#include <iostream> // Include the input/output stream library
using namespace std;

int main()
{
    int Number; // Declare an integer variable to store the user's input

    cout << "Ingrese un numero" << endl; // Prompt the user to enter a number (in Spanish)
    cin >> Number; // Read the number from the user and store it in 'Number'

    // Check if the number is positive
    if (Number >= 1) {
        cout << "The number (" << Number << ") is positive" << endl;
    }
    // Check if the number is negative
    else if (Number < 0) {
        cout << "The number (" << Number << ") is negative" << endl;
    }
    // If the number is not positive or negative, it must be zero
    else {
        cout << "The number (" << Number << ") is zero" << endl;
    }
   
    return 0; // End of the program
}
