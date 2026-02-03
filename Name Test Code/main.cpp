#include <iostream>
using namespace std;

int main() {
    string first,last;

    cout << "Enter first and last name:" << endl;
    getline(cin, first, ' ');
    getline(cin, last);

    if(last == "Schraub" && first == "Ryan") {
        cout << "You get no great day!!!!! Stinky Mc loser pants!!!!!!!! >:B" << endl;
    } else if(last == "Cena" && first == "John") { 
        cout << "...? Is someone there?" << endl;
    } else {
    cout << "I hope you have a great day, " << first << " " << last << "!" << endl;
    }

    return 0;
}