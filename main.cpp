#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include "Player.h"
#include "Account.h"
#include "Utilities.h"

using namespace std;

int main() {
    Account frank_account;
    Account jim_account;

    Player frank;
    Player hero;

    Player players[]{ frank, hero };
    vector<Player> player_vec{ frank };
    player_vec.push_back(hero);

    Player *enemy{ nullptr };
    enemy = new Player;

    delete enemy;

    int *my_array{ nullptr };
    size_t size;
    int value{};
    int favorite_number;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the value to initialize the array: ";
    cin >> value;

    my_array = create_array(size, value);
    display(my_array, size);
    delete[] my_array;

    cout << "Enter your favourite number between 1 and 100: ";
    cin >> favorite_number;

    cout << "Amazing!" << endl;
    cout << "No really! " << favorite_number << " is my favourite!" << endl;

    refer();
    refer6();
    reference();
    reference2();

    std::cin.clear();
    std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
