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
#include <iostream>
#include "doctorType.hpp"
#include "personType.hpp"

// Constructors
doctorType::doctorType() {
	specialty = "";
}

doctorType::doctorType(std::string s) {
	specialty = s;
}

doctorType::doctorType(std::string s, std::string firstName, std::string middleName, std::string lastName) {
	specialty = s;
	setFullName(firstName, middleName, lastName);
}

//Getters and setters
std::string doctorType::getSpecialty() {
    return specialty;
}

void doctorType::setSpecialty(std::string s) {
	specialty = s;
}

//print statement
void doctorType::printDoctor() const{
    std::cout<<"Doctors information: "<<getFirstName()<<" "<<getMiddleName()<<" "<<getLastName()<<std::endl;
    std::cout<<"Doctors Specialty: "<<specialty<<std::endl;
}
