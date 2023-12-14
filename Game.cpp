#include <iostream>
#include <string>
#include <ctime>
using namespace std;
class MainGame {
  public:
    string welcome = "Welcome to OneTwoThreeFour";
    void mesi() {
        cout << welcome;
        cout << "\n";
    }     
};

class Interface : public MainGame {
  protected:
    int limite;
};

// Limit is 25
class Limit : public MainGame {
    public:
      int pickuh() {
        cout << "---------------------------------------------\n";
        cout << "The limit for the number that you can add varies";
        cout << " \n";
        cout << "Opponents will have more number choices";
        cout << " \n";
  }      
};

// Choices
class Numbers: public MainGame {
    public:
      int choice() {
        int limite;
        cout << "Choose your limit for the game: ";
        cin >> limite;
        cout << " \n";
        cout << "The limit for the number that you can add is ";
        cout << limite;
        cout << " \n";
        int addition1;
        int addition2;
        int addition3;
        cout << "Choose your first number: ";
        cout << "\n";
        cin >> addition1;
        cout << "Choose your second number: ";
        cout << "\n";
        cin >> addition2;
        cout << "Choose your third number: ";
        cout << "\n";
        cin >> addition3;
        int number = 0;
        int i = 0;
        srand(time(NULL));
        int randome = 0;
        bool Fail = false;
        while(i <= limite) {
          cout << "Choose between: ";
          cout << addition1;
          cout << "/";
          cout << addition2;
          cout << "/";
          cout << addition3;
          cout << "/";
          cout << " \n";
          cout << "---------------------------------------------";
          cout << " \n";
          cout << " \n";
          cin >> number;
          if(number == addition1 || number == addition2 || number == addition3) {
            i = i+number;
            cout << " \n";
            cout << "---------------------------------------------";
            cout << " \n";
            cout << "You choose number: ";
            cout << number;
            cout << " \n";
            cout << "The current number is: ";
            cout << i;
            cout << " \n";
            cout << "---------------------------------------------";
            if(i > limite) {
              string a = "";
              cout << " \n";
              cout << "You lose! You make the number more than designated limit";
              cout << " \n";
              cout << "Press any button to exit!";
              cout << " \n";
              cout << "> ";
              cin >> a;
              break;
            }
            randome = (rand() % 5)+1;
            i = i+randome;
            cout << " \n";
            cout << "The opponent chooses number: ";
            cout << randome;
            cout << " \n";
            cout << "The current number is: ";
            cout << i;
            cout << " \n";
            cout << " \n";
            if(i > limite) {
              string a = "";
              cout << " \n";
              cout << "You win! Opponent makes the number more than designated limit";
              cout << " \n";
              cout << "Press any button to exit!";
              cout << " \n";
              cout << "> ";
              cin >> a;
              break;
            }
          }
          else {
            cout << "Invalid number!";
            cout << " \n";
            cout << " \n";
          }
        }
      }
};

int main() {
    MainGame meswelcome;
    Limit meslimite;
    Numbers mesnumber;
    meswelcome.mesi();
    meslimite.pickuh();
    mesnumber.choice();
    cout << " ";
    return 0;
}