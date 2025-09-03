#include <iostream>
#include <string>
using namespace std;
int main()
{
 string name;
string issue;
string feeling;
cout << "Hello, I am Eliza. I'll be your therapist today.\n";
cout << "Tell me, what is your name?\n";
getline(cin, name);
cout << "Nice to meet you, " << name << ". How can I help you today?\n";
cout << "What is bothering you?\n";
getline(cin, issue); 
cout << "\"" << issue << "\"" "?" << " Please tell me more. How does that make you feel?\n";
getline(cin, feeling);
cout  << "Interesting... well, would you look at the time? I am afraid we will have to end the session here.\n";
cout << "Have a good rest of your day, " << name << " I hope too see you again" << ".\n";
}
