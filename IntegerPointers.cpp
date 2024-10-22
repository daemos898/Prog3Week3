//Import necessary utility
#include <iostream>
using namespace std;

int main(){

	//Create the three integers and prompt user to input the three integers
    int value1, value2, value3;
    cout <<"Enter three integer values:";
    cin >> value1 >> value2 >> value3;

    //Create the integer pointers for each user input value
    int* pointer1 = new int(value1);
    int* pointer2 = new int(value2);
    int* pointer3 = new int(value3);

    //Display the contents of the variables to the user
    cout << "Contents of variables:\n";
    cout << "Value 1: " << value1 << endl;
    cout << "Value 2: " << value2 << endl;
    cout << "Value 3: " << value3 << endl;

    //Display the contents of the pointers to the user
    cout << "Contents of pointers:\n";
    cout << "Pointer 1: " << *pointer1 << endl;
    cout << "Pointer 2: " << *pointer2 << endl;
    cout << "Pointer 3: " << *pointer3 << endl;

    //Delete the pointers to ensure proper memory management for the system
    delete pointer1;
    delete pointer2;
    delete pointer3;
    return 0;
}
