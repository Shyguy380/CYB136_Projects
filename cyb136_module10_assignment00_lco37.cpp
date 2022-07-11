#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>
#include <list>

using namespace std;

// Constant used instead of passing back and forth
    // Map to hold student names and classes
    map<string, vector<string> > results;

    // Used for loops and output
    map<string, vector<string> >::iterator resultsItr;
    int numStudents;
    int numClasses;

    // Index keepers
    int studentIndex;
    int classIndex;
    int index;

    // For optional hashing
    int decision;
    list<string> hashedNames;
    list<string>::iterator hashItr;

    hash<string> nameHash;
    string tempString;

    // Strings of names and classes
    string studentName = "";
    string className = "";

    vector<string> classNames;

/*
1) either vectors or arrays,
2) either lists, queues, or stacks,
3) either sets, maps, or priority queues, and 
4) hashes.
*/

/*
This function handles the output and changes depending on if the user would like to hash the names or not
*/
void outputting()
    {
        for(resultsItr = results.begin(); resultsItr != results.end(); ++resultsItr)
            {
                if(decision == 1)
                    {
                        tempString = nameHash(resultsItr->first);
                        hashedNames.push_back(tempString);
                    }

                cout << resultsItr->first << ":";

                for(index = 0; index < resultsItr->second.size(); index++)
                    {
                        cout << " " << resultsItr->second[index];
                    }

                cout << "." << endl;
            }

        if(decision == 1)
            {
                cout << endl << "Hashed values are as follows...\n";
                for (hashItr = hashedNames.begin(); hashItr != hashedNames.end(); ++hashItr)
                {
                    cout << *hashItr << endl;
                }
            }
    }

/*
This function is used for handling the entering of classes
*/
void enteringClasses()
    {
        // Entering Classes
        for(classIndex = 0; classIndex < numClasses; classIndex++)
            {
                cout << "\nPlease enter the name of a class: ";
                cin >> className;

                classNames.push_back(className);

                cout << "Class added...\n";
            }
    }

/*
This function is used for entering each student
*/
bool enteringStudents()
    {   
        bool flag = false;
        // Entering Students
        for(studentIndex = 0; studentIndex < numStudents; studentIndex++)
            {
                cout << "\nEnter the name of a student: ";
                cin >> studentName;

                cout << "\nHow many classes would you like to assign to this student?: ";
                cin >> numClasses;

                enteringClasses();

                results.insert(pair<string, vector<string> >(studentName, classNames));

                classNames.clear();
            }

        flag = true;
        return flag;
    }

/*
This function takes user input for multiplication.
It then calls other functions to determine output.
*/
int main()
    {
        // Input
        cout << "This program is designed to assign classes to specific students." << endl;
        cout << "How many students would you like to input?: ";
        cin >> numStudents;

        if(!enteringStudents())
            {
                cout << "Sorry... something went wrong\n";
            }

        cout << endl << "Would you like to securely hash the student names? (1 = Yes, 2 = No): ";
        cin >> decision;

        cout << "\nThis program has completed. These are the results: \n";

        outputting();

        return 0;
    }