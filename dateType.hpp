/*
 =========================================================================
 Author: Patrick Lockett
 Class name: CIT 233
 Time Log: Day 1- 10:00am - 2:00pm 4 hours
 Day 2- 11:00am - 2:00pm 3 hours
 
 Description: Header file for Datatype
 =========================================================================
 */

#ifndef dateType_hpp
#define dateType_hpp

#include <stdio.h>


class dateType{
public:
    
    //Constructor
    dateType(int month = 1, int day = 1, int year = 1900);
	
    //getters and setters
	void setDate(int month, int day, int year);
	int getDay() const;
	int getMonth() const;
	int getYear() const;

	//Function to output the date
	void printDate() const;

//private variables
private:
	int dMonth;
	int dDay;
	int dYear; 
   
};

#endif /* dateType_hpp */
