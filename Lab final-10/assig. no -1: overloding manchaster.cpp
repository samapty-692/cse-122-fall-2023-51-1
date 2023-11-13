#include <iostream>
using namespace std;
class ManchesterUnited {
private:
    int coach;
    int player;

public:
    ManchesterUnited() : coach(0), player(0) {}

    ManchesterUnited(int c, int p) : coach(c), player(p) {}

    void getData() {
        cout << "Coach: " << coach << ", Player: " << player << endl;
    }

    ManchesterUnited operator++() {
        // Overloading pre-increment operator (++ronaldo)
        coach++;
        player++;
        return *this;
    }

    bool operator==(const ManchesterUnited& other) const {
        // Overloading equality operator (ronaldo == fernandes)
        return (coach == other.coach) && (player == other.player);
    }
};

int main() {
    ManchesterUnited ronaldo;
    ManchesterUnited fernandes;

    cout << "Before increment:" <<endl;
    cout << "ronaldo: ";
    ronaldo.getData();
    cout << "fernandes: ";
    fernandes.getData();

    // Incrementing ronaldo using overloaded '++' operator
    ++ronaldo;

    cout << "\nAfter increment:" << endl;
    cout << "ronaldo: ";
    ronaldo.getData();
    cout << "fernandes: ";
    fernandes.getData();

    // Comparing ronaldo and fernandes
    if (ronaldo == fernandes) {
        cout << "\nronaldo is equal to fernandes." << endl;
    } else {
        cout << "\nronaldo is not equal to fernandes." << endl;
    }

    return 0;
}
