// This program prompts the user to enter two primary colors (red, yellow, or blue) 
// and then outputs the resulting secondary color when those two colors are mixed. 
// If the user enters the same primary color twice, it simply returns that primary color. 
// If the input does not consist of two valid primary colors, it informs the user of the invalid input.

#include <iostream>
#include<string>

using namespace std;

int main()
{
    const string RED = "red";
    const string BLUE = "blue";
    const string YELLOW = "yellow";

    string primary1, primary2;

    cout << "Enter two primary colors(red, yellow, or blue), all lowercase: ";
    cin >> primary1 >> primary2;

    if (primary1 == primary2)
        cout << "You get the primary color: " << primary1 << endl;
    else if ((primary1 == RED && primary2 == BLUE) || (primary1 == BLUE && primary2 == RED))
        cout << "The secondary color is purple" << endl;
    else if ((primary1 == RED and primary2 == YELLOW) || (primary1 == YELLOW && primary2 == RED))
        cout << "The secondary color is orange" << endl;
    else if ((primary1 == BLUE && primary2 == YELLOW) || (primary1 == YELLOW && primary2 == BLUE))
        cout << "The secondary color is green" << endl;
    else
        cout << "You did not enter two primary colors, try again." << endl;

    return 0;

}