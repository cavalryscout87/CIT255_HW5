/*
=========================================================================
 Author: Patrick Lockett
 Class name: CIT 233
 Time Log: Day 1- 10:00am - 2:00pm 4 hours
 Day 2- 11:00am - 2:00pm 3 hours
 
 Description: This program creates and inherents from different objects to create a program that will allow users to create a database for patient, doctor, and billing information.
 
 Input Variables: firstName, middleName, lastName, speciality, patientID, age, day, month, year
 
 Output Variables: firstName, middleName, lastName, speciality, patientID, age, day, month, year
 
=========================================================================
 */

#include <iostream>
#include <string>
#include "main.hpp"
#include "personType.hpp"
#include "doctorType.hpp"
#include "billType.hpp"
#include "patientType.hpp"
#include "dateType.hpp"

int main(){
    
    menu();
    
    return 0;
}
// Menu selection function
int menu(){
    int menuSelection = 0;
    
    while (menuSelection != 4){
    
        std::cout<<"Choose one number: \n 1 for the doctorType test \n 2 for billType Test \n 3 for the patientType test \n 4 to exit program."<<std::endl;
        std::cin>>menuSelection;
        
        switch (menuSelection) {
            case 1:
                doctorTest();
                break;
            case 2:
                billTypeTest();
                break;
            case 3:
                patientTypeTest();
                break;
            case 4:
                break;
                
            default:
                std::cout<<"\n You must enter a number 1-4"<<std::endl;
                break;
        }
    }
    return menuSelection;
}
void doctorTest(){
    std::string firstName = " ";
    std::string middleName = " ";
    std::string lastName = " ";
    std::string specialty = " ";
    
    std::cout<<"DOCTOR TEST"<<std::endl;
    
    std::cout<<"Doctor one information: "<<std::endl;
    doctorType doctorOne;
    std::cout<<"Enter Doctor's name "<<std::endl;
    enterNameInformation(firstName, middleName, lastName);
    std::cout<<"Enter doctors specialty:"<<std::endl;
    std::cin>>specialty;
    
    //Takes all user information and sets the information.
    doctorOne.setFullName(firstName, middleName, lastName);
    doctorOne.setSpecialty(specialty);
    doctorOne.printDoctor();
    
    //Takes information and uses a constructor to set the information.
    std::cout<<"Doctor two information: "<<std::endl;
    doctorType doctorTwo("Cardiologist", "Han","Chewbacca", "Solo");
    doctorTwo.printDoctor();
    
    // Takes some information, uses a constructor to set information and asks the user for the rest of the information.
    std::cout<<"Doctor three information: "<<std::endl;
    std::cout<<"Enter Doctor's name "<<std::endl;
    doctorType doctorThree("Anesthesiologist");
    enterNameInformation(firstName, middleName, lastName);
    doctorThree.setFullName(firstName, middleName, lastName);
    doctorThree.printDoctor();
}
void billTypeTest(){
    std::cout<<"BILLING TEST"<<std::endl;
    float roomCharges = 0;
    float doctorFee = 0;
    float pharmacyCharges = 0;
    int patientID = 0;
    
    //Bill one information
    std::cout<<"BILL ONE INFORMATION"<<std::endl;
    billType billOne;
    std::cout<<"Enter patient ID: "<<std::endl;
    std::cin>>patientID;
    std::cout<<"Enter pharmacy charges: "<<std::endl;
    std::cin>>pharmacyCharges;
    std::cout<<"Enter doctor fees: "<<std::endl;
    std::cin>>doctorFee;
    std::cout<<"Enter room charges: "<<std::endl;
    std::cin>>roomCharges;
    
    //Sets user accepted information and sets it to a particular bill object
    billOne.setPatientID(patientID);
    billOne.setPharmacyCharges(pharmacyCharges);
    billOne.setDoctorsFee(doctorFee);
    billOne.setRoomCharges(roomCharges);
    
    billOne.print();
    
    //Bill two information
    std::cout<<"BILL TWO INFORMATION"<<std::endl;
    billType billTwo(123456);
    std::cout<<"Enter pharmacy charges: "<<std::endl;
    std::cin>>pharmacyCharges;
    std::cout<<"Enter doctor fees: "<<std::endl;
    std::cin>>doctorFee;
    std::cout<<"Enter room charges: "<<std::endl;
    std::cin>>roomCharges;
    
    //Sets user accepted information and sets it to a particular bill object
    billTwo.setPharmacyCharges(pharmacyCharges);
    billTwo.setDoctorsFee(doctorFee);
    billTwo.setRoomCharges(roomCharges);
    
    billTwo.print();
    
    //Bill three information
    std::cout<<"BILL THREE INFORMATION"<<std::endl;
    billType billThree(234567,20.50);
    std::cout<<"Enter doctor fees: "<<std::endl;
    std::cin>>doctorFee;
    std::cout<<"Enter room charges: "<<std::endl;
    std::cin>>roomCharges;
    
    //Sets user accepted information and sets it to a particular bill object
    billThree.setDoctorsFee(doctorFee);
    billThree.setRoomCharges(roomCharges);
    
    billThree.print();
    
    //Bill four information
    std::cout<<"BILL FOUR INFORMATION"<<std::endl;
    billType billFour(345678, 30.21,10000);
    std::cout<<"Enter room charges: "<<std::endl;
    std::cin>>roomCharges;
    
    //Sets user accepted information and sets it to a particular bill object
    billFour.setRoomCharges(roomCharges);
    
    billFour.print();
    
    //Bill five information
    std::cout<<"BILL FIVE INFORMATION"<<std::endl;
    billType billFive(456789,40,100000,25000);
    billFive.print();
}

