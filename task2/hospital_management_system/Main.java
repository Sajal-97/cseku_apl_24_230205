package hospital_management_system;

import java.util.*;

//******************************************
//Description: Main class for running the Hospital Management System.
//******************************************

public class Main {
    public static void main(String[] args) {
        //for patient management
        IPatientManagement patient_Management = new PatientManagement();

        //for appointment management
        IAppointmentManagement appointment_Management = new AppointmentManagement();

        //for staff management
        IStaffManagement staff_Management = new StaffManagement();

        //for bill management
        IBillingManagement billing_Management = new BillingManagement();

        //adding new patient
        Patient Patient1 = 
            new Patient(01, "Alex", 60, "New York", "Fever");    
        patient_Management.addPatient(Patient1);
        
        //showing patient details
        patient_Management.showPatientDetails(01);

        //adding new appointment
        Appointment appointment1 =
            new Appointment(01, 01, "6th Nov", "In queue");
        appointment_Management.AddNewAppointment(appointment1);
        
        //Adding new doctor
        staff_Management.addStaff(new Doctor("Medicine", "9AM - 5PM"));

        //Adding new nurse
        staff_Management.addStaff(new Nurse("9AM - 5PM", "General"));

        //updating appointment status
        appointment_Management.updateAppointment(appointment1);

        //creating and processing bill
        billing_Management.generateNewBill(new Billing());
        billing_Management.processPayment(01, 500);
        billing_Management.showBillingDetails(01);

        //removing the patient
        patient_Management.removePatient(01);
    }
}
