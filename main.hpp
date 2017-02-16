/*
 =========================================================================
 Author: Patrick Lockett
 Class name: CIT 233
 Time Log: Day 1- 10:00am - 2:00pm 4 hours
 Day 2- 11:00am - 2:00pm 3 hours
 
 Description: Header file for main.cpp
 =========================================================================
 */

#ifndef main_hpp
#define main_hpp
#include <string>

int menu();
void personTest();
void doctorTest();
void billTypeTest();
void patientTypeTest();
void enterDateInformation(int&, int&, int&);
void enterNameInformation(std::string&, std::string&, std::string&);
#endif /* main_hpp */
