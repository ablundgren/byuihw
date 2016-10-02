#include <iostream>
using namespace std;

char getProfName(char profName);
char getName(char name);
void display(char profName, char name);

int main()
{
    char profName[50] = getProfName(profName);
    char name[50] = getName(name);
    display(profName, name);
    return 0;
}

char getProfName(char profName)
{
    cout << "What is your professor's name? ";
    cin >> profName;
    return profName;
}

char getName(char name)
{
    cout << "What is your first name? ";
    cin >> name;
    return name;
}

void display(profName, name)
{
   cout << name << ", you are taking Br. "
          << profName << "'s class, \"CS124\". ";
          << endl;
   return;
}
