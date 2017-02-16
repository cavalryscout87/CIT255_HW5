/*
 =========================================================================
 Author: Patrick Lockett
 Class name: CIT 233
 Time Log: Day 1- 10:00am - 2:00pm 4 hours
 Day 2- 11:00am - 2:00pm 3 hours
 
 Description: Date object that allows user to set dates
 
 Input Variables: month, day, year
 
 Output Function: dMonth, dDay, yYear, getMonth(), getDay(), getYear(), printDate()
 =========================================================================
 */
//Design a class named dateType

#include "dateType.hpp"
#include <iostream>

//Constructor with parameters
dateType::dateType(int month, int day, int year){
    dMonth = month;
    dDay = day;
    dYear = year;
}

//getters and setters
int dateType::getDay() const{
	return dDay;
}

int dateType::getMonth() const{
	return dMonth;
}

int dateType::getYear() const{
	return dYear;
}
void dateType::setDate(int month, int day, int year){
    dMonth = month;
    dDay = day;
    dYear = year;
}
void dateType::printDate() const{
    std::cout << dMonth << ":" << dDay << ":" << dYear;
}


