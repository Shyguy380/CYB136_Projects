#include <iostream>
#include <string>
using namespace std;

//Constant used instead of literal
const int EVEN = 2;
const int MAX_STRING_LENGTH = 50;

/*
This function handles multiplication by
adding the multiplicand, multiplier times.
*/
int multiplyingFunction(long long int multiplicand, long long int multiplier)
    {   
        // Number Types: Chapter 2.1
        // Assignment: Chapter 2.3
        long long int multiplierCopy = multiplier;
        long long int result = 0;

        // While Loop: Chapter 3.6
        while(multiplierCopy > 0)
            {
                // Assignment: Chapter 2.3
                result = result + multiplicand;
                multiplierCopy--;
            }

        return result;
    }

/*
This function does multiplication normally.
*/
double multiplyingFunctionDouble(double multiplicand, double multiplier)
    {   
        // Number Types: Chapter 2.1
        // Assignment: Chapter 2.3
        double result = multiplicand * multiplier;

        return result;
    }

/*
This function uses modulo devision
to determine if the number is even.
*/
bool evenDecider(long long int number)
    {
        // Number Types: Chapter 2.1
        // Assignment: Chapter 2.3
        long long int decider = number % EVEN;
        bool result;

        // If Statement: Chapter 3.1
        if(decider == 0)
            {
                // Assignment: Chapter 2.3
                result = true;
            }

        // If Statement: Chapter 3.1
        if(decider != 0)
            {
                // Assignment: Chapter 2.3
                result = false;          
            }

        return result;
    }

/*
This function uses modulo devision
to determine if the number is even.
*/
bool evenDeciderDouble(double number)
    {
        // Number Types: Chapter 2.1
        // Assignment: Chapter 2.3
        int decider = (int) number % EVEN;
        bool result;

        // If Statement: Chapter 3.1
        if(decider == 0)
            {
                // Assignment: Chapter 2.3
                result = true;
            }

        // If Statement: Chapter 3.1
        if(decider != 0)
            {
                // Assignment: Chapter 2.3
                result = false;          
            }

        return result;
    }

/*
This function handles all of the possible outputs
*/
int outputHandler(long long int multiplicand, long long int multiplier, 
                    long long int result, char evenString[], char oddString[])
    {
        // If Statement: Chapter 3.1
        // Boolean Operations: Chapter 3.5
        if(evenDecider(multiplicand) == true && evenDecider(multiplier) == true)
            {
                // Nested Branches: Chapter 3.4
                // Boolean Operations: Chapter 3.5
                if(evenDecider(result) == true)
                    {
                        cout 
                        << multiplicand << evenString << " multiplied by " 
                        << multiplier << evenString << " equals " 
                        << result << evenString << "." << endl;
                    }

                // Nested Branches: Chapter 3.4
                else
                    {
                        cout 
                        << multiplicand << evenString << " multiplied by " 
                        << multiplier << evenString << " equals " 
                        << result << oddString << "." << endl;
                    }

            }

        // If Statement: Chapter 3.1
        // Boolean Operations: Chapter 3.5
        else if(evenDecider(multiplicand) == true && 
                    evenDecider(multiplier) == false)
            {
                // Nested Branches: Chapter 3.4
                // Boolean Operations: Chapter 3.5
                if(evenDecider(result) == true)
                    {
                        cout 
                        << multiplicand << evenString << " multiplied by " 
                        << multiplier << oddString << " equals " 
                        << result << evenString << "." << endl;
                    }

                // Nested Branches: Chapter 3.4
                else
                    {
                        cout 
                        << multiplicand << evenString << " multiplied by " 
                        << multiplier << oddString << " equals " 
                        << result << oddString << "." << endl;        
                    }
            }   

        // If Statement: Chapter 3.1
        // Boolean Operations: Chapter 3.5
        else if(evenDecider(multiplicand) == false && 
                    evenDecider(multiplier) == true)
            {
                // Nested Branches: Chapter 3.4
                // Boolean Operations: Chapter 3.5
                if(evenDecider(result) == true)
                    {
                        cout 
                        << multiplicand << oddString << " multiplied by " 
                        << multiplier << evenString << " equals " 
                        << result << evenString << "." << endl;
                    }
                
                // Nested Branches: Chapter 3.4
                else{
                        cout 
                        << multiplicand << oddString << " multiplied by " 
                        << multiplier << evenString << " equals " 
                        << result << oddString << "." << endl;    
                    }
            }

        // If Statement: Chapter 3.1
        // Boolean Operations: Chapter 3.5
        else if(evenDecider(multiplicand) == false && 
                    evenDecider(multiplier) == false)
            {

                // Nested Branches: Chapter 3.4
                // Boolean Operations: Chapter 3.5
                if(evenDecider(result) == true)
                    {
                        cout 
                        << multiplicand << oddString << " multiplied by " 
                        << multiplier << oddString << " equals " 
                        << result << evenString << "." << endl;
                    }
                
                // Nested Branches: Chapter 3.4
                else{
                        cout 
                        << multiplicand << oddString << " multiplied by " 
                        << multiplier << oddString << " equals " 
                        << result << oddString << "." << endl;    
                    }
            }

        return 0;
    }
