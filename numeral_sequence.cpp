#include<iostream>
#include<cmath>

using namespace std;


long double arithmatic_series(long double difference, long double first_term, int result_term)
{
    for(int i = 1; i < result_term; i++)
    {
        first_term += difference;
    }

    return first_term;
}

int main()
{
    int number_of_terms, result_term;

    cout << "How many terms do you want to provide? There must be at least two terms. \nHowever, more terms help to analyze and increase accuracy of result." << endl;
    cout << endl << "Number of terms: " << endl;

    cin >> number_of_terms;

    while(1)
    {
        if(number_of_terms >= 2)
        {
            break;
        }
        else
        {
            cout << "Sorry! Minimum number of terms are at least two." << endl;

            cout << "Number of terms: " << endl;

            cin >> number_of_terms;
        }
    }


    long double result;

    long double initial_terms[number_of_terms];

    long double term_difference[number_of_terms - 1];

    cout << "Now, sequentially enter your terms one by one." << endl;

    for(int i = 0; i < number_of_terms; i++)
    {
        cout << "Term " << i + 1 << ": " << endl;

        cin >> initial_terms[i];
    }

    cout << "Enter the term of result you prefer: " << endl;

    cin >> result_term;

    for(int i = 0; i < number_of_terms - 1; i++)
    {
        term_difference[i] = initial_terms[i+1] - initial_terms[i];
    }

    if(number_of_terms == 2)
    {
        result = arithmatic_series(term_difference[0], initial_terms[0], result_term);
    }
    else
    {
        cout << "Nothing!";
    }

    cout << "Expected result of your given term " << result_term << ": " << result << endl;

    return 0;


}

