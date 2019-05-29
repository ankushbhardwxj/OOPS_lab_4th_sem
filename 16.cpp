// WAP in C++ using default constructor which initializes details of a volleyball match.
// Create the variable, score of the player dynamically and for that score create an array
// for the number of matches. Display the player name ,player-id of the players ,number
// of matches in the tournament, and score.

#include<iostream>
using namespace std;

class volleyball{
    int no, id, *score, i;
    char name[20];
    public:
    volleyball(){
        cout << "Enter the name of the player: ";
        cin >> name;
        cout << "Enter the player id: ";
        cin >> id;
        cout << "Enter the no. of matches: ";
        cin >> no;
        score = new int[no];

        for(i=0; i<no; i++)
        {
            cout << "Enter the score of matche: " << i+1 << endl;
            cin >> score[i];
        }
    }
    void display()
    {
        cout << "The name of the player: " << name << endl;
        cout << "Player id: " << id << endl;
        cout << "No. of matches: " << id << endl;
        for(i=0; i<no; i++)
        {
            cout << "Score of " << i+1 << " :" << score[i];
        }
    }
};

int main()
{
    volleyball obj;
    obj.display();
    return 0;
}