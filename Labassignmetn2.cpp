#include <iostream>
#include <string>
using namespace std;

// Function named missmess
void missmess(string w)
{
    if (w.front() == 'm' && w.back() == 's')
    {
        cout << "missmess" << endl;
    }
    else if (w.front() == 'm')
    {
        cout << "miss" << endl;
    }
    else if (w.back() == 's')
    {
        cout << "mess" << endl;
    }
    else
    {
        cout << w << endl;
    }
}

int main()
{
    string word;

    cout << "Enter a word ($$$ to stop): ";
    cin >> word;

    while (word != "$$$")
    {
        missmess(word);

        cout << "Enter a word ($$$ to stop): ";
        cin >> word;
    }

    return 0;
}