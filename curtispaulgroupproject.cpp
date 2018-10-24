#include <iostream>
using namespace std; // just so we dont have to use std:: all the time
                     // it makes it look nicer

int main()  // just to start us off
{ 
    char input = 'y';

cout << "1. Are there similar product’s " << 
        "companies less than three?"   << endl;
cin  >> input ;
    switch (input) 
    {
        case 'y': 
        cout << "*************************" << endl;
        cout << "Answer the next question." << endl;
        cout << "*************************" << endl;
        break;

        default: 
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
        cout << "*************************" << endl;
        cout << "Answer the next question." << endl;
        cout << "*************************" << endl;
        break;

        default:
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
        cout << "*************************" << endl;
        cout << "Answer the next question." << endl;
        cout << "*************************" << endl;
        break;

        default:
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
        cout << "*************************" << endl;
        cout << "Answer the next question." << endl;
        cout << "*************************" << endl;
        break;

        default:
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
        cout << "*************************" << endl;
        cout << "Answer the next question." << endl;
        cout << "*************************" << endl;
        break;

        default:
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
        cout << "************" << endl;
        cout << "****    ****" << endl;
        cout << "** Buy it **" << endl; 
        cout << "****    ****" << endl;
        cout << "************" << endl;
        break;

        default:
        cout << "***************" << endl;
        cout << "** Don't Buy **" << endl; 
        cout << "***************" << endl;
        return 0;
    }

    return 0;
}