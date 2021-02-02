#include <iostream>
#include <string>
using namespace std;
class car {
public:
    string client_name;
    string colour;
    char pay;
    string brand;
    string model;
    int price;
    int speed;
    double fuel_consumation;
    virtual void display()
    {
        cout << "\n1) The brand of this car  is : " << brand << endl;
        cout << "2) The model of this car  is : " << model << endl;
        cout << "3) The price of this car  is : " << price << " e.g" << endl;
        cout << "4) The speed of this car  is : " << speed << " Km/h" << endl;
        cout << "5) The fuel consumation of this car  is : " << fuel_consumation << " [l /100 Km]" << endl;
    }
    void setName(string client_name)
    {

        this->client_name = client_name;
        
    }
    void set_colour(string colour)
    {
        this->colour = colour;
    }
    void set_brand(string brand)
    {
        this->brand = brand;
    
    }
    void set_pay(char p)
    {

        if (p == 'I' || p == 'i' || p == 'c' || p == 'C')
            pay = p;
        else
        {
            cout << "Enter I or C 🙂 " << endl;
            cin >> p;
            set_pay(p);
        }
    }
    void display_client_bill()
    {
        cout << " # The name of clinet is:" << client_name << endl;
        cout << " # The brand of car is:" << brand << endl;
        cout << " # The colour of car is:" << colour << endl;
        cout << " # The payment way  you entered is:" << pay << endl;
        cout << "\n     ----------------------------------------  \n";
        cout << "          Thank you for dealing with us             ";
        cout << "\n     ----------------------------------------   \n";
    }
    
};
// inheritance;
class Chevrolet : public car
{
    //encapsulation
    int code=12;
   double discount =0;
public:
    //abstraction
    void set_dis(double dis)
    {
        discount = dis;
    };
    double get_discount()
    {
        double k = price * discount;
        return price - k;
    }
    double get_code()
    {
       return code;
    }
    void display()
    {
        // function overriding
        car::display();
        cout << "[ Advantages ]:\n";
        cout << "* The capacity of the car is 86 hp or 5400 rpm." << endl;
        cout << "* The fuel tank capacity of the car is 45 liters.\n";
        cout << "* The door handles have car color.It has four internal speakers, a USB portand an Aux connection.\n";
        cout << " [ Disadvantages ] :\n";
        cout << " of the Chevrolet Aveo car size as the dimensions of the car are not appropriate to its weight,\n";
        cout << " this affects on safety to passengers in case of a collision.\n";
        cout << "\n----------------------------------------------------\n";
    }
    
};
// inheritance;
class Jeep : public car
{
    //encapsulation
    int code =90;
    double discount1 =0;
    double discount2=0;
public:
    // function overloading
    void set_dis(double dis, double dis1)
    {
        discount1 = dis;
       discount2=dis1;
    };
    double get_discount()
    {
        double k = (price * discount1)+(price * discount2);
        return price - k;
    }
    double get_code()
    {
        return code;
    }
    void display()
    {
        // function overriding
        car::display();
        cout << "[ Advantages ]:\n";
        cout << "* Jeep The car's acceleration rate is very good, \n";
        cout << "as the car only needs 8.8 seconds to reach a hundred kilometers per hour.\n";
        cout << "* It has the advantage of electronic balance.\n";
        cout << "* It has electronic brakes and side sensors that protect the car from collisions, \n";
        cout << " in addition to the immobilizer feature that raises the car's safety rate.\n";
        cout << " [ Disadvantages ]:\n";
        cout << "* It is not equipped with spaces for either the rear or front windshield of the car,\n";
        cout << "  in addition to its lack of front sensitive lighting.\n";
        cout << " It does not have the feature of cruise control on long roads through the car's internal computer.\n";
        cout << "\n----------------------------------------------------\n";
    }
};
// inheritance;
class Toyota : public car
{
    //encapsulation
    int code =55;
    double discount=0;
public:
    void set_dis(double dis)
    {
        discount = dis;
    };
    double get_discount()
    {
        double k = price * discount;
        return price - k;
    }

