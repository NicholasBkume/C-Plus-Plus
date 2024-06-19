#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_DIGITS = 5;
const int MIN_NUMBER = 0;
const int MAX_NUMBER = 9;

void generateLotteryNumbers(int lottery[]);
void getUserNumbers(int user[]);
void printArray(const int arr[], int size);
int checkMatches(const int lottery[], const int user[]);

int main()
{
    int lottery[NUM_DIGITS];
    int user[NUM_DIGITS];
    int matchCount = 0;

    srand(time(NULL));
    generateLotteryNumbers(lottery);
    getUserNumbers(user);

    cout << "Lottery numbers: ";
    printArray(lottery, NUM_DIGITS);
    cout << endl << "Your numbers:    ";
    printArray(user, NUM_DIGITS);

    matchCount = checkMatches(lottery, user);

    if (matchCount == NUM_DIGITS)
    {
        cout << endl << "Congratulations! You are the grand prize winner!" << endl;
    }
    else if (matchCount > 0)
    {
        cout << endl << matchCount << " match(es)! Well done!" << endl;
    }
    else
    {
        cout << endl << "Sorry, no matches this time." << endl;
    }

    return 0;
}

void generateLotteryNumbers(int lottery[])
{
    for (int i = 0; i < NUM_DIGITS; i++)
    {
        lottery[i] = rand() % (MAX_NUMBER + 1);  // Generate a random number between 0 and 9
    }
}

void getUserNumbers(int user[])
{
    for (int i = 0; i < NUM_DIGITS; i++)
    {
        cout << "Enter number " << i + 1 << " (between 0 and 9): ";
        cin >> user[i];

        while (user[i] < MIN_NUMBER || user[i] > MAX_NUMBER)
        {
            cout << "Error! Enter a number between 0 and 9: ";
            cin >> user[i];
        }
    }
}

void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "| " << arr[i] << " ";
    }
    cout << "|";
}

int checkMatches(const int lottery[], const int user[])
{
    int matchCount = 0;

    for (int i = 0; i < NUM_DIGITS; i++)
    {
        if (user[i] == lottery[i])
        {
            matchCount++;
        }
    }

    return matchCount;
}
