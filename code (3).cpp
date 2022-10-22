#include <iostream>
using namespace std;

char Game(long long v,long long c, char s)
{
    if(c == 0 && v == 0)
    {
        if(s == 'A')
            return 'CD';
        else
            return 'A';
    }
    if(s == 'A')
    {
        char First = 'z';
        if(v>0)
        {
            First = Game(v-1, c+1, 'B');
        }



        char Second = Game(v,c-1,'B');
        if(First == 'A' || Second == 'A')
            return 'A';
        else
            return 'B';
    }
}

int main() {    
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "You entered " << number;    
    return 0;
}