//Function that creates seven patient objects that accepts parameters as a constructor or will allow the user to add information to specific objects.
void patientTypeTest(){
    int day = 0;
    int month = 0;
    int year = 0;
    int patientID = 0;
    int age = 0;
    std::string firstName = " ";
    std::string middleName = " ";
    std::string lastName = " ";
    std::string specialty = " ";
    
    std::cout<<"PATIENT TEST"<<std::endl;
    
    std::cout<<"PATIENT ONE"<<std::endl;
    patientType patientOne;
    
    //Patient One
    std::cout<<"Enter Patient ID: "<<std::endl;
    std::cin>>patientID;
    patientOne.setPatientID(patientID);
    
    std::cout<<"Enter Age: "<<std::endl;
    std::cin>>age;
    patientOne.setAge(age);
    
    std::cout<<"Enter birth information"<<std::endl;
    enterDateInformation(day, month, year);
    patientOne.setBirthDate(day, month, year);
    
    std::cout<<"Enter admit information"<<std::endl;
    enterDateInformation(day, month, year);
    patientOne.setAdmitDate(day, month, year);
    
    std::cout<<"Enter discharge information"<<std::endl;
    enterDateInformation(day, month, year);
    patientOne.setDischargeDate(day, month, year);
    
    std::cout<<"Enter Doctor's name "<<std::endl;
    enterNameInformation(firstName, middleName, lastName);
    std::cout<<"Enter doctors specialty:"<<std::endl;
    std::cin>>specialty;
    
    //Takes all user information and sets the information.
    patientOne.setDoctor(specialty,firstName, middleName, lastName);
    
    patientOne.printPatient();
    
    //Patient Two
    std::cout<<"PATIENT TWO"<<std::endl;
    patientType patientTwo(123456);
    
    std::cout<<"Enter Age: "<<std::endl;
    std::cin>>age;
    patientTwo.setAge(age);
    
    std::cout<<"Enter birth information"<<std::endl;
    enterDateInformation(day, month, year);
    patientTwo.setBirthDate(day, month, year);
    
    std::cout<<"Enter admit information"<<std::endl;
    enterDateInformation(day, month, year);
    patientTwo.setAdmitDate(day, month, year);
    
    std::cout<<"Enter discharge information"<<std::endl;
    enterDateInformation(day, month, year);
    patientTwo.setDischargeDate(day, month, year);
    
    std::cout<<"Enter Doctor's name "<<std::endl;
    enterNameInformation(firstName, middleName, lastName);
    std::cout<<"Enter doctors specialty:"<<std::endl;
    std::cin>>specialty;
    
    //Takes all user information and sets the information.
    patientTwo.setDoctor(specialty,firstName, middleName, lastName);

    patientTwo.printPatient();
    
    //Patient Three
    std::cout<<"PATIENT THREE"<<std::endl;
    patientType patientThree(234567, 21);
    
    std::cout<<"Enter birth information"<<std::endl;
    enterDateInformation(day, month, year);
    patientThree.setBirthDate(day, month, year);
    
    std::cout<<"Enter admit information"<<std::endl;
    enterDateInformation(day, month, year);
    patientThree.setAdmitDate(day, month, year);
    
    std::cout<<"Enter discharge information"<<std::endl;
    enterDateInformation(day, month, year);
    patientThree.setDischargeDate(day, month, year);
    
    std::cout<<"Enter Doctor's name "<<std::endl;
    enterNameInformation(firstName, middleName, lastName);
    std::cout<<"Enter doctors specialty:"<<std::endl;
    std::cin>>specialty;
    
    //Takes all user information and sets the information.
    patientThree.setDoctor(specialty,firstName, middleName, lastName);

    patientThree.printPatient();
    
    //Patient Four
    std::cout<<"PATIENT FOUR"<<std::endl;
    patientType patientFour(345678, 25, 10, 6, 1990);
    std::cout<<"Enter admit information"<<std::endl;
    enterDateInformation(day, month, year);
    patientFour.setAdmitDate(day, month, year);
    
    std::cout<<"Enter discharge information"<<std::endl;
    enterDateInformation(day, month, year);
    patientFour.setDischargeDate(day, month, year);
    std::cout<<"Enter Doctor's name "<<std::endl;
    enterNameInformation(firstName, middleName, lastName);
    std::cout<<"Enter doctors specialty:"<<std::endl;
    std::cin>>specialty;
    
    //Takes all user information and sets the information.
    patientFour.setDoctor(specialty,firstName, middleName, lastName);
    
    patientFour.printPatient();
    
    //Patient Five
    std::cout<<"PATIENT FIVE"<<std::endl;
    patientType patientFive(456789, 27, 12, 7, 1991, 10, 1, 2016);
    std::cout<<"Enter discharge information"<<std::endl;
    enterDateInformation(day, month, year);
    patientFour.setDischargeDate(day, month, year);
    std::cout<<"Enter Doctor's name "<<std::endl;
    enterNameInformation(firstName, middleName, lastName);
    std::cout<<"Enter doctors specialty:"<<std::endl;
    std::cin>>specialty;
    
    //Takes all user information and sets the information.
    patientFive.setDoctor(specialty,firstName, middleName, lastName);

    patientFive.printPatient();
    
    //Patient Six
    std::cout<<"PATIENT SIX"<<std::endl;
    patientType patientSix(456789, 27, 12, 7, 1991, 10, 1, 2016, 10, 15, 2016);
    std::cout<<"Enter Doctor's name "<<std::endl;
    enterNameInformation(firstName, middleName, lastName);
    std::cout<<"Enter doctors specialty:"<<std::endl;
    std::cin>>specialty;
    
    //Takes all user information and sets the information.
    patientSix.setDoctor(specialty,firstName, middleName, lastName);

    patientSix.printPatient();
    
    //Patient Seven
    std::cout<<"PATIENT SEVEN"<<std::endl;
    patientType patientSeven(456789, 27, 12, 7, 1991, 10, 1, 2016, 10, 15, 2016,"Anesthesiologist","Han","Chewbacca","Solo");
    patientSeven.printPatient();

}

//Function to allow user to enter date information
void enterDateInformation(int &month, int &day, int &year){
   std::cout<<"Enter month: "<<std::endl;
    std::cin>>month;
    std::cout<<"Enter day: "<<std::endl;
    std::cin>>day;
   std::cout<<"Enter year: "<<std::endl;
    std::cin>>year;
}

//Function to allow user to enter name information
void enterNameInformation(std::string& firstName,std::string& middleName,std::string& lastName){
    std::cout<<"Enter the first name."<<std::endl;
    std::cin>>firstName;
    std::cout<<"Enter the middle name."<<std::endl;
    std::cin>>middleName;
    std::cout<<"Enter the last name."<<std::endl;
    std::cin>>lastName;
}