/*
This function handles all of the possible outputs
*/
int outputHandlerDouble(double multiplicand, double multiplier, double result, 
                        char evenString[], char oddString[])
    {
        // If Statement: Chapter 3.1
        // Boolean Operations: Chapter 3.5
        if(evenDeciderDouble(multiplicand) == true && 
                evenDeciderDouble(multiplier) == true)
            {
                // Nested Branches: Chapter 3.4
                // Boolean Operations: Chapter 3.5
                if(evenDeciderDouble(result) == true)
                    {
                        cout 
                        << multiplicand << evenString << " multiplied by " 
                        << multiplier << evenString << " equals " 
                        << result << evenString << "." << endl;
                    }

                // Nested Branches: Chapter 3.4
                else
                    {
                        cout 
                        << multiplicand << evenString << " multiplied by " 
                        << multiplier << evenString << " equals " 
                        << result << oddString << "." << endl;
                    }

            }

        // If Statement: Chapter 3.1
        // Boolean Operations: Chapter 3.5
        else if(evenDeciderDouble(multiplicand) == true && 
                    evenDeciderDouble(multiplier) == false)
            {
                // Nested Branches: Chapter 3.4
                // Boolean Operations: Chapter 3.5
                if(evenDeciderDouble(result) == true)
                    {
                        cout 
                        << multiplicand << evenString << " multiplied by " 
                        << multiplier << oddString << " equals " 
                        << result << evenString << "." << endl;
                    }

                // Nested Branches: Chapter 3.4
                else
                    {
                        cout 
                        << multiplicand << evenString << " multiplied by " 
                        << multiplier << oddString << " equals " 
                        << result << oddString << "." << endl;        
                    }
            }   

        // If Statement: Chapter 3.1
        // Boolean Operations: Chapter 3.5
        else if(evenDeciderDouble(multiplicand) == false && 
                    evenDeciderDouble(multiplier) == true)
            {
                // Nested Branches: Chapter 3.4
                // Boolean Operations: Chapter 3.5
                if(evenDeciderDouble(result) == true)
                    {
                        cout 
                        << multiplicand << oddString << " multiplied by " 
                        << multiplier << evenString << " equals " 
                        << result << evenString << "." << endl;
                    }
                
                // Nested Branches: Chapter 3.4
                else{
                        cout 
                        << multiplicand << oddString << " multiplied by " 
                        << multiplier << evenString << " equals " 
                        << result << oddString << "." << endl;    
                    }
            }

        // If Statement: Chapter 3.1
        // Boolean Operations: Chapter 3.5
        else if(evenDeciderDouble(multiplicand) == false && 
                    evenDeciderDouble(multiplier) == false)
            {
                // Nested Branches: Chapter 3.4
                // Boolean Operations: Chapter 3.5
                if(evenDeciderDouble(result) == true)
                    {
                        cout 
                        << multiplicand << oddString << " multiplied by " 
                        << multiplier << oddString << " equals " 
                        << result << evenString << "." << endl;
                    }
                
                // Nested Branches: Chapter 3.4
                else{
                        cout 
                        << multiplicand << oddString << " multiplied by " 
                        << multiplier << oddString << " equals " 
                        << result << oddString << "." << endl;    
                    }
            }

        return 0;
    }
/*
This function takes user input for multiplication.
It then calls other functions to determine output.
*/
int main()
    {
        // Strings: Chapter 2.6
        // Assignment: Chapter 2.3
        string firstInput = "";
        string secondInput = "";

        // Number Types: Chapter 2.1
        long long int multiplicand;
        long long int multiplier;
        long long int result;

        // Number Types: Chapter 2.1
        double multiplicandDouble;
        double multiplierDouble;
        double resultDouble;

        // Assignment: Chapter 2.3
        char evenString[] = "(even)";
        char oddString[] = "(odd)";

        // Assignment: Chapter 2.3
        bool doubleFlag = false;

        // Input: Chapter 2.2
        
        cout << "Choose a number for the multiplicand: ";
        cin >> firstInput;

        cout << "Choose a number for the multiplier: ";
        cin >> secondInput;

        // For Loop: Chapter 3.7
        for(int index = firstInput.length(); index > 0; index--)
            {   
                // If Statement: Chapter 3.1
                if(firstInput[index] == '.')
                    {
                        doubleFlag = true;           
                    }
            }

        // If Statement: Chapter 3.1
        if(doubleFlag == false)
            {
                // Assignment: Chapter 2.3
                multiplicand = stoi(firstInput);
                multiplier = stoi(secondInput);

                // Assignment: Chapter 2.3
                result = multiplyingFunction(multiplicand, multiplier);
                outputHandler(multiplicand, multiplier, result, 
                                evenString, oddString);
            }

        // If Statement: Chapter 3.1
        else if(doubleFlag == true)
            {
                // Assignment: Chapter 2.3
                multiplicandDouble = stod(firstInput);
                multiplierDouble = stod(secondInput);

                // Assignment: Chapter 2.3
                resultDouble = multiplyingFunctionDouble(multiplicandDouble, 
                                                         multiplierDouble);
                outputHandlerDouble(multiplicandDouble, multiplierDouble, 
                                        resultDouble, evenString, oddString);
            }

        return 0;
    }