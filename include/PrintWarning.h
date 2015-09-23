/* PrintWarning
 *
 * Prints to standard output the text placed in the
 * constructor on all calls of print() except the first
 *
 * -Usage-
 * Create object with text. Place object.print() where
 * the text should show on all calls except the first.
 *
 * Input: Text to be printed
 *
 * Output: To standard out (cout) the text entered in the constructor
 *
 * Michael O'Ryan 23/9/2015
 * michael.oryan@gmail.com
 */


/*
Sample code
Prints once the valid inputs
Prints a warning until a valid input is entered


//Setup our warning
PrintWarning warning = PrintWarning("Invalid input try again");

//Set variables
char c = '';
do
{
    //Ask for input
    if(warning.isFirstRun())
    {
        cout << "Enter y/n:";
    }

    //Print warning if not first attempt
    warning.print();

    //Get input
    cin >> c;

} while(c != 'n' || c != 'y');


*/



#ifndef PRINTWARNING_H
#define PRINTWARNING_H
#include <iostream>
#include <string>


class PrintWarning
{
    public:
        PrintWarning(std::string text);
        void print();
        void setText(std::string text);
        std::string getText();
        virtual ~PrintWarning();
        bool isFirstRun();
    protected:
    private:
        void setFirstRun(bool state);
        bool first_run;
        std::string text;
};

#endif // PRINTWARNING_H
