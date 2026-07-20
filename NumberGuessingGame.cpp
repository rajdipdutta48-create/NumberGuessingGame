#include<iostream>

using namespace std;
bool prime(int x) {
    bool p = 1;
    for (int i = 2; i * i <= x; i++) {
        if (x % i != 0) {
            p = 1;
        }
        else {
            p = 0;
            break;
        }
    }
    return p;
}
int main() {
    srand(time(0));
    int n1 = rand(), n2, p;
    char n3;
    string str;
    cout << "Press Enter key for putting any input::" << endl;
    cout << "Enter Your name: ";
    getline(cin, str);
    cout << " " << endl;
    cout << "Welcome new user " << str << endl;
    cout << " " << endl;

    cout << "Here you have to guess a magic number and the rules are: " << endl << "1.You will get 5 chances to guess the number." << endl;
    cout << "2.If your number is greater than the magic number you will get the message - Greater." << endl;
    cout << "3.If your number is lesser than the magic number you will get the message - Lesser." << endl;
    cout << "4.Remember the number is an integer between 1-100." << endl;
    for (int j = 1; j <= 6; j++) {

        cout << 5 + j - 1 << ".If you guessed correctly in your " << j << "th guess you will get " << 6 - j << " points." << endl;
    }
    cout << "11.You will get a clue in each guess(4th and 5th clue will be same as you can't guess after 5th clue). " << endl;
    cout << "Note: You can't reenter any number." << endl;
    cout << " " << endl;
    do {
        for (int n = 1; n <= 6; n++) {
            if (n == 2) {
                cout << "Enter your " << n << "st guess: ";
                cin >> n2;
                if (n2 == n1) {
                    cout << "Congrats " << str << " You guessed correctly";
                    p = 1;
                    break;
                }
                else if (n2 < n1) {
                    cout << "Lesser" << endl;
                    if (n2 % 2 != 0) {
                        cout << "The number is even" << endl;
                    }
                    else {
                        cout << "Yes, the number is even but you need to add more" << endl;
                    }
                    continue;
                }
                else {
                    cout << "Greater" << endl;
                    if (n2 % 2 != 0) {
                        cout << "The number is even" << endl;
                    }
                    else {
                        cout << "Yes, the number is even but you need to subtract more" << endl;
                    }
                    continue;
                }
            }
            else if (n == 1) {
                cout << "Enter your " << n << "nd guess: ";
                cin >> n2;
                if (n2 == n1) {
                    cout << "Congrats " << str << " You guessed correctly";
                    p = 2;
                    break;
                }
                else if (n2 < n1) {
                    cout << "Lesser" << endl;
                    if (prime(n2) == 1) {
                        cout << "The number is composite" << endl;
                    }
                    else {
                        cout << "Yes, the number is composite but you need to add more" << endl;
                    }
                    continue;
                }
                else {
                    cout << "Greater" << endl;
                    if (prime(n2) == 1) {
                        cout << "The number is composite" << endl;
                    }
                    else {
                        cout << "Yes, the number is composite but you need to subtract more" << endl;
                    }
                    continue;
                }
            }

            else if (n == 3) {
                cout << "Enter your " << n << "rd guess: ";
                cin >> n2;
                if (n2 == n1) {
                    cout << "Congrats " << str << " You guessed correctly";
                    p = 3;
                    break;
                }
                else if (n2 < n1) {
                    cout << "Lesser" << endl << "The number is slightly greater than the middle number between 1-100" << endl;
                    continue;
                }
                else {
                    cout << "Greater" << endl << "The number is slightly greater than the middle number between 1-100" << endl;
                    continue;
                }
            }
            else if (n < 6) {
                cout << "Enter your " << n << "th guess: ";
                cin >> n2;
                if (n2 == n1) {
                    cout << "Congrats " << str << " You guessed correctly";
                    p = n;
                    break;
                }
                else if (n2 < n1) {
                    cout << "Lesser" << endl << "The number is the jersey number of an English allrounder Sam Curran" << endl;
                    continue;
                }
                else {
                    cout << "Greater" << endl << "The number is the jersey number of an English allrounder Sam Curran" << endl;
                    continue;
                }
            }
            if (n == 6) {
                cout << "Better luck next time" << endl;
                cout << "Magic number was: " << n1 << endl;
            }

        }
        cout << " " << endl;
        cout << endl;
        cout << str << " ,here is your point details: " << endl;
        if (p <= 5) {
            cout << str << " You have answerd correctly in your " << p << "th guess" << endl;
            cout << "so your point is: " << 6 - p << endl;
        }
        else {
            cout << "Sorry " << str << " you have failed to guess correctly in your 5 attempts ";
            cout << "so your point is 0" << endl;

        }
        cout << "Do you want to play again(Type Y for Yes and N for No)?: ";
        cin >> n3;
        if (n3 == 'N')
            cout << "Thank you " << str << " for playing the game";
    }
    while (n3 == 'Y');
}
