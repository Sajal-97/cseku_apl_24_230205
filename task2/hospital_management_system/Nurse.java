package hospital_management_system;

//**********************************************
// Descrition : Liskov Substitution Principle (LSP) for specific Nurse staffs,
//              extending the general Staff class
//              to provide detailed information for Nurses
//***********************************************

/**
 * Represents the Nurse Staffs extended from Staff
 */

public class Nurse extends Staff {
    private String shiftTime;
    private String wardName;

    //constractor
    public Nurse(String shiftTime, String wardName) {
        this.shiftTime = shiftTime;
        this.wardName = wardName;
    }

    // Getters and Setters
    public String getShiftTime() {
        return shiftTime;
    }

    public void setShiftTime(String shiftTime) {
        this.shiftTime = shiftTime;
    }

    public String getWardName() {
        return wardName;
    }

    public void setWardName(String wardName) {
        this.wardName = wardName;
    }
}
