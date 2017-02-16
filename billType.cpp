/*
 =========================================================================
 Author: Patrick Lockett
 Class name: CIT 233
 Time Log: Day 1- 10:00am - 2:00pm 4 hours
 Day 2- 11:00am - 2:00pm 3 hours
 
 Description: This program creates and inherents from different objects to create a program that will allow users to create a database for patient, doctor, and billing information.
 
 Input Variables: patient, pharmCharges, docFee, roomCharge
 
 Output Function: patientID, pharmacyCharges,doctorsFee, roomCharges
=========================================================================
 */

#include "billType.hpp"
#include <iostream>

//constructors

billType::billType() {
	patientID = 0;
	pharmacyCharges = 0.0;
	doctorsFee = 0.0;
	roomCharges = 0.0;
}
billType::billType(int patient) {
	patientID = patient;
	pharmacyCharges = 0.0;
	doctorsFee = 0.0;
	roomCharges = 0.0;
}
billType::billType(int patient, float pharmCharges) {
	patientID = patient;
	pharmacyCharges = pharmCharges;
	doctorsFee = 0.0;
	roomCharges = 0.0;
}
billType::billType(int patient, float pharmCharges, float docFee) {
	patientID = patient;
	pharmacyCharges = pharmCharges;
	doctorsFee = docFee;
	roomCharges = 0.0;
}

billType::billType(int patient, float pharmCharges, float docFee, float roomCharge) {
	patientID = patient;
	pharmacyCharges = pharmCharges;
	doctorsFee = docFee;
	roomCharges = roomCharge;
}

//getters and setters
void billType::setPatientID(int patient) {
	patientID = patient;
}

int billType::getPatientID()const {
	return patientID;
}

void billType::setPharmacyCharges(int pharmCharges) {
	pharmacyCharges = pharmCharges;
}

int billType::getPharmacyCharges()const {
	return pharmacyCharges;
}

void billType::setDoctorsFee(int docFee) {
	doctorsFee = docFee;
}
int billType::getDoctorsFee()const {
	return doctorsFee;
}

void billType::setRoomCharges(int roomCharge) {
	roomCharges = roomCharge;
}
int billType::getRoomCharges()const {
	return roomCharges;
}

//print statement
void billType::print() {
    std::cout<<"Billing Information:"<<std::endl;
    std::cout<<"Patient ID: "<<getPatientID()<<std::endl;;
    std::cout<<"Pharmacy Charges: $"<<getPharmacyCharges()<<std::endl;
    std::cout<<"Doctors fees: $"<<getDoctorsFee()<<std::endl;
    std::cout<<"Room Charges: $"<<getRoomCharges()<<std::endl;
}
