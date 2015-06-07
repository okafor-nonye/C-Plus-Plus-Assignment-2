/*
 * HealthProfile.h
 * HealthProfile class definition. This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ OIKU MARY OMOAREAHU]
 * Matric No:   [ 45411301HF]
 * Department:  [ MATHEMATICS/STATISTICS ]
 *
 */

#include <string>           // uses C++ string class
using namespace std;

// HealthProfile class definition
class HealthProfile
{

    // public interface
public:
    HealthProfile( string, string, string, int, int, int, int, double, int, int, int ); // constructor that initializes patient information
    int getAge();                   // function to get patients age in years
    double getBMI();                // function to calculate and return BMI
    int getMaximumHeartRate();      // function to calculate and return maximum heart rate
    double getTargetHeartRate();    // function to calculate and return target heart rate
    void getInformation();          // function to print object information
    

    // TODO: Provide get and set function prototypes of each class attribute
    // Mutatorfunctions
    void setFirstName (string firstName); 
    void setLastName (string ); 
    void setGender (string );
    void setMonth (int );
    void setDay (int );
    void setYear (int );
    void setWeight (int );
    void setHeight (double ); 
    void setCurrentDay (int ); 
    void setCurrentMonth (int );
    void setCurrentYear (int );
    void setAge (int , int , int);


    
    // Accessor functions 
    string getFirstName ();
    string getLastName ();
    string getGender ();
    int getMonth ();
    int getDay ();
    int getYear ();
    int getWeight ();
    double getHeight ();
    int getCurrentDay (); 
    int getCurrentMonth ();
    int getCurrentYear ();
    

    // Function prototypes for the constructor, getAge(), getBMI(), getMaximumHeartRate()
    // int getAge(); //This variable is overloaded

    // double getBMI(); //This variable is overloaded

    // int getMaximumHeartRate(); //This variable is overloaded
    

    // getTargetHeartRate() and getInformation() has alrady been provided
    
    
    // private interface
private:
    string firstName;               // variable to hold firstname
    string lastName;                // variable to hold lastname
    string gender;                  // variable to hold gender
    int month;                      // variable to hold month
    int day;                        // variable to hold day
    int year;                       // variable to hold year
    double height;                  // variable to hold height
    int weight;                     // variable to hold weight
    int age;                        // variable to hold age
    
}; // end class HealthProfile
