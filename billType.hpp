/*
 =========================================================================
 Author: Patrick Lockett
 Class name: CIT 233
 Time Log: Day 1- 10:00am - 2:00pm 4 hours
 Day 2- 11:00am - 2:00pm 3 hours
 
 Description: Header file for billType
 =========================================================================
 */
#ifndef billType_hpp
#define billType_hpp

#include <stdio.h>

class billType{
public:
    //constructors
    billType();
    billType(int patientID);
    billType(int patientID, float pharmacyCharges);
    billType(int patientID, float pharmacyCharges, float doctorsFee);
    billType(int patientID, float pharmacyCharges, float doctorsFee, float roomCharges);
    //getters and setters
    void setPatientID(int patientID);
    int getPatientID()const;
    void setPharmacyCharges(int pharmacyCharges);
    int getPharmacyCharges()const;
    void setDoctorsFee(int doctorsFee);
    int getDoctorsFee()const;
    void setRoomCharges(int roomCharges);
    int getRoomCharges()const;
    //print statement
    void print();
    
    //private variables
private:
    int patientID;
    float pharmacyCharges;
    float doctorsFee;
    float roomCharges;
};

#endif /* billType_hpp */
