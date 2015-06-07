/*
 * main.cpp
 * HealthProfile program . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ OKAFOR CHUKWUNONYE IBINABO ]
 * Matric No:   [ 46239964AC ]
 * Department:  [ MATHEMATICS/STATISTICS ]
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

int main()
{
    // Variable declarations
    string firstName;
    string lastName;
    string gender;
    int month;
    int day;
    int year;
    double height;
    int weight;
    int currentDay;
    int currentMonth;
    int currentYear;
    
    // Prompt for patient information
    cout << "Welcome to our program to computerize healthcare records\n";
    cout << "please fill-in your information as requested. Thank you\n";
    cout << "\nKindly enter todays day, month and year using numeric representations only\n";
    cout << "e.g. 3, 5, 2015 indicating 3rd of May, 2015, else software would break\n";
    
    // TODO: Put your code to receve input from user here
        //  Collecting name
        cout<< "Enter the Person's First name "<<endl;
        cin>>firstName;    

        cout<< "Enter the Person's Last name "<<endl;
        cin>>lastName;

    
        //  Collecting gender
        cout<< "Enter the Person's Gender "<<endl; 
        cin>>gender;


        //  Collecting birth information
        cout<<"what is the birth month?"<<endl;
        cin>> month; 

        cout<<"what is the birth day?"<<endl;
        cin>> day;
              
        cout<<"what is the birth year?"<<endl;
        cin>> year; 


        // Collecting current date, current month and current year
        cout<<"what is the current month?"<<endl;
        cin>> currentMonth; 

        cout<<"what is the current day?"<<endl;
        cin>> currentDay;
              
        cout<<"what is the current year?"<<endl;
        cin>> currentYear; 
    

        //  Collecting height and weight
        cout<<"what is the person's height in inches?"<<endl;
        cin>> height;                      
                                                
        cout<<"what is the person's weight in pounds?"<<endl;
        cin>> weight;  

    
    // Instantiate an object of class HealthProfile - passing relevant values to the constructor
    HealthProfile healthprofile1(firstName, lastName, gender, month, day, year, weight, height, currentDay, currentMonth, currentYear );

    healthprofile1.setFirstName(firstName);
    healthprofile1.setLastName(lastName);
    healthprofile1.setGender(gender);
    healthprofile1.setMonth(month);
    healthprofile1.setDay(day);
    healthprofile1.setYear(year);
    healthprofile1.setWeight(weight);
    healthprofile1.setHeight(height);
    healthprofile1.setCurrentDay(currentDay);
    healthprofile1.setCurrentMonth(currentMonth);
    healthprofile1.setCurrentYear(currentYear);


    // Print information from the object - by calling getInformation() function
	healthprofile1.getInformation();
       
    return 0;
}
