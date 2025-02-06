// Dustin Henderson
// Assignment 3 - MadLib

using namespace std;

#include <iostream>
#include <conio.h>

// structs
struct Entries {
    string type;
    string input;
};

int main()
{
    const int NUM_ENTRIES = 10;
    bool fixMistake = true;
    char mistake;
    int fix;
    
    Entries entries[] = {
    {"place", ""},
    {"adjective", ""},
    {"noun", ""},
    {"famous person", ""},
    {"past-tense verb", ""},
    {"animal", ""},
    {"sport", ""},
    {"city", ""},
    {"weekday", ""},
    {"emotion", ""},
    };

    for (int i = 0; i < NUM_ENTRIES; i++)
    {
        cout << (i+1) << ". Enter a " << entries[i].type << ": ";
        cin >> entries[i].input;
        
    }
    do {
        cout << "\n";
        cout << "Do you want to fix any mistakes? (y/n): ";
        cin >> mistake;

        if (mistake == 'y')
        {
            cout << "Which entry would you like to fix? (1-10): ";
            cin >> fix;
            cout << (fix) << ". Enter a " << entries[fix - 1].type << ": ";
            cin >> entries[fix - 1].input;
            cout << "Your new " << entries[fix - 1].type << " is: " << entries[fix - 1].input << "\n";
        }
        else if (mistake == 'n')
        {
            cout << "\n" << "Your Mad Lib: " << "\n\n";
            cout << "On " << entries[8].input << ", " << entries[3].input << " went to a " << entries[6].input << " game in " << "\n" << entries[7].input <<
                ". But on the way there, a " << entries[5].input << " from " << entries[0].input << " " << entries[4].input << " a " << "\n" << entries[2].input << ". " <<
                entries[3].input << " was " << entries[9].input << ". Then " << entries[3].input << " said: 'That " << entries[1].input << " " << entries[5].input << "\n" << "sure knows a lot about " << entries[2].input << "s.' ";
            fixMistake = true;
            (void)_getch();
            return 0;
            return fixMistake;
            
        }
        else
        {
            cout << "You did not type y/n. Closing Program.";
            (void)_getch();
            return 0;
        }
    }while (fixMistake = true);
    

    (void)_getch();
    return 0;
}

