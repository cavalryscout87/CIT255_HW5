/*
 =========================================================================
 Author: Patrick Lockett
 Class name: CIT 233
 Time Log: Day 1- 10:00am - 2:00pm 4 hours
 Day 2- 11:00am - 2:00pm 3 hours
 
 Description: Header file for personType.
 =========================================================================
 */

#ifndef personType_hpp
#define personType_hpp

#include <stdio.h>
#include <string>


class personType {
public:
    
//Constructor
    personType(std::string first = "", std::string middle = "", std::string last = "", std::string gender = "");
    
//Print Function
    void print() const;
    
//getters and setters
    void setFullName(std::string first, std::string middle, std::string last);

    void setGender(std::string g);
    std::string getFirstName() const;
    std::string getMiddleName() const;
    std::string getLastName() const;
    std::string getGender() const;
    int setInformation(std::string& first, std::string& middle, std::string& last, std::string& gender);

//private variables
private:
    //variable to store the first name
    std::string firstName;
    //variable to store middle name
    std::string middleName;
    //variable to store the last name
    std::string lastName;
    //variable to store the gender
    std::string gender;
};

#endif /* personType_hpp */
