#include <iostream>
#include <string>
#include <stdio.h>
using namespace std; // just so we dont have to use std:: all the time
                     // it makes it look nicer

int main()  // just to start us off
{ 

// Level 1

    char input = 'y';

cout << "1. Are there similar product’s " << 
        "companies less than three?"   << endl;
cin  >> input ;
    switch (input) 
    {
        case 'y': 
        case 'Y':

        cout << endl;
        cout << "*************************" << endl;
        cout << "Answer the next question." << endl;
        cout << "*************************" << endl;
        break;

        default: 
        cout << endl;
        cout << "***************" << endl;
        cout << "** Don't Buy **" << endl; 
        cout << "***************" << endl;
        return 0;
    }
cout << "2. Does this product target "  <<
        "for all generations?"       << endl;
cin  >> input ;

    switch (input) 
    {
        case 'y':
        case 'Y':

        cout << endl;        
        cout << "*************************" << endl;
        cout << "Answer the next question." << endl;
        cout << "*************************" << endl;
        break;

        default:
        cout << endl;
        cout << "***************" << endl;
        cout << "** Don't Buy **" << endl; 
        cout << "***************" << endl;
        return 0;
    }

cout << "3. Does it have competitive price "      << 
        "than other companies selling in Canada?" << endl;
cin  >> input ;

    switch (input) 
    {
        case 'y':
        case 'Y':

        cout << endl;
        cout << "*************************" << endl;
        cout << "Answer the next question." << endl;
        cout << "*************************" << endl;
        break;

        default:
        cout << endl;
        cout << "***************" << endl;
        cout << "** Don't Buy **" << endl; 
        cout << "***************" << endl;
        return 0;
    }
cout << "4. Does it have better quality " <<
        "than others?"                    << endl;
cin  >> input ;
    switch (input) 
    {
        case 'y':
        case 'Y':
        cout << endl;
        cout << "*************************" << endl;
        cout << "Answer the next question." << endl;
        cout << "*************************" << endl;
        break;

        default:
        cout << endl;
        cout << "***************" << endl;
        cout << "** Don't Buy **" << endl; 
        cout << "***************" << endl;
        return 0;
    }

cout << "5. Is it for four season? " << endl;
cin  >> input ;

    switch (input) 
    {
        case 'y':
        case 'Y':
        cout << endl;
        cout << "*************************" << endl;
        cout << "Answer the next question." << endl;
        cout << "*************************" << endl;
        break;

        default:
        cout << endl;
        cout << "***************" << endl;
        cout << "** Don't Buy **" << endl; 
        cout << "***************" << endl;
        return 0;
    }

cout << "6. Is stock management easy? " << endl;
cin  >> input ;
    switch (input) 
    {
        case 'y':
        case 'Y':
        cout << endl;
        cout << "*************************" << endl;
        cout << "Answer the next question." << endl;
        cout << "*************************" << endl;
        break;
        break;

        default:
        cout << endl;
        cout << "***************" << endl;
        cout << "** Don't Buy **" << endl; 
        cout << "***************" << endl;
        return 0;
    }


// Level 2
    string food;

    cout << "7. What kind of food would you like to eat?" << endl;
    cout << "1. Delicious food" << endl;
    cout << "2. Food that enhances your immune system" << endl;

//Level 3
int num;
 while ( num< 1 || num > 2) 
    {
        cout << endl;
        cout << "Choose a number: " << endl;
        cin >> num;
    }

    if (num == 1) 
    {
    cout << "Please enter 3 Deliciuos foods" << endl;
    cin >> food;
    cin >> food;
    cin >> food;
    }

        else if ( num == 2) {
        cout << "Please enter 3 foods that enhances your immune system" << endl;
        cin >> food;
        cin >> food;
        cin >> food;
        }
    
    


// Level 4

    int number;
    cout << "8. How much money can you spend for the food annually?" << endl;
    cout << "1. under $150" << endl;
    cout << "2. $150 - $300" << endl;
    cout << "3. over $300" << endl;
    cin >> number;


    while ( number < 1 || number > 3) 
    {
        cout << endl;
        cout << "Choose a number: " << endl;
        cin >> number;
    }

    if (number == 1) 
    {
    cout << "You spend under $150 annually." << endl;
    }

        else if ( number == 2) {
        cout << "You spend between $150 and $300 annually." << endl;
        }

        else if ( number == 3) {
        cout << "You spend over $300 annually." << endl;    
        }
    
        else {

        cout << "Try one more time";

        }
    

    cout << endl;
    cout << "************" << endl;
    cout << "****    ****" << endl;
    cout << "** Buy it **" << endl; 
    cout << "****    ****" << endl;
    cout << "************" << endl;

    return 0;
}