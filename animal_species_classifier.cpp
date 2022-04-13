/*
*   INPUTS                  => OUTPUTS
*   1 - 1 - 1               => BIRD
*   1 - 1 - 0               => MAMAL
*   1 - 0 - 1 - 1           => AMPHIBIAN
*   1 - 0 - 1 - 0 - 1       => FISH
*   1 - 0 - 1 - 0 - 0       => REPTILE
*   1 - 0 - 0 - 1           => MAMAL
*   1 - 0 - 0 - 0 - 1       => AMPHIBIAN
*   1 - 0 - 0 - 0 - 0 - 1   => FISH
*   1 - 0 - 0 - 0 - 0 - 0   => REPTILE
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout <<"\t\t\t\t* WELCOME TO OUR THIRD PROJECT *" << endl;
    cout << "\t\tAYSIL SIMGE KARACAN 1804010004 - LEYLA ABDULLAYEVA 1904010038" << endl;
    cout << "\tSubject: Write a program for classifying animal species" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

    cout << "INPUT: 1 FOR YES, 0 FOR NO" << endl;


    string yourAnimal;
    bool choice;
    
    cout << "Does the animal have skeleton inside the body" << endl;
    cin >> choice;
    if (choice) {
        cout << "Does your animal have wings?" << endl;
        cin >> choice;
        if (choice) {
            cout << "Does your animal have feathers?" << endl;
            cin >> choice;
            if (choice) {
                yourAnimal = "Your animal is a bird";
            } else {
                yourAnimal = "Your animal is a Bat and it is Mamal";
            }
        } else {
            cout << "Does your animal lay eggs?" << endl;
            cin >> choice;
            if (choice) {
                cout << "Does your animal go throught metamorphosis?" << endl;
                cin >> choice;
                if (choice) {
                    yourAnimal = "Your animal is amphibian";
                } else {
                    cout << "Does your animal have gills?" << endl;
                    cin >> choice;
                    if (choice) {
                        yourAnimal = "Your animal is fish";
                    } else {
                        yourAnimal = "Your animal is a reptile";
                    }
                }
            } else {
                cout << "Does your animal's baby drink milk from its mother?" << endl;
                cin >> choice;
                if (choice) {
                    yourAnimal = "Your animal is mamal";
                } else {
                    cout << "Does your animal go throught metamorphosis?" << endl;
                    cin >> choice;
                    if (choice) {
                        yourAnimal = "Your animal is amphibian";
                    } else {
                        cout << "Does your animal have gills?" << endl;
                        cin >> choice;
                        if (choice) {
                            yourAnimal = "Your animal is fish";
                        } else {
                            yourAnimal = "Your animal is a reptile";
                        }
                    }
                }
            }
        }
    } else {
        yourAnimal = "Your animal is Insect";
    }
    cout << yourAnimal << endl;
    return 0;
}
