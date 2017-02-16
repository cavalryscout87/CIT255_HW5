/*
 =========================================================================
 Author: Patrick Lockett
 Class name: CIT 233
 Time Log: Day 1- 10:00am - 2:00pm 4 hours
 Day 2- 11:00am - 2:00pm 3 hours
 
 Description: This is an object containing traits of people
 
 Input Variables: firstName, middleName, lastName, gender
 
 Output Function:
 
 =========================================================================
 */
//Design a class named personType

#include "personType.hpp"
#include <string>
#include <iostream>

//Constructors
personType::personType(std::string first, std::string middle, std::string last, std::string genderType){
    firstName = first;
    middleName = middle;
    lastName = last;
    gender = genderType;
}
//getters and setters

void personType::setFullName(std::string first, std::string middle, std::string last) {
    firstName = first;
    middleName = middle;
    lastName = last;
}
void personType::setGender(std::string g) {
	gender = g;
}

std::string personType::getFirstName() const {
    return firstName;
}

std::string personType::getMiddleName() const {
    return middleName;
}

std::string personType::getLastName() const {
    return lastName;
}

std::string personType::getGender() const {
    return gender;
}
//print statements
void personType::print() const {
    std::cout << firstName << " "<< middleName<<" " << lastName;
}
