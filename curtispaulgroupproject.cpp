#include <iostream>
using namespace std; // just so we dont have to use std:: all the time
                     // it makes it look nicer

int main()  // just to start us off
{ 
    int answeryn;

    switch (questions) 
    {
        case q1:
            cout << "Are there similar product’s " << 
                    "companies less than three?"   << endl;
            cin  >> answeryn ;

        case q2:
            cout << "Does this product target "  <<
                    "for all generations?"       << endl;
            cin  >> answeryn ;

        case q3:
            cout << "Does it have competitive price "         << 
                    "than other companies selling in Canada?" << endl;
            cin  >> answeryn ;

        case q4:
            cout << "Does it have better quality " <<
                    "than others?"                 << endl;
            cin  >> answeryn ;

        case q5:
            cout << "Is it for four season? " << endl;
            cin  >> answeryn ;

        case q6:
            cout << "Is stock management easy? " << endl;
            cin  >> answeryn ;

        case q7:
            cout << "question" << endl;
            cin >> answeryn;

        case q8:
            cout << "question" << endl;
            cin >> answeryn;

        case q9:
            cout << "question" << endl;
            cin >> answeryn;
            // the above code might not be correct, I will be talking with bryden about this later
            // But from what I saw on learncpp.com it looks correct.
            // please put in the questions as I forgot them. Don't worry about the answers.
            // I'll be putting in some if statements once I learn how to combine both case and if statements.
            // We still have alot of time to complete the project, so don't worry too much about getting it done.
            // Let's just work on getting the skeleten of the code finished, and we will debug it after reading week.
            // if you have any comments about the code, please use the comment function for vs code as it is easeir to read.
            // just be sure to place it on the line that you want edited.
    }
    return 0;
}