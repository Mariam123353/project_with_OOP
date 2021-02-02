#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    string name;
    string colour;
    char pay;
    string brand;
    fstream meme, mega;
    meme.open("D:/m/carData.text", ios::out);
    mega.open("D:/m/client.text", ios::app);
    meme << "1) The brand of this car  is : Chevrolet\n" <<
        "2) The model of this car  is : Chevrolet LS Captiva 2020\n" <<
        "3) The price of this car  is : 310000 e.g\n" <<
        "4) The speed of this car  is : 170 Km / h\n" <<
        "5) The fuel consumation of this car  is : 6.45[l / 100 Km]\n" <<
        "[Advantages] :\n" <<
        "*The capacity of the car is 86 hp or 5400 rpm.\n" <<
        " * The fuel tank capacity of the car is 45 liters.\n" <<
        "* The door handles have car color.It has four internal speakers, a USB portand an Aux connection.\n" <<
        "[Disadvantages] :\n" <<
        " of the Chevrolet Aveo car size as the dimensions of the car are not appropriate to its weight,\n" <<
        "this affects on safety to passengers in case of a collision.\n" <<

        " ----------------------------------------------------\n" <<
        "  the Jeep car code is : 90\n" <<
        " the the price after dicount  is : 528000\n" <<
        "1) The brand of this car  is : Jeep\n" <<
        "2) The model of this car  is : Jeep Renegade 2017\n" <<
        "3) The price of this car  is : 550000 e.g\n" <<
        "4) The speed of this car  is : 196 Km / h\n" <<
        "5) The fuel consumation of this car  is : 6.9[l / 100 Km]\n" <<
        "[Advantages] :\n" <<
        "*Jeep The car's acceleration rate is very good,\n" <<
        "as the car only needs 8.8 seconds to reach a hundred kilometers per hour.\n" <<
        "* It has the advantage of electronic balance.\n" <<
        " * It has electronic brakes and side sensors that protect the car from collisions, \n" <<
        "  in addition to the immobilizer feature that raises the car's safety rate.\n" <<
        "   [Disadvantages]:\n" <<
        "*It is not equipped with spaces for either the rear or front windshield of the car, \n" <<
        "in addition to its lack of front sensitive lighting.\n" <<
        " It does not have the feature of cruise control on long roads through the car's internal computer.\n" <<

        " ----------------------------------------------------\n" <<
        " the toyota car code is : 55\n" <<
        "the the price after dicount  is : 423360\n" <<
        "1) The brand of this car  is : Toyota\n" <<
        "2) The model of this car  is : 2019  Toyota C - HR\n" <<
        "3) The price of this car  is : 432000 e.g\n" <<
        "4) The speed of this car  is : 190 Km / h\n" <<
        "5) The fuel consumation of this car  is : 5.9[l / 100 Km]\n" <<
        "[Advantages] :\n" <<
        "*The design of the car is more than wonderfuland highly offensiveand suitable for young people.\n" <<
        "* The spaces in the car are very distinctiveand suitable for all lengths.\n" <<
        " * The storage areas are very distinct inside the car's cabin, and the back trunk space reaches 377 liters.\n" <<
        "* The visibility spaces in the car from the front are very distinctive and almost no blind spots\n" <<
        "* The car's performance is excellent and the motor is very harmonious with the fuse.\n" <<
        "* The car is characterized by great stability at high speeds and is characterized by high capacity on maneuvers.\n" <<
        "* Comfortable, even though it is sporty.\n" <<
        "* The air insulation in the car is excellent, the engine is isolatedand the luggage is good.\n" <<

        "----------------------------------------------------\n" <<
        " the BMW car code is : 89\n" <<
        " the the price after dicount  is : 643500\n" <<
        " 1) The brand of this car  is : BMW\n" <<
        " 2) The model of this car  is : BMW 528 I 2017\n" <<
        " 3) The price of this car  is : 650000 e.g\n" <<
        " 4) The speed of this car  is : 96 Km / h\n" <<
        " 5) The fuel consumation of this car  is : 5.4[l / 100 Km]\n" <<
        " [Advantages] :\n" <<
        " *The fuel consumption of BMW is great.\n" <<
        " * The car has electronic balanceand automatic brake distribution, which increases the car's safety rates.\n" <<
        " * Front and rear airbags.\n" <<
        " * The side mirrors are folded and controlled electrically with their internal buttons.\n" <<

        "----------------------------------------------------\n" <<
        "           ---------------------------------      \n";
    meme.close();
    cout << "\n======> Enter info for customer  <==========\n\n";
    cout << "enter ctrl+z if you 'd like to exist\n";

    cout << "Enter client name :  \n";

    cout << "Enter car colour do you like to buy :  \n";

    cout << "Enter car brand  :\n";

    cout << "Enter the way do you like to pay : ['C' for cash / 'I' for installments]\n";


    while (cin >> name >> colour >> brand >> pay)
    {
        mega << name << endl;
        mega << colour << endl;
        mega << brand << endl;
        mega << pay << endl;
        mega << "------------" << endl;
    }
    mega.close();
    return 0;

}