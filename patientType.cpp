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

#include "personType.hpp"
#include "patientType.hpp"
#include "doctorType.hpp"
#include "dateType.hpp"
#include "billType.hpp"

//constructors
patientType::patientType()
{
    patientID = 0;
    patientAge = 0;
}

patientType::patientType(int patient)
{
    patientID = patient;
}

patientType::patientType(int patient, int age)
{
    patientID = patient;
    patientAge = age;
}

patientType::patientType(int patient, int age, int bDay, int bMonth, int bYear) : birthDate(bDay, bMonth, bYear)
{
    patientID = patient;
    patientAge = age;
}

patientType::patientType(int patient, int age, int birthDay, int birthMonth, int birthYear, int admitDay, int admitMonth, int admitYear) : birthDate(birthDay, birthMonth, birthYear), admitDate(admitDay,admitMonth, admitYear)
{
    patientID = patient;
    patientAge = age;
}

patientType::patientType(int patient, int age, int birthDay, int birthMonth, int birthYear, int admitDay, int admitMonth, int admitYear, int dischargeDay, int dischargeMonth, int dischargeYear) : birthDate(birthDay, birthMonth, birthYear), admitDate(admitDay,admitMonth, admitYear), dischargeDate(admitDay,admitMonth,admitYear)
{
    patientID = patient;
    patientAge = age;
}

patientType::patientType(int patient, int age, int birthDay, int birthMonth, int birthYear, int admitDay, int admitMonth, int admitYear, int dischargeDay, int dischargeMonth, int dischargeYear, std::string specialty, std::string firstName, std::string middleName, std::string lastName ) :  birthDate(birthDay, birthMonth, birthYear), admitDate(admitDay,admitMonth, admitYear), dischargeDate(admitDay,admitMonth,admitYear), doctorInformation(specialty,firstName,middleName,lastName)
{
    patientID = patient;
    patientAge = age;
}

//Print patient statement
void patientType::printPatient() const
{
    std::cout<< "Patient ID number: "<< patientID<<std::endl;
    std::cout << "Patient age:  " << patientAge<<std::endl;
    doctorInformation.printDoctor();
    std::cout << "Birth Date: " << birthDate.getDay() << "-" << birthDate.getMonth() << "-" << birthDate.getYear()<<std::endl;
    std::cout << "Admit Date: " << admitDate.getDay() << "-" << admitDate.getMonth() << "-" << admitDate.getYear()<<std::endl;
    std::cout<< "Discharge Date: " << dischargeDate.getDay() << "-" << dischargeDate.getMonth() << "-" << dischargeDate.getYear()<<std::endl;
}

//getters and setters
void patientType::setPatientID(int patient)
{
    patientID = patient;
}

int patientType::getPatientID() const
{
    return patientID;
}

void patientType::setAge(int age)
{
    patientAge = age;
}

int patientType::getAge() const
{
    return patientAge;
}

void patientType::setBirthDate(int birthDay, int birthMonth, int birthYear)
{
    birthDate.setDate(birthMonth, birthDay, birthYear);
}

void patientType::printBirthDate() const
{
    birthDate.printDate();
}

void patientType::setAdmitDate(int admitDay, int admitMonth, int admitYear)
{
    admitDate.setDate(admitMonth, admitDay, admitYear);
}

void patientType::printAdmitDate() const
{
    admitDate.printDate();
}

void patientType::setDischargeDate(int dischargeDay, int dischargeMonth, int dischargeYear)
{
    dischargeDate.setDate(dischargeMonth, dischargeDay, dischargeYear);
}

void patientType::printDischargeDate() const
{
    dischargeDate.printDate();
}

void patientType::setDoctor(std::string first,std::string middle, std::string last, std::string specialty)
{
    doctorInformation.setFullName(first,middle,last);
    doctorInformation.setSpecialty(specialty);
}

//print doctor information
void patientType::printDoctor() const
{
    doctorInformation.printDoctor();
}

