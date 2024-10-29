/*
Title:Chapter 4 Exercise 15 - Shipping charges
File name:Chapter4Ex15_Daniel_Geesaman.cpp
Programmer:Daniel Geesaman
Date:10/26/2024
Requirements:

The fast freight shipping company charges the following rates:

Weight of package (KG)                  Rate per 500 miles shipped
------------------------------------------------------------------
2 KG or less                            $1.10
Over 2 KG less than 6 KG                $2.20
Over 6 KG less than 10 KG               $3.70
Over 10 KG less than 20 KG              $4.80
------------------------------------------------------------------

Write a program that asks for the weight of the package and distance it is to be shipped,
then displays the charges.

Input validation: Do not accept values of 0 or less for the weight of the package.
Do not accept weights of more than 20 KG (this is the maximum the company will ship).
Do not accept distances of less than 10 miles or more than 3,000 miles. 
These are the company's minimum and maximum shipping distances.
*/

#include <iostream>
using namespace std;

int main()
{
    double weight;
    double distance;
    double cost;

    cout << "how much does your package weigh? (in KG) ";
    cin >> weight;
    cout << "how far are you mailing your package? (20 to 3000 miles) ";
    cin >> distance;

    if (distance >= 10 && distance <= 3000)
    {
        if (weight > 0 && weight <= 2)
        {
            cost = (1.10 / 500) * distance;
            cout << "your price to ship is: $" << cost;
        }
        else if (weight > 2 && weight <= 6)
        {
            cost = (2.20 / 500) * distance;
            cout << "your price to ship is: $" << cost;
        }
        else if (weight > 6 && weight <= 10)
        {
            cost = (3.70 / 500) * distance;
            cout << "your price to ship is: $" << cost;
        }
        else if (weight > 10 && weight <= 20)
        {
            cost = (4.80 / 500) * distance;
            cout << "your price to ship is: $" << cost;
        }
        else
        {
            cout << "this company cannot accomodate your package";
        }
    }
    else
    {
        cout << "this company does not ship that distance.";
    }
}