    double get_code()
    {
        return code;
    }
    void display()
    {
        // function overriding
        car::display();
        cout << "[ Advantages ]:\n";
        cout << "* The design of the car is more than wonderfuland highly offensiveand suitable for young people.\n";
        cout << "* The spaces in the car are very distinctiveand suitable for all lengths.\n";
        cout << "* The storage areas are very distinct inside the car's cabin, and the back trunk space reaches 377 liters.\n";
        cout << "* The visibility spaces in the car from the front are very distinctive and almost no blind spots\n";
        cout << "* The car's performance is excellent and the motor is very harmonious with the fuse.\n";
        cout << "* The car is characterized by great stability at high speeds and is characterized by high capacity on maneuvers.\n";
        cout << "* Comfortable, even though it is sporty.\n";
        cout << "* The air insulation in the car is excellent, the engine is isolatedand the luggage is good.\n";
        cout << "\n----------------------------------------------------\n";
    }
};
// inheritance;
class BMW : public car
{
    //encapsulation;
    int code =89;
    double discount5 =0;
public:
    void set_dis(double dis)
    {
        discount5 = dis;
    };
    double get_discount()
    {
        double k = price * discount5;
        return price - k;
    }
   
    double get_code()
    {
        return code;
    }
    void display()
    {
        // function overriding;
        car::display();
        cout << "[ Advantages ]:\n";
        cout << "* The fuel consumption of BMW is great.\n";
        cout << "* The car has electronic balanceand automatic brake distribution, ";
        cout << "which increases the car's safety rates.\n";
        cout << "* Front and rear airbags.\n";
        cout << "* The side mirrors are folded and controlled electrically with their internal buttons." << endl;
        cout << "\n----------------------------------------------------\n";
    }
};
int main()
{
    car* c;
    int speed;
    string client_name;
    string brand;
    string model;
    int price;
    double fuel_consumation;
    string colour;
    char pay;
    int size;
    double d;
    Chevrolet chevro;
    c = &chevro;
    chevro.brand = "Chevrolet ";
    chevro.model = "Chevrolet LS Captiva 2020";
    chevro.price = 310000;
    chevro.speed = 170;
    chevro.fuel_consumation = 6.45;
   
    cout << " the Chevrolet car code is :"<< chevro.get_code( );
    chevro.set_dis(0.03);
    cout << "\n the the price after dicount  is :" << chevro.get_discount();
    c->display();
    Jeep jee;
    c = &jee;
    jee.brand = "Jeep";
    jee.model = "Jeep Renegade 2017";
    jee.price = 550000;
    jee.speed = 196;
    jee.fuel_consumation = 6.9;
    
    cout << " the Jeep car code is :" << jee.get_code();
    jee.set_dis(0.03,0.01);
    cout << "\n the the price after dicount  is :" << jee.get_discount();
    c->display();
    Toyota toyo;
    c = &toyo;
    toyo.brand = "Toyota";
    toyo.model = "2019  Toyota C-HR";
    toyo.price = 432000;
    toyo.speed = 190;
    toyo.fuel_consumation = 5.9;
    
    cout << " the Jeep car code is :" << toyo.get_code();
    toyo.set_dis(0.02);
    cout << "\n the the price after dicount  is :" << toyo.get_discount();
    c->display();
    BMW BB;
    c = &BB;
    BB.brand = "BMW";
    BB.model = "BMW 528 I 2017";
    BB.price = 650000;
    BB.speed = 96;
    BB.fuel_consumation = 5.4;
   
    cout << " the BMW car code is :" << BB.get_code();
    BB.set_dis(0.01);
    cout << "\n the the price after dicount  is :" << BB.get_discount();
    c->display();
    cout << "               ---------------------------------             \n";
    cout << "Enter number of customers = ";
    cin >> size;
    car* Customers = new car[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\n======> Enter info for customer num " << i + 1 << " <==========\n\n";
        cout << "Enter client name : ";
        cin >> client_name;
        Customers[i].setName(client_name);
        cout << "Enter car colour which client  like to buy :  \n";
        cin >> colour;
        Customers[i].set_colour(colour);
        cout << "Enter car brand  :\n ";
        cin >> brand;
        Customers[i].set_brand(brand);
        cout << "Enter the way do you like to pay : ['C' for cash / 'I' for installments]\n";
        cin >> pay;
        Customers[i].set_pay(pay);
    }
    for (int i = 0; i < size; i++)
    {
        Customers[i].display_client_bill();
    }
   
} 