//Colby Conish, Jacob Chen and Abdul Kabbani

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> courses;
    string user_input;
    bool done = false;
    while (!done)
    {
        cout << "Are you registered with pit stop? " << endl;
        cin >> user_input;

        if (user_input == "yes" or user_input == "no")
            done = true;
    }

    done = false;
    if (user_input == "no")
    {
        cout << "Whats your name? " << endl;
        cin >> user_input;
    }

    while (!done)
    {
        cout << "Pit Stop> ";
        cin >> user_input;

        if (user_input == "enroll")
        {
            cout << "Please enter class  ID:" << endl;
            cin >> user_input;
            courses.push_back(user_input);

            cout << "User enroled in class " << user_input << "." << endl;
        }
        else if (user_input == "courses")
        {
            for (int i = 0; i < courses.size(); i++)
                if (courses.at(i) == "1001")
                    cout << "English 1" << endl;
                else if (courses.at(i) == "1350")
                    cout << "Calc 1" << endl;
                else if (courses.at(i) == "2259")
                    cout << "Discrete Sctructures" << endl;
                else
                    cout << courses.at(i) << endl;

            if (courses.size() == 0)
                cout << "not enrolled in any courses." << endl;
        }
        else if (user_input == "quit")
            done = true;
        else
            cout << "Unknown Command!" << endl;
    }
}