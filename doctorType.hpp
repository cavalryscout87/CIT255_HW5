/*
 =========================================================================
 Author: Patrick Lockett
 Class name: CIT 233
 Time Log: Day 1- 10:00am - 2:00pm 4 hours
 Day 2- 11:00am - 2:00pm 3 hours
 
 Description: This program creates and inherents from different objects to create a program that will allow users to create a database for patient, doctor, and billing information.
 
 Input Variables:
 
 Output Function:
 
 =========================================================================
 */

#ifndef doctorType_hpp
#define doctorType_hpp
#include "personType.hpp"
#include <stdio.h>

class doctorType : public personType {
public:

    //constructors
	doctorType();

    doctorType(std::string s);

    doctorType(std::string s, std::string firstName, std::string middleName, std::string lastName);

    //getters and setters
    std::string getSpecialty();

    void setSpecialty(std::string s);
    
    void printDoctor() const;

    //private variables
private:
    std::string specialty;
};

#endif /* doctorType_hpp */
