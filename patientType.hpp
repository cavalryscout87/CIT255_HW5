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

#ifndef patientType_hpp
#define patientType_hpp

#include <stdio.h>
#include "personType.hpp"
#include "doctorType.hpp"
#include "dateType.hpp"

class patientType: public personType {
public:
    //constructors
    patientType();

    patientType(int patientID);

    patientType(int patientID, int age);

    patientType(int patientID, int age, int birthDay, int birthMonth, int birthYear);

    patientType(int patientID, int age, int birthDay, int birthMonth, int birthYear, int admitDay, int admitMonth, int admitYear);

    patientType(int patientID, int age, int birthDay, int birthMonth, int birthYear, int admitDay, int admitMonth, int admitYear, int dischargeDay, int dischargeMonth, int dischargeYear);

    patientType(int patientID, int age, int birthDay, int birthMonth, int birthYear, int admitDay, int admitMonth, int admitYear, int dischargeDay, int dischargeMonth, int dischargeYear, std::string specialty,std::string first,std::string middle, std::string last);
//getters and setters
    void setPatientID(int patientID);
    int getPatientID() const;

    void setAge(int age);
    int getAge() const;

    void setBirthDate(int birthDay, int birthMonth, int birthYear);
    void setAdmitDate(int admitDay, int admitMonth, int admitYear);
    void setDischargeDate(int dischargeDay, int dischargeMonth, int dischargeYear);
    void setDoctor( std::string specialty, std::string first, std::string middle, std::string last);
    
    //print statements
    void printPatient() const;
    void printDoctor() const;
    void printDischargeDate() const;
    void printAdmitDate() const;
    void printBirthDate() const;
    
    //private variables
private:
    int patientID;
    int patientAge;
    dateType birthDate;
    dateType admitDate;
    dateType dischargeDate;
    doctorType doctorInformation;
    
};

#endif /* patientType_hpp */
