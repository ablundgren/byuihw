#include <iostream>
#include <string>
using namespace std;

string getProfName(string profName);
string getName(string name);
void display(string profName, string name);

int main()
{
    string profName;
    profName = getProfName(profName);
    string name;
    name = getName(name);
    display(profName, name);
    return 0;
}

string getProfName(string profName)
{
    cout << "What is your professor's name? ";
    cin >> profName;
    return profName;
}

string getName(string name)
{
    cout << "What is your first name? ";
    cin >> name;
    return name;
}

void display(string profName, string name)
{
   cout << name << ", you are taking Br. "
          << profName << "'s class, \"CS124\". "
          << endl;
   return;
}
