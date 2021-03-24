#include<iostream> //header file for simple input out put
#include<string> //header file to use string

using namespace std;   
/*
          EMERGE EMPLOYEE SYSTEM
The EMERGE EMPLOYEE SYSTEM was designed to be used by the HR staff to manage the employees records.

Techniques used:
linked list algorithm, sort algorithm, and some basic CPP functions

The system developed by Abdulmalek Aldhafer for any question please send me email: ak_aldhafer@hotmail.com 
linkedin account: https://www.linkedin.com/in/abdulmalek-aldhafer-206485173 
Github account: https://github.com/akaldhafer
*/


struct EmployeeRecord { // this struct will hold employee details
	int EID; //employee number
	string Name; //employee name
	string Address; //employee address
	string Phone; //employee phone
	float Salary; //employee salary
	int OP;    //overall performance (1 to 4)
	int joinDate; // the joining date of the employee
	int leaveDate;// the leaving date of the employee
	int DID;      //department number
	string DName; // department name
	EmployeeRecord* Next1; //Management Department
};


// Drclare the Head of the linked list//
EmployeeRecord* Head1 = NULL; //employees linkedlist 
float salary, HouseP = 0.50, FoodP = 0.20, TransportP = 0.20;
int place = 0;
int position;

	//Database for Management Department//
int EIDFromData = 1; //employee number
string NameFromData = "Malik"; //employee name
string AddressFromData = "East Lake"; //employee address
string PhoneFromData = "01155981413"; //employee phone
float SalaryFromData = 30000; //employee salary
int OPFromData = 3;    //overall performance (1 to 4)
int joinDateD = 20180913; // the joining date of the employee
int leaveDateD = 20200913;// the leaving date of the employee
int DIDFromData = 1;      //department number
string DNameFromData = "Management Department"; // department name


	// Database for Customer Services Department//
int EIDFromData2 = 2; //employee number
string NameFromData2 = "Mohsen Aldhafer"; //employee name
string AddressFromData2 = "One south"; //employee address
string PhoneFromData2 = "01155981444"; //employee phone
float SalaryFromData2 = 25000; //employee salary
int OPFromData2 = 3;    //overall performance (1 to 4)
int joinDateD2 = 20180914; // the joinning date of the employee
int leaveDateD2 = 20240303;// the leaving date of the employee
int DIDFromData2 = 2;      //department number
string DNameFromData2 = "Customer Services Department"; // department name


	//My Database for Marketing Department//
int EIDFromData3 = 3; //employee number
string NameFromData3 = "Adham Aldhafer"; //employee name
string AddressFromData3 = "South city"; //employee address
string PhoneFromData3 = "01155981334"; //employee phone
float SalaryFromData3 = 20000; //employee salary
int OPFromData3 = 3;    //overall performance (1 to 4)
int joinDateD3 = 20180913; // the joining date of the employee
int leaveDateD3 = 20210516;// the leaving date of the employee
int DIDFromData3 = 3;      //department number
string DNameFromData3 = "Marketing Department"; // department name


	//My Database for Technical Support Department//
int EIDFromData4 = 4; //employee number
string NameFromData4 = "Ali"; //employee name
string AddressFromData4 = "One South"; //employee address
string PhoneFromData4 = "0115598124"; //employee phone
float SalaryFromData4 = 15000; //employee salary
int OPFromData4 = 4;    //overall performance (1 to 4)
int joinDateD4 = 20180915; // the joining date of the employee
int leaveDateD4 = 20220915;// the leaving date of the employee
int DIDFromData4 = 4;      //department number
string DNameFromData4 = "Technical Support Department"; // department name

//  User inputs//
int EIDFromUser; //employee number
string NameFromUser; //employee name
string AddressFromUser; //employee address
string PhoneFromUser; //employee phone
float SalaryFromUser; //employee salary
int OPFromUser;    //overall performance (1 to 4)
int joinDateFromUser; // the joining date of the employee
int leaveDateFromUser;// the leaving date of the employee
int DIDFromUser; // Department ID
// Declare fuction to be available for use anywhere
void InsertNodeAtArbitrary(int DataEID, string DataName, string DataAddress, string DataPhone, float DataSalary, int DataOP, int join, int leave, int DataDID, string DataDName, int index);
void DisplayEmployeeAll(EmployeeRecord* Head1);
void DisplayEmployee1(EmployeeRecord* Head1);
void DisplayEmployee2(EmployeeRecord* Head1);
void DisplayEmployee3(EmployeeRecord* Head1);
void DisplayEmployee4(EmployeeRecord* Head1);
bool DeleteEmployee(EmployeeRecord* position1, EmployeeRecord*& Head1);
EmployeeRecord* SearchEmployeeID(int EmpID, EmployeeRecord* Head1);
EmployeeRecord* SearchEIDAndUpdate(int EmpID, EmployeeRecord* Head1);
EmployeeRecord* SearchEIDAndUpdateAll(int EmpID, EmployeeRecord* Head1);
EmployeeRecord* SearchEmployeeOP(int EmpOP, EmployeeRecord* Head1);
EmployeeRecord* SortListByID1(EmployeeRecord* Head1);
EmployeeRecord* SortListBySalary1(EmployeeRecord* Head1);
EmployeeRecord* SortListByOP1(EmployeeRecord* Head1);
EmployeeRecord* DisplayAtoZ1(EmployeeRecord* Head1);
EmployeeRecord* SearchEmployeeName1(string EmpName, EmployeeRecord* Head1);
EmployeeRecord* SearchEID(int EmpID, EmployeeRecord* Head1);


// Declare the menus//
void Menu(); // main menu of the system
void DisplayMenu(); //displayingmenu
void AddRecodeMenu(); // inserting menu
void ModifyMenu();  // modifying menu
void CalculatePackage(); //calculating pakage menu
void Login();  // login menu
int main(); // the main function where the program will start


//This function will store the new employee details to the linked list
void InsertNodeAtArbitrary(int DataEID, string DataName, string DataAddress, string DataPhone, float DataSalary, int DataOP, int join, int leave, int DataDID, string DataDName, int index)
{
	EmployeeRecord* New_node = new EmployeeRecord; // create new node
	New_node->EID = DataEID;    // Assign the variable to its data
	New_node->Name = DataName;
	New_node->Address = DataAddress;
	New_node->Phone = DataPhone;
	New_node->Salary = DataSalary;
	New_node->OP = DataOP;
	New_node->joinDate = join;
	New_node->leaveDate = leave;
	New_node->DID = DataDID;
	New_node->DName = DataDName;
	if (index <= place) {
		if (index == 0) { //insert at the beginning
			EmployeeRecord* Position1 = new EmployeeRecord;
			Position1->EID = DataEID;    // Assign the variable to its data
			Position1->Name = DataName;
			Position1->Address = DataAddress;
			Position1->Phone = DataPhone;
			Position1->Salary = DataSalary;
			Position1->OP = DataOP;
			Position1->joinDate = join;
			Position1->leaveDate = leave;
			Position1->DID = DataDID;
			Position1->DName = DataDName;
			Position1->Next1 = Head1;
			Head1 = Position1;
		}
		else if (index == place) { //insert at th end of the linked list
			EmployeeRecord* Position2 = new EmployeeRecord; //create new node
			Position2->EID = DataEID;    // Assign the variable to its data
			Position2->Name = DataName;
			Position2->Address = DataAddress;
			Position2->Phone = DataPhone;
			Position2->Salary = DataSalary;
			Position2->OP = DataOP;
			Position2->joinDate = join;
			Position2->leaveDate = leave;
			Position2->DID = DataDID;
			Position2->DName = DataDName;
			Position2->Next1 = NULL;   // assign the next of the position to NULL
			if (Head1 == NULL) 
				Head1 = Position2; // insert at the beginning of the linked list
			else { //insert at the end of the linked list
				EmployeeRecord* MyCurrent1 = Head1;//create new node that equal the head 
				while (MyCurrent1->Next1 != NULL) {//while will work until it reaches the NULL(end of linked list)
					MyCurrent1 = MyCurrent1->Next1; // move from position to the next one until reach the end of the linked list
				}
				MyCurrent1->Next1 = Position2; // my last position->next in the linked list ->
			}                                 //-> will be equal the position that the new recode will be saved at
		}
		else { //insert at the given position
			EmployeeRecord* new_node = new EmployeeRecord; // create new node
			new_node->EID = DataEID;    // Assign the variable to its data
			new_node->Name = DataName;
			new_node->Address = DataAddress;
			new_node->Phone = DataPhone;
			new_node->Salary = DataSalary;
			new_node->OP = DataOP;
			new_node->joinDate = join;
			new_node->leaveDate = leave;
			new_node->DID = DataDID;
			new_node->DName = DataDName;
			EmployeeRecord* prev = Head1; //create new node and assgin it to the head of the linked list
			for (int i = 0; i < index - 1; i++)
				prev = prev->Next1;
			new_node->Next1 = prev->Next1;
			prev->Next1 = new_node;
		}		
	}
	else if(index > place)
	{
		EmployeeRecord* Position2 = new EmployeeRecord; // create new recode
		Position2->EID = DataEID;    // Assign the variable to its data
		Position2->Name = DataName;
		Position2->Address = DataAddress;
		Position2->Phone = DataPhone;
		Position2->Salary = DataSalary;
		Position2->OP = DataOP;
		Position2->joinDate = join;
		Position2->leaveDate = leave;
		Position2->DID = DataDID;
		Position2->DName = DataDName;
		Position2->Next1 = NULL;
		if (Head1 == NULL) {
			Head1 = Position2; // insert at the beginning of the linked list
		}
		else {
			EmployeeRecord* MyCurrent1 = Head1; //insert at the end of the linked list
			while (MyCurrent1->Next1 != NULL) {//while will work until it reaches the NULL(end of linked list)
				MyCurrent1 = MyCurrent1->Next1;
			}
			MyCurrent1->Next1 = Position2;
		}
	}
}
// This function will delete the employee details from the linked list by using the given employee ID
bool DeleteEmployee(EmployeeRecord* position1, EmployeeRecord*& Head1) {
	if (position1 == NULL) {
		cout << "No Employee ID Found In The Employees List To Process.!!" << endl; // this message will be displayed if the linked list still empty or the given employee ID is wrong 
		return false;
	}
	if (position1 == Head1) {
		Head1 = position1->Next1; // if the head is equale with the given employee ID, this head will be deleted and the next will be the new head 
		delete position1;
		place--;
		return true;
	}
	EmployeeRecord* MyCurrent1 = Head1;
	while (MyCurrent1 != NULL) {// while mycurrent is not equal to null the while loop will keep workingv
		if (MyCurrent1->Next1 == position1) { // if the given employee ID found in the linked list, its details will be deleted
			MyCurrent1->Next1 = position1->Next1;
			delete position1;
			place--;
			return true;
		}
		MyCurrent1 = MyCurrent1->Next1; // this will make while go from recode to the next one until it achieves the conditions 
	}
	return false;
}
// this function will display all the recodes inside the linked list 
void DisplayEmployeeAll(EmployeeRecord* Head1) { 
	EmployeeRecord* MyCurrent1 = Head1; 
	if (MyCurrent1 == NULL) {
		cout << "NO recode yet!!, please insert new recodes first..." << endl;
	}
	while (MyCurrent1 != NULL) { // while mycurrent is not equal to null the while loop will keep working
		
		cout << " Employee ID                 : " << MyCurrent1->EID << endl;  // this will display the details of the eamployee
		cout << " Employee Name               : " << MyCurrent1->Name << endl;
		cout << " Employee Address            : " << MyCurrent1->Address << endl;
		cout << " Employee Phone NO           : " << MyCurrent1->Phone << endl;
		cout << " Employee Salary             : " << MyCurrent1->Salary << endl;
		cout << " Employee Overall Performance: " << MyCurrent1->OP << endl;
		cout << " Employee Joining Date       : " << MyCurrent1->joinDate << endl;
		cout << " Employee Leaving Date       : " << MyCurrent1->leaveDate << endl;
		cout << " Department ID               : " << MyCurrent1->DID << endl;
		cout << " Department Name             : " << MyCurrent1->DName << endl;
		cout << "|-------------------------------------------------------------------------|" << endl;
		MyCurrent1 = MyCurrent1->Next1; // this will make while go from recode to the next one until it reaches the end of the linked list 
	}
}
// this function will display all the recodes inside the linked list for head1 which is the Management Department
void DisplayEmployee1(EmployeeRecord* Head1) {
	EmployeeRecord* MyCurrent1 = Head1;
	if (MyCurrent1 == NULL) {
		cout << "NO recode yet!!, please insert new recodes first..." << endl;
	}
	cout << "====  All the employees recodes for the management department  ====\n" << endl;
	while (MyCurrent1 != NULL) { // while mycurrent is not equal to null the while loop will keep working
		if (MyCurrent1->DName == DNameFromData) {
		
			cout << " Employee ID                 : " << MyCurrent1->EID << endl;  // this will display the details of the eamployee
			cout << " Employee Name               : " << MyCurrent1->Name << endl;
			cout << " Employee Address            : " << MyCurrent1->Address << endl;
			cout << " Employee Phone NO           : " << MyCurrent1->Phone << endl;
			cout << " Employee Salary             : " << MyCurrent1->Salary << endl;
			cout << " Employee Overall Performance: " << MyCurrent1->OP << endl;
			cout << " Employee Joining Date       : " << MyCurrent1->joinDate << endl;
			cout << " Employee Leaving Date       : " << MyCurrent1->leaveDate << endl;
			cout << " Department ID               : " << MyCurrent1->DID << endl;
			cout << " Department Name             : " << MyCurrent1->DName << endl;
			cout << "|-------------------------------------------------------------------------|" << endl;
		}	
		MyCurrent1 = MyCurrent1->Next1; // this will make while go from recode to the next one until it reaches the end of the linked list 
	}
}
// this function will display all the recodes inside the linked list customer service
void DisplayEmployee2(EmployeeRecord* Head1) {
	EmployeeRecord* MyCurrent1 = Head1;
	if (MyCurrent1 == NULL) {
		cout << "NO recode yet!!, please insert new recodes first..." << endl;
	}
	cout << "====  All the employees recodes for the Customer Service department  ====\n" << endl;
	while (MyCurrent1 != NULL) { // while mycurrent is not equal to null the while loop will keep working
		if (MyCurrent1->DName == DNameFromData2) {

			cout << " Employee ID                 : " << MyCurrent1->EID << endl;  // this will display the details of the eamployee
			cout << " Employee Name               : " << MyCurrent1->Name << endl;
			cout << " Employee Address            : " << MyCurrent1->Address << endl;
			cout << " Employee Phone NO           : " << MyCurrent1->Phone << endl;
			cout << " Employee Salary             : " << MyCurrent1->Salary << endl;
			cout << " Employee Overall Performance: " << MyCurrent1->OP << endl;
			cout << " Employee Joining Date       : " << MyCurrent1->joinDate << endl;
			cout << " Employee Leaving Date       : " << MyCurrent1->leaveDate << endl;
			cout << " Department ID               : " << MyCurrent1->DID << endl;
			cout << " Department Name             : " << MyCurrent1->DName << endl;
			cout << "|-------------------------------------------------------------------------|" << endl;
		}
		MyCurrent1 = MyCurrent1->Next1; // this will make while go from recode to the next one until it reaches the end of the linked list 
	}
}
// this function will display all the recodes inside the linked list for head1 which is the Marketing Department
void DisplayEmployee3(EmployeeRecord* Head1) {
	EmployeeRecord* MyCurrent1 = Head1;
	if (MyCurrent1 == NULL) {
		cout << "NO recode yet!!, please insert new recodes first..." << endl;
	}
	cout << "====  All the employees recodes for the Marketing department  ====\n" << endl;
	while (MyCurrent1 != NULL) { // while mycurrent is not equal to null the while loop will keep working
		if (MyCurrent1->DName == DNameFromData3) {

			cout << " Employee ID                 : " << MyCurrent1->EID << endl;  // this will display the details of the eamployee
			cout << " Employee Name               : " << MyCurrent1->Name << endl;
			cout << " Employee Address            : " << MyCurrent1->Address << endl;
			cout << " Employee Phone NO           : " << MyCurrent1->Phone << endl;
			cout << " Employee Salary             : " << MyCurrent1->Salary << endl;
			cout << " Employee Overall Performance: " << MyCurrent1->OP << endl;
			cout << " Employee Joining Date       : " << MyCurrent1->joinDate << endl;
			cout << " Employee Leaving Date       : " << MyCurrent1->leaveDate << endl;
			cout << " Department ID               : " << MyCurrent1->DID << endl;
			cout << " Department Name             : " << MyCurrent1->DName << endl;
			cout << "|-------------------------------------------------------------------------|" << endl;
		}
		MyCurrent1 = MyCurrent1->Next1; // this will make while go from recode to the next one until it reaches the end of the linked list 
	}
}
// this function will display all the recodes inside the linked list for head1 which is the technical support Department
void DisplayEmployee4(EmployeeRecord* Head1) {
	EmployeeRecord* MyCurrent1 = Head1;
	if (MyCurrent1 == NULL) {
		cout << "NO recode yet!!, please insert new recodes first..." << endl;
	}
	cout << "====  All the employees recodes for the Technical Support department  ====\n" << endl;
	while (MyCurrent1 != NULL) { // while mycurrent is not equal to null the while loop will keep working
		if (MyCurrent1->DName == DNameFromData4) {

			cout << " Employee ID                 : " << MyCurrent1->EID << endl;  // this will display the details of the eamployee
			cout << " Employee Name               : " << MyCurrent1->Name << endl;
			cout << " Employee Address            : " << MyCurrent1->Address << endl;
			cout << " Employee Phone NO           : " << MyCurrent1->Phone << endl;
			cout << " Employee Salary             : " << MyCurrent1->Salary << endl;
			cout << " Employee Overall Performance: " << MyCurrent1->OP << endl;
			cout << " Employee Joining Date       : " << MyCurrent1->joinDate << endl;
			cout << " Employee Leaving Date       : " << MyCurrent1->leaveDate << endl;
			cout << " Department ID               : " << MyCurrent1->DID << endl;
			cout << " Department Name             : " << MyCurrent1->DName << endl;
			cout << "|-------------------------------------------------------------------------|" << endl;
		}
		MyCurrent1 = MyCurrent1->Next1; // this will make while go from recode to the next one until it reaches the end of the linked list 
	}
}
// this function will sort the employees list in ascending order by using Eid
EmployeeRecord* SortListByID1(EmployeeRecord* Head1)
{                            // sorted list //
	EmployeeRecord* NewID = NULL;        // new node equals to null 
	EmployeeRecord** ppEmployee;        // ptr to ptr to node //
	EmployeeRecord** ppLargest;         // ptr to ptr to largest node //
	EmployeeRecord* LargestID;         // ptr to largest node //
	while (Head1 != NULL) {   // while head is not equal to null the while loop will keep working
		ppLargest = &Head1;             //  find largest node //
		ppEmployee = &((*ppLargest)->Next1);
		while (NULL != *ppEmployee) {
			if ((*ppEmployee)->EID > (*ppLargest)->EID)
				ppLargest = ppEmployee;
			ppEmployee = &((*ppEmployee)->Next1);

		}
		LargestID = *ppLargest;          // move node to the next node //
		*ppLargest = LargestID->Next1;
		LargestID->Next1 = NewID;
		NewID = LargestID;
	}
	return(NewID); 
}
// this function will sort the employees list in ascending order by using salary
EmployeeRecord* SortListBySalary1(EmployeeRecord* Head1)
{
	EmployeeRecord* NewSalary = NULL;                     // sorted list //
	EmployeeRecord** ppEmployee;                          // ptr to ptr to node //
	EmployeeRecord** ppLargest;                       // ptr to ptr to largest node //
	EmployeeRecord* LargestSalary;                        // ptr to largest node //
	while (Head1 != NULL) {     // while head is not equal to null the while loop will keep working
		ppLargest = &Head1;             //  find largest node //
		ppEmployee = &((*ppLargest)->Next1);
		while (NULL != *ppEmployee) {
			if ((*ppEmployee)->Salary > (*ppLargest)->Salary)
				ppLargest = ppEmployee;
			ppEmployee = &((*ppEmployee)->Next1);
		}
		LargestSalary = *ppLargest;          // move node to new //
		*ppLargest = LargestSalary->Next1;
		LargestSalary->Next1 = NewSalary;
		NewSalary = LargestSalary;
	}
	return(NewSalary);
}
// this function will sort the employees list in ascending order by using overall proformance
EmployeeRecord* SortListByOP1(EmployeeRecord* Head1)
{
	EmployeeRecord* NewOP = NULL;                     // sorted list //
	EmployeeRecord** ppEmployee;                          // ptr to ptr to node //
	EmployeeRecord** ppLargest;                       // ptr to ptr to largest node //
	EmployeeRecord* LargestID;                        // ptr to largest node //
	while (Head1 != NULL) {              // while head is not equal to null the while loop will keep working
		ppLargest = &Head1;             //  find largest node //
		ppEmployee = &((*ppLargest)->Next1);
		while (NULL != *ppEmployee) {
			if ((*ppEmployee)->OP > (*ppLargest)->OP)
				ppLargest = ppEmployee;
			ppEmployee = &((*ppEmployee)->Next1);
		}
		LargestID = *ppLargest;          // move node to new //
		*ppLargest = LargestID->Next1;
		LargestID->Next1 = NewOP;
		NewOP = LargestID;
	}
	return(NewOP);
}
// this function will use the given employee ID to search in the linked list 
EmployeeRecord* SearchEmployeeID(int EmpID, EmployeeRecord* Head1) {
	EmployeeRecord* MyCurrent1 = Head1;
	while (MyCurrent1 != NULL) { // while mycurrent is not equal to null the while loop will keep working
		if (MyCurrent1->EID == EmpID) { // if this condition is true, that means the given employee ID has been found inside the given linked list
			return MyCurrent1;
		}
		else
			MyCurrent1 = MyCurrent1->Next1; // this will make while go from recode to the next one until it achieves the conditions 
	}
	return NULL;
}
// this function will use the given employee ID to search in the linked list then display recode
EmployeeRecord* SearchEID(int EmpID, EmployeeRecord* Head1) {
	EmployeeRecord* MyCurrent1 = Head1;
	while (MyCurrent1 != NULL) { // while mycurrent is not equal to null the while loop will keep working
		if (MyCurrent1->EID == EmpID) { // if this condition is true, that means the given employee ID has been found inside the given linked list
			cout << " Employee ID                 : " << MyCurrent1->EID << endl;  // this will display the details of the eamployee
			cout << " Employee Name               : " << MyCurrent1->Name << endl;
			cout << " Employee Address            : " << MyCurrent1->Address << endl;
			cout << " Employee Phone NO           : " << MyCurrent1->Phone << endl;
			cout << " Employee Salary             : " << MyCurrent1->Salary << endl;
			cout << " Employee Overall Performance: " << MyCurrent1->OP << endl;
			cout << " Employee Joining Date       : " << MyCurrent1->joinDate << endl;
			cout << " Employee Leaving Date       : " << MyCurrent1->leaveDate << endl;
			cout << " Department ID               : " << MyCurrent1->DID << endl;
			cout << " Department Name             : " << MyCurrent1->DName << endl;
			cout << "|-------------------------------------------------------------------------|" << endl;
			return MyCurrent1;
		}
		else
			MyCurrent1 = MyCurrent1->Next1; // this will make while go from recode to the next one until it achieves the conditions 
	}
	return NULL;
}
// this function will use the given employee ID to search in the linked list then ask user to enter the new details 
EmployeeRecord* SearchEIDAndUpdate(int EmpID, EmployeeRecord* Head1) {
	EmployeeRecord* MyCurrent1 = Head1;
	while (MyCurrent1 != NULL) { // while mycurrent is not equal to null the while loop will keep working
		if (MyCurrent1->EID == EmpID) { // if this condition is true, that means the given employee ID has been found inside the given linked list
			getchar();
			cout << "Enter Employee Name: ";
			getline(cin, NameFromUser, '\n');
			cout << "Enter Employee Address: ";
			getline(cin, AddressFromUser, '\n');
			cout << "Enter Employee Phone: ";
			getline(cin, PhoneFromUser, '\n');
			MyCurrent1->Name = NameFromUser;
			MyCurrent1->Address = AddressFromUser;
			MyCurrent1->Phone = PhoneFromUser;
			cout <<"The New Details"<<endl;
			cout << " Employee ID                 : " << MyCurrent1->EID << endl;  // this will display the details of the eamployee
			cout << " Employee Name               : " << MyCurrent1->Name << endl;
			cout << " Employee Address            : " << MyCurrent1->Address << endl;
			cout << " Employee Phone NO           : " << MyCurrent1->Phone << endl;
			cout << " Employee Salary             : " << MyCurrent1->Salary << endl;
			cout << " Employee Overall Performance: " << MyCurrent1->OP << endl;
			cout << " Employee Joining Date       : " << MyCurrent1->joinDate << endl;
			cout << " Employee Leaving Date       : " << MyCurrent1->leaveDate << endl;
			cout << " Department ID               : " << MyCurrent1->DID << endl;
			cout << " Department Name             : " << MyCurrent1->DName << endl;
			cout << "|-------------------------------------------------------------------------|" << endl;
			return MyCurrent1;
		}
		else
			MyCurrent1 = MyCurrent1->Next1; // this will make while go from recode to the next one until it achieves the conditions 
	}
	return NULL;
}
// this function will use the given employee ID to search in the linked list then ask user to enter the new details 
EmployeeRecord* SearchEIDAndUpdateAll(int EmpID, EmployeeRecord* Head1) {
	EmployeeRecord* MyCurrent1 = Head1;
	while (MyCurrent1 != NULL) { // while mycurrent is not equal to null the while loop will keep working
		if (MyCurrent1->EID == EmpID) { // if this condition is true, that means the given employee ID has been found inside the given linked list
			getchar();
			cout << "Enter Employee Name: ";
			getline(cin, NameFromUser, '\n');
			cout << "Enter Employee Address: ";
			getline(cin, AddressFromUser, '\n');
			cout << "Enter Employee Phone: ";
			getline(cin, PhoneFromUser, '\n');
			cout << "Enter Employee Salary: ";
			cin >> SalaryFromUser;
			cout << "Enter Employee Overall porformance(1 to 4): ";
			cin >> OPFromUser;
			cout << "Enter Employee Joining Data(ex: 20200203; yyyyMnDay): ";
			cin >> joinDateFromUser;
			cout << "Enter Employee Leaving Data(ex: 20210203; yyyyMnDay): ";
			cin >> leaveDateFromUser;
			cout << "Enter Employee Department ID: ";
			cin >> DIDFromUser;
			MyCurrent1->Name = NameFromUser;
			MyCurrent1->Address = AddressFromUser;
			MyCurrent1->Phone = PhoneFromUser;
			MyCurrent1->Salary = SalaryFromUser;
			MyCurrent1->OP = OPFromUser;
			MyCurrent1->joinDate = joinDateFromUser;
			MyCurrent1->leaveDate = leaveDateFromUser;
			MyCurrent1->DID = DIDFromUser;
			cout << "The New Details" << endl;
			cout << " Employee ID                 : " << MyCurrent1->EID << endl;  // this will display the details of the eamployee
			cout << " Employee Name               : " << MyCurrent1->Name << endl;
			cout << " Employee Address            : " << MyCurrent1->Address << endl;
			cout << " Employee Phone NO           : " << MyCurrent1->Phone << endl;
			cout << " Employee Salary             : " << MyCurrent1->Salary << endl;
			cout << " Employee Overall Performance: " << MyCurrent1->OP << endl;
			cout << " Employee Joining Date       : " << MyCurrent1->joinDate << endl;
			cout << " Employee Leaving Date       : " << MyCurrent1->leaveDate << endl;
			cout << " Department ID               : " << MyCurrent1->DID << endl;
			cout << " Department Name             : " << MyCurrent1->DName << endl;
			cout << "|-------------------------------------------------------------------------|" << endl;
			return MyCurrent1;
		}
		else
			MyCurrent1 = MyCurrent1->Next1; // this will make while go from recode to the next one until it achieves the conditions 
	}
	return NULL;
}
// this function will use employee name to search in the linked list
EmployeeRecord* SearchEmployeeName1(string EmpName, EmployeeRecord* Head1) {
	EmployeeRecord* MyCurrent1 = Head1;
	
	while (MyCurrent1 != NULL) { // while mycurrent is not equal to null the while loop will keep working
		if (MyCurrent1->Name == EmpName) { // if this condition is true, that means the given employee ID has been found inside the given linked list
			cout << " Employee ID                 : " << MyCurrent1->EID << endl;  // this will display the details of the eamployee
			cout << " Employee Name               : " << MyCurrent1->Name << endl;
			cout << " Employee Address            : " << MyCurrent1->Address << endl;
			cout << " Employee Phone NO           : " << MyCurrent1->Phone << endl;
			cout << " Employee Salary             : " << MyCurrent1->Salary << endl;
			cout << " Employee Overall Performance: " << MyCurrent1->OP << endl;
			cout << " Employee Joining Date       : " << MyCurrent1->joinDate << endl;
			cout << " Employee Leaving Date       : " << MyCurrent1->leaveDate << endl;
			cout << " Department ID               : " << MyCurrent1->DID << endl;
			cout << " Department Name             : " << MyCurrent1->DName << endl;
			cout << "|-------------------------------------------------------------------------|" << endl;
			return MyCurrent1;	
		}
		else {
			MyCurrent1 = MyCurrent1->Next1; // this will make while go from recode to the next one until it achieves the conditions 
		}
	}
	return NULL;
}
// this function will use the given employee overall performance to search in the linked list 
EmployeeRecord* SearchEmployeeOP(int EmpOP, EmployeeRecord* Head1) {
	EmployeeRecord* MyCurrent1 = Head1;
	while (MyCurrent1 != NULL) { // while mycurrent is not equal to null the while loop will keep working
		if (MyCurrent1->OP == EmpOP) { // if this condition is true, that means the given employee ID has been found inside the given linked list
			cout << " Employee ID                 : " << MyCurrent1->EID << endl;  // this will display the details of the eamployee
			cout << " Employee Name               : " << MyCurrent1->Name << endl;
			cout << " Employee Address            : " << MyCurrent1->Address << endl;
			cout << " Employee Phone NO           : " << MyCurrent1->Phone << endl;
			cout << " Employee Salary             : " << MyCurrent1->Salary << endl;
			cout << " Employee Overall Performance: " << MyCurrent1->OP << endl;
			cout << " Employee Joining Date       : " << MyCurrent1->joinDate << endl;
			cout << " Employee Leaving Date       : " << MyCurrent1->leaveDate << endl;
			cout << " Department ID               : " << MyCurrent1->DID << endl;
			cout << " Department Name             : " << MyCurrent1->DName << endl;
			cout << "|-------------------------------------------------------------------------|" << endl;
		}	
		MyCurrent1 = MyCurrent1->Next1; // this will make while go from recode to the next one until it achieves the conditions 		
	}
	return NULL;
}
//this function will sort employees recodes in ascending order from A to Z by using Employee name
EmployeeRecord* DisplayAtoZ1(EmployeeRecord* Head1)
{
	EmployeeRecord* NewName = NULL;                   // sorted list             //
	EmployeeRecord** ppEmployee;                     // ptr to ptr to node      //
	EmployeeRecord** ppLast;                        // ptr to ptr to last node //
	EmployeeRecord* LastName;                      // ptr to last node        //
	while (Head1 != NULL) { // while head is not equal to null the while loop will keep working
		ppLast = &Head1;                   //  find last node Z       //
		ppEmployee = &((*ppLast)->Next1);
		while (NULL != *ppEmployee) {
			if ((*ppEmployee)->Name > (*ppLast)->Name)
				ppLast = ppEmployee;
			ppEmployee = &((*ppEmployee)->Next1);
		}
		LastName = *ppLast;          // move node to new //
		*ppLast = LastName->Next1;
		LastName->Next1 = NewName;
		NewName = LastName;
	}
	return(NewName);
}

// These are all the menus of the system
void Menu() {
	string searchname;
	char choice1;
	int DeletID, SearchOP, SearchID;
	
	do {
		cerr << "<**>___________________________________________________________________________<**> \n" 
		        "                       EMERGE EMPLOYEE SYSTEM\n" 
		        "    ___________________________________________________________________________\n\n"
		        "    A. Add An Employee Record                    B. Display Employee Records \n"
		        "    C. Search By Employee ID                     D. Search by Employee Name \n"
		    	"    E. Modify An Employee Record                 F. Delete An Employee Record \n"
		        "    G. Search By Employee Overall Performance \n"
		        "    H. Sort And Display By Employee ID in Ascending Order \n"
		        "    I. Sort And Display By Employee Salary in Ascending Order\n"
		        "    J. Sort And Display By Employee Overall Performance in Ascending Order\n"
		        "    K. Calculate Salary Package Of An Employee\n"
		        "    L. Exit                       M. Logout\n"
		        "    ____________________________________________________________________________\n" << endl;
		cout << "Enter one choice: ";
		cin >> choice1;
		switch (choice1)
		{
		case 'A': //add an employee recode
		case 'a':
			system("cls");
			AddRecodeMenu();
			break;
		case 'B': //display all employee recode
		case 'b':
			system("cls");
			DisplayMenu();			
			break;
		case 'C': //Search by Employee ID
		case 'c':
			system("cls");
			cout << "Enter Employee ID To Search: ";
			cin >> SearchID;
			SearchEID(SearchID, Head1);
			break;
		case 'D':
		case 'd': // Search by employee name
			system("cls");
			getchar();
			cout << "Enter Employee Name To Search: ";
			getline(cin, searchname, '\n');
			SearchEmployeeName1(searchname, Head1);
			break;
		case 'E': 
		case 'e': //Modify an Employee Record
			system("cls");
			ModifyMenu();
			break;
		case 'F': 
		case 'f': //Delete an Employee Record
			system("cls");
			cout << "Enter Employee ID To Delete: ";
			cin >> DeletID;
			if (DeleteEmployee(SearchEmployeeID(DeletID, Head1), Head1) == true) {
				cout << "Employee Details Deleted..." << endl;
			}
			break;
		case 'G': //Search by Employee overall performancec
		case 'g':
			system("cls");
			cout << "Enter Employee Overall Performance To Search: ";
			cin >> SearchOP;
			SearchEmployeeOP(SearchOP, Head1);
			break;
		case 'H': //Sort and display by Employee ID in ascending order
		case 'h':
			system("cls");
			DisplayEmployeeAll(SortListByID1(Head1));
			break;
		case 'I': //Sort and display by Employee Salary in ascending order
		case 'i':
			system("cls");
			DisplayEmployeeAll(SortListBySalary1(Head1));
			break;
		case 'J': //Sort and display by Employee Overall Performance in ascending order
		case 'j':
			system("cls");
			DisplayEmployeeAll(SortListByOP1(Head1));
			break;
		case 'K': //Calculate salary package of an employee
		case 'k':
			system("cls");
			CalculatePackage();
			break;
		case 'L': // exit from the system
		case 'l':
			system("cls");
			exit(1);
			break;
		case 'M':
		case 'm':
			system("cls");
			cout << "\n\n***     You Have Logged Out Successfuly...!   ***" << endl;
			system("pause");
			system("cls");
			Login();
			break;
		default: // if user enter wrong choice that is not available in the menu
			cout << "\n**      !! Wrong choice, Please retry again :]...      **" << endl;
			break;
		}
		system("pause");
		system("cls");
	} while (1); 
}
// THE MENU OF ADDING NEW EMPLOYEE RECODE
void AddRecodeMenu() {

	char choice2;
	int newstaff;
	do {
		cout << "_______________________________________________________________________________ \n" << endl;
		cout << "                     CREATING NEW EMPLOYEE RECODE MENU\n" << endl;
		cout << "_______________________________________________________________________________ \n" << endl;
		cout << " 1. New Recode For Management Employees." << endl;
		cout << " 2. New Recode For Customer service Employees." << endl;
		cout << " 3. New Recode For Marketing Employees." << endl;
		cout << " 4. New Recode For Technical Support Employees." << endl;
		cout << " 5. Back To The Main Menu." << endl;
		cout << "_______________________________________________________________________________ \n" << endl;
		cout << "Enter one choice: ";
		cin >> choice2;
		switch (choice2)
		{
		case '1':
			system("cls");
			cout << "How many employee you want to add: ";
			cin >> newstaff;
			for (int i = 1; i <= newstaff; i++) {
				do
				{
					cout << "Enter Employee " << i << " ID: ";
					cin >> EIDFromUser;
					if (SearchEmployeeID(EIDFromUser, Head1) != 0) {
						cout << "This Employee ID Already Used, Please retype new one" << endl;
					}
				} while (SearchEmployeeID(EIDFromUser, Head1) != 0);
				getchar(); 
				cout << "Enter Employee " << i << " Name: ";
				getline(cin, NameFromUser, '\n');
				cout << "Enter Employee " << i << " Address: ";
				getline(cin, AddressFromUser, '\n');
				cout << "Enter Employee " << i << " Phone: ";
				getline(cin, PhoneFromUser, '\n');
				cout << "Enter Employee Salary: ";
				cin >> salary;
				HouseP = HouseP * salary;
				cout << "The House Rent Allowance Per(50% of basic salary): " << HouseP << endl;
				FoodP = FoodP * salary;
				cout << "Food Allowance Per(20% of basic salary): " << FoodP << endl;
				TransportP = TransportP * salary;
				cout << "Transport Allowance Per(20% of basic salary): " << TransportP << endl;
				SalaryFromUser = HouseP + FoodP + TransportP + salary;
				cout << "The Total Salary: " << SalaryFromUser << endl;
				cout << "Enter Employee " << i << " Overall porformance(1 to 4): ";
				cin >> OPFromUser;
				cout << "Enter Employee " << i << " Joining Data(ex: 20200203; yyyyMnDay): ";
				cin >> joinDateFromUser;
				cout << "Enter Employee " << i << " Leaving Data(ex: 20210203; yyyyMnDay): ";
				cin >> leaveDateFromUser;
				cout << "Enter Employee " << i << " Department ID: ";
				cin >> DIDFromUser;
				cout << "Enter the position you want to save the recode: ";
				cin >> position;
				InsertNodeAtArbitrary(EIDFromUser, NameFromUser, AddressFromUser, PhoneFromUser, SalaryFromUser, OPFromUser, joinDateFromUser, leaveDateFromUser, DIDFromUser, DNameFromData, position);
				place++;
				
			}
			cout << "Done successfuly....." << endl;
			break;
		case '2':
			system("cls");
			cout << "How many employee you want to add: ";
			cin >> newstaff;
			for (int i = 1; i <= newstaff; i++) {
				do
				{
					cout << "Enter Employee " << i << " ID: ";
					cin >> EIDFromUser;
					if (SearchEmployeeID(EIDFromUser, Head1) != 0) {
						cout << "This Employee ID Already Used, Please retype new one" << endl;
					}
				} while (SearchEmployeeID(EIDFromUser, Head1) != 0);
				getchar();
				cout << "Enter Employee " << i << " Name: ";
				getline(cin, NameFromUser, '\n');
				cout << "Enter Employee " << i << " Address: ";
				getline(cin, AddressFromUser, '\n');
				cout << "Enter Employee " << i << " Phone: ";
				getline(cin, PhoneFromUser, '\n');
				cout << "Enter Employee Salary: ";
				cin >> salary;
				HouseP = HouseP * salary;
				cout << "The House Rent Allowance Per(50% of basic salary): " << HouseP << endl;
				FoodP = FoodP * salary;
				cout << "Food Allowance Per(20% of basic salary): " << FoodP << endl;
				TransportP = TransportP * salary;
				cout << "Transport Allowance Per(20% of basic salary): " << TransportP << endl;
				SalaryFromUser = HouseP + FoodP + TransportP + salary;
				cout << "The Total Salary: " << SalaryFromUser << endl;
				cout << "Enter Employee " << i << " Overall porformance(1 to 4): ";
				cin >> OPFromUser;
				cout << "Enter Employee " << i << " Joining Data(ex: 20200203; yyyyMnDay): ";
				cin >> joinDateFromUser;
				cout << "Enter Employee " << i << " Leaving Data(ex: 20210203; yyyyMnDay): ";
				cin >> leaveDateFromUser;
				cout << "Enter Employee " << i << " Department ID: ";
				cin >> DIDFromUser;
				cout << "Enter the position you want to save the recode: ";
				cin >> position;
				InsertNodeAtArbitrary(EIDFromUser, NameFromUser, AddressFromUser, PhoneFromUser, SalaryFromUser, OPFromUser, joinDateFromUser, leaveDateFromUser, DIDFromUser, DNameFromData2, position);
				place++;
			}
			cout << "Done successfuly....." << endl;
			break;
		case '3':
			system("cls");
			cout << "How many employee you want to add: ";
			cin >> newstaff;
			for (int i = 1; i <= newstaff; i++) {
				do
				{
					cout << "Enter Employee " << i << " ID: ";
					cin >> EIDFromUser;
					if (SearchEmployeeID(EIDFromUser, Head1) != 0) {
						cout << "This Employee ID Already Used, Please retype new one" << endl;
					}
				} while (SearchEmployeeID(EIDFromUser, Head1) != 0);
				getchar();
				cout << "Enter Employee " << i << " Name: ";
				getline(cin, NameFromUser, '\n');
				cout << "Enter Employee " << i << " Address: ";
				getline(cin, AddressFromUser, '\n');
				cout << "Enter Employee " << i << " Phone: ";
				getline(cin, PhoneFromUser, '\n');
				cout << "Enter Employee Salary: ";
				cin >> salary;
				HouseP = HouseP * salary;
				cout << "The House Rent Allowance Per(50% of basic salary): " << HouseP << endl;
				FoodP = FoodP * salary;
				cout << "Food Allowance Per(20% of basic salary): " << FoodP << endl;
				TransportP = TransportP * salary;
				cout << "Transport Allowance Per(20% of basic salary): " << TransportP << endl;
				SalaryFromUser = HouseP + FoodP + TransportP + salary;
				cout << "The Total Salary: " << SalaryFromUser << endl;
				cout << "Enter Employee " << i << " Overall porformance(1 to 4): ";
				cin >> OPFromUser;
				cout << "Enter Employee " << i << " Joining Data(ex: 20200203; yyyyMnDay): ";
				cin >> joinDateFromUser;
				cout << "Enter Employee " << i << " Leaving Data(ex: 20210203; yyyyMnDay): ";
				cin >> leaveDateFromUser;
				cout << "Enter Employee " << i << " Department ID: ";
				cin >> DIDFromUser;
				cout << "Enter the position you want to save the recode: ";
				cin >> position;
				InsertNodeAtArbitrary(EIDFromUser, NameFromUser, AddressFromUser, PhoneFromUser, SalaryFromUser, OPFromUser, joinDateFromUser, leaveDateFromUser, DIDFromUser, DNameFromData3, position);
				place++;
			}
			cout << "Done successfuly....." << endl;
			break;
		case '4':
			system("cls");
			cout << "How many employee you want to add: ";
			cin >> newstaff;
			for (int i = 1; i <= newstaff; i++) {
				do
				{
					cout << "Enter Employee " << i << " ID: ";
					cin >> EIDFromUser;
					if (SearchEmployeeID(EIDFromUser, Head1) != 0) {
						cout << "This Employee ID Already Used, Please retype new one" << endl;
					}
				} while (SearchEmployeeID(EIDFromUser, Head1) != 0);
				getchar();
				cout << "Enter Employee " << i << " Name: ";
				getline(cin, NameFromUser, '\n');
				cout << "Enter Employee " << i << " Address: ";
				getline(cin, AddressFromUser, '\n');
				cout << "Enter Employee " << i << " Phone: ";
				getline(cin, PhoneFromUser, '\n');
				cout << "Enter Employee Salary: ";
				cin >> salary;
				HouseP = HouseP * salary;
				cout << "The House Rent Allowance Per(50% of basic salary): " << HouseP << endl;
				FoodP = FoodP * salary;
				cout << "Food Allowance Per(20% of basic salary): " << FoodP << endl;
				TransportP = TransportP * salary;
				cout << "Transport Allowance Per(20% of basic salary): " << TransportP << endl;
				SalaryFromUser = HouseP + FoodP + TransportP + salary;
				cout << "The Total Salary: " << SalaryFromUser << endl;
				cout << "Enter Employee " << i << " Overall porformance(1 to 4): ";
				cin >> OPFromUser;
				cout << "Enter Employee " << i << " Joining Data(ex: 20200203; yyyyMnDay): ";
				cin >> joinDateFromUser;
				cout << "Enter Employee " << i << " Leaving Data(ex: 20210203; yyyyMnDay): ";
				cin >> leaveDateFromUser;
				cout << "Enter Employee " << i << " Department ID: ";
				cin >> DIDFromUser;
				cout << "Enter the position you want to save the recode: ";
				cin >> position;
				InsertNodeAtArbitrary(EIDFromUser, NameFromUser, AddressFromUser, PhoneFromUser, SalaryFromUser, OPFromUser, joinDateFromUser, leaveDateFromUser, DIDFromUser, DNameFromData4, position);
				place++;
			}
			cout << "Done successfuly....." << endl;
			break;
		case '5':
			system("cls");
			Menu();
			break;
		default:
			cout << "\n!! Wrong choice, Please retry again :]..." << endl;
			break;
		}
		system("pause");
		system("cls");
	} while (1);
}
//THE MENU OF DISPLAYING EMPLOYEE RECODE
void DisplayMenu() {
	char choice3;
	do
	{
		cout << "_______________________________________________________________________________ \n" << endl;
		cout << "                       DISPLAYING MENU\n" << endl;
		cout << "_______________________________________________________________________________ \n" << endl;
		cout << " 1. Display All Records." << endl;
		cout << " 2. Display All Records By Name in ascending order." << endl;
		cout << " 3. Display All Records For Management Department Only." << endl;
		cout << " 4. Display All Records For Customer Services Department Only." << endl;
		cout << " 5. Display All Records For Marketing Department Only." << endl;
		cout << " 6. Display All Records For Technical Support Department Only." << endl;
		cout << " 7. Back To The Main Menu." << endl;
		cout << "_______________________________________________________________________________ \n" << endl;
		cout << "Enter one choice: ";
		cin >> choice3;
		switch (choice3)
		{
		case '1':
			system("cls");
			cout << " --------------------------Employees List--------------------------" << endl;			
			DisplayEmployeeAll(Head1);
			break;
		case '2':
			system("cls");
			cout << " --------------------------Employees List--------------------------" << endl;
			DisplayEmployeeAll(DisplayAtoZ1(Head1));
			break;
		case '3':
			system("cls");
			cout << " --------------------------Employees List--------------------------" << endl;
			DisplayEmployee1(Head1);
			break;
		case '4':
			system("cls");
			cout << " --------------------------Employees List--------------------------" << endl;
			DisplayEmployee2(Head1);
			break;
		case '5':
			system("cls");
			cout << " --------------------------Employees List--------------------------" << endl;
			DisplayEmployee3(Head1);
			break;
		case '6':
			system("cls");
			cout << " --------------------------Employees List--------------------------" << endl;
			DisplayEmployee4(Head1);
			break;
		case '7':
			system("cls");
			Menu();
			break;
		default:
			cout << "\n!! Wrong choice, Please retry again :]..." << endl;
			break;
		}
		system("pause");
		system("cls");
	} while (1);
	
}
// THE MENU OF MODIFYING EMPLOYEE RECODE
void ModifyMenu() {
	char choice6;
	int ModifyID;
	do
	{
		cout << "_______________________________________________________________________________ \n" << endl;
		cout << "            MODIFYING AN EMPLOYEE RECODE BY EID MENU\n" << endl;
		cout << "_______________________________________________________________________________ \n" << endl;
		cout << " What type of modify would you like:" << endl;
		cout << " 1. Modify Name, Address, and Phone NO." << endl;
		cout << " 2. Modify All Employee Details" << endl;
		cout << " 3. Back To The Main Menu." << endl;
		cout << "_______________________________________________________________________________ \n" << endl;
		cout << "Enter one choice: ";
		cin >> choice6;
		switch (choice6)
		{
		case '1':
			system("cls");
			cout << "Enter Employee ID To Modify: ";
			cin >> ModifyID;
			SearchEIDAndUpdate(ModifyID, Head1);
			cout << "Done successfuly...." << endl;
			break;
		case '2':
			system("cls");
			cout << "Enter Employee ID To Modify: ";
			cin >> ModifyID;
			SearchEIDAndUpdateAll(ModifyID, Head1);
			cout << "Done successfuly...." << endl;
			break;
		case '3':
			system("cls");
			Menu();
			break;
		default:
			cout << "\n!! Wrong choice, Please retry again :]..." << endl;
			break;
		}
		system("pause");
		system("cls");
	} while (1);
	
}
// THE MENU OF CALCULATING AN EMPLOYEE SALARY PACKAGE
void CalculatePackage() {
	char option, selection;
	
	do
	{
		cout << "_______________________________________________________________________________ \n" << endl;
		cout << "            Calculating Salary Package OF An Employee Menu\n" << endl;
		cout << "_______________________________________________________________________________ \n" << endl;
		cout << " 1. For Management Employees." << endl;
		cout << " 2. For Customer service Employees." << endl;
		cout << " 3. For Marketing Employees." << endl;
		cout << " 4. For Technical Support Employees." << endl;
		cout << " 5. Back To The Main Menu." << endl;
		cout << "_______________________________________________________________________________ \n" << endl;
		cout << "Enter one choice: ";
		cin >> option;
		switch (option)
		{
		case '1':
			system("cls");
			cout << "Enter Employee Salary: ";
			cin >> salary;
			HouseP = HouseP * salary;
			cout << "The House Rent Allowance Per(50% of basic salary): "<<HouseP<<endl;
			FoodP = FoodP * salary;
			cout << "Food Allowance Per(20% of basic salary): "<<FoodP<<endl;
			TransportP = TransportP * salary;
			cout << "Transport Allowance Per(20% of basic salary): "<<TransportP<<endl;
			SalaryFromUser = HouseP + FoodP + TransportP + salary;
			cout << "The Total Salary: " << SalaryFromUser << endl;
			cout << "Would You Like To Add This Employee To List? "<<endl;
			cout << " 1. Yes             2. NO and back to the menu"<<endl;
			cout << "Enter Your Option: ";
			cin >> selection;
			do {
				if (selection == '1') {
					system("cls");
					cout << "Please Fill Up The Needed Details: " << endl;
					do
					{
						cout << "Enter Employee ID: ";
						cin >> EIDFromUser;
						if (SearchEmployeeID(EIDFromUser, Head1) != 0) {
							cout << "This Employee ID Already Used, Please retype new one" << endl;
						}
					} while (SearchEmployeeID(EIDFromUser, Head1) != 0);
					getchar();
					cout << "Enter Employee Name: ";
					getline(cin, NameFromUser, '\n');
					cout << "Enter Employee Address: ";
					getline(cin, AddressFromUser, '\n');
					cout << "Enter Employee Phone: ";
					getline(cin, PhoneFromUser, '\n');
					cout << "Enter Employee Overall porformance(1 to 4): ";
					cin >> OPFromUser;
					cout << "Enter Employee Joining Data(ex: 20200203; yyyyMnDay): ";
					cin >> joinDateFromUser;
					cout << "Enter Employee Leaving Data(ex: 20210203; yyyyMnDay): ";
					cin >> leaveDateFromUser;
					cout << "Enter Employee Department ID: ";
					cin >> DIDFromUser;
					cout << "Enter the position you want to save the recode: ";
					cin >> position;
					InsertNodeAtArbitrary(EIDFromUser, NameFromUser, AddressFromUser, PhoneFromUser, SalaryFromUser, OPFromUser, joinDateFromUser, leaveDateFromUser, DIDFromUser, DNameFromData, position);
					place++;
					cout << "Done successfuly...." << endl;
					system("pause");
					system("cls");
					CalculatePackage();
				}
				else if (selection == '2') {
					system("cls");
					CalculatePackage();
				}
				else {
					cout << "\n!! Wrong choice, Please retry again :]..." << endl;
					system("pause");
					system("cls");
					CalculatePackage();
				}
				
			} while (1);
			break;
		case '2':
			system("cls");
			cout << "Enter Employee Salary: ";
			cin >> salary;
			HouseP = HouseP * salary;
			cout << "The House Rent Allowance Per(50% of basic salary): " << HouseP << endl;
			FoodP = FoodP * salary;
			cout << "Food Allowance Per(20% of basic salary): " << FoodP << endl;
			TransportP = TransportP * salary;
			cout << "Transport Allowance Per(20% of basic salary): " << TransportP << endl;
			SalaryFromUser = HouseP + FoodP + TransportP + salary;
			cout << "The Total Salary: " << SalaryFromUser << endl;
			cout << "Would You Like To Add This Employee To List? " << endl;
			cout << " 1. Yes             2. NO and back to the menu" << endl;
			cout << "Enter Your Option: ";
			cin >> selection;
			do {
				if (selection == '1') {
					system("cls");
					cout << "Please Fill Up The Needed Details: " << endl;
					do
					{
						cout << "Enter Employee ID: ";
						cin >> EIDFromUser;
						if (SearchEmployeeID(EIDFromUser, Head1) != 0) {
							cout << "This Employee ID Already Used, Please retype new one" << endl;
						}
					} while (SearchEmployeeID(EIDFromUser, Head1) != 0);
					getchar();
					cout << "Enter Employee Name: ";
					getline(cin, NameFromUser, '\n');
					cout << "Enter Employee Address: ";
					getline(cin, AddressFromUser, '\n');
					cout << "Enter Employee Phone: ";
					getline(cin, PhoneFromUser, '\n');
					cout << "Enter Employee Overall porformance(1 to 4): ";
					cin >> OPFromUser;
					cout << "Enter Employee Joining Data(ex: 20200203; yyyyMnDay): ";
					cin >> joinDateFromUser;
					cout << "Enter Employee Leaving Data(ex: 20210203; yyyyMnDay): ";
					cin >> leaveDateFromUser;
					cout << "Enter Employee Department ID: ";
					cin >> DIDFromUser;
					cout << "Enter the position you want to save the recode: ";
					cin >> position;
					InsertNodeAtArbitrary(EIDFromUser, NameFromUser, AddressFromUser, PhoneFromUser, SalaryFromUser, OPFromUser, joinDateFromUser, leaveDateFromUser, DIDFromUser, DNameFromData2, position);
					place++;
					cout << "Done successfuly...." << endl;
					system("pause");
					system("cls");
					CalculatePackage();
				}
				else if (selection == '2') {
					system("cls");
					CalculatePackage();
				}
				else {
					cout << "\n!! Wrong choice, Please retry again :]..." << endl;
					system("pause");
					system("cls");
					CalculatePackage();
				}

			} while (1);
			break;
		case '3':
			system("cls");
			cout << "Enter Employee Salary: ";
			cin >> salary;
			HouseP = HouseP * salary;
			cout << "The House Rent Allowance Per(50% of basic salary): " << HouseP << endl;
			FoodP = FoodP * salary;
			cout << "Food Allowance Per(20% of basic salary): " << FoodP << endl;
			TransportP = TransportP * salary;
			cout << "Transport Allowance Per(20% of basic salary): " << TransportP << endl;
			SalaryFromUser = HouseP + FoodP + TransportP + salary;
			cout << "The Total Salary: " << SalaryFromUser << endl;
			cout << "Would You Like To Add This Employee To List? " << endl;
			cout << " 1. Yes             2. NO and back to the menu" << endl;
			cout << "Enter Your Option: ";
			cin >> selection;
			do {
				if (selection == '1') {
					system("cls");
					cout << "Please Fill Up The Needed Details: " << endl;
					do
					{
						cout << "Enter Employee ID: ";
						cin >> EIDFromUser;
						if (SearchEmployeeID(EIDFromUser, Head1) != 0) {
							cout << "This Employee ID Already Used, Please retype new one" << endl;
						}
					} while (SearchEmployeeID(EIDFromUser, Head1) != 0);
					getchar();
					cout << "Enter Employee Name: ";
					getline(cin, NameFromUser, '\n');
					cout << "Enter Employee Address: ";
					getline(cin, AddressFromUser, '\n');
					cout << "Enter Employee Phone: ";
					getline(cin, PhoneFromUser, '\n');
					cout << "Enter Employee Overall porformance(1 to 4): ";
					cin >> OPFromUser;
					cout << "Enter Employee Joining Data(ex: 20200203; yyyyMnDay): ";
					cin >> joinDateFromUser;
					cout << "Enter Employee Leaving Data(ex: 20210203; yyyyMnDay): ";
					cin >> leaveDateFromUser;
					cout << "Enter Employee Department ID: ";
					cin >> DIDFromUser;
					cout << "Enter the position you want to save the recode: ";
					cin >> position;
					InsertNodeAtArbitrary(EIDFromUser, NameFromUser, AddressFromUser, PhoneFromUser, SalaryFromUser, OPFromUser, joinDateFromUser, leaveDateFromUser, DIDFromUser, DNameFromData3, position);
					place++;
					cout << "Done successfuly...." << endl;
					system("pause");
					system("cls");
					CalculatePackage();
				}
				else if (selection == '2') {
					system("cls");
					CalculatePackage();
				}
				else {
					cout << "\n!! Wrong choice, Please retry again :]..." << endl;
					system("pause");
					system("cls");
					CalculatePackage();
				}

			} while (1);
			break;
		case '4':
			system("cls");
			cout << "Enter Employee Salary: ";
			cin >> salary;
			HouseP = HouseP * salary;
			cout << "The House Rent Allowance Per(50% of basic salary): " << HouseP << endl;
			FoodP = FoodP * salary;
			cout << "Food Allowance Per(20% of basic salary): " << FoodP << endl;
			TransportP = TransportP * salary;
			cout << "Transport Allowance Per(20% of basic salary): " << TransportP << endl;
			SalaryFromUser = HouseP + FoodP + TransportP + salary;
			cout << "The Total Salary: " << SalaryFromUser << endl;
			cout << "Would You Like To Add This Employee To List? " << endl;
			cout << " 1. Yes             2. NO and back to the menu" << endl;
			cout << "Enter Your Option: ";
			cin >> selection;
			do {
				if (selection == '1') {
					system("cls");
					cout << "Please Fill Up The Needed Details: " << endl;
					do
					{
						cout << "Enter Employee ID: ";
						cin >> EIDFromUser;
						if (SearchEmployeeID(EIDFromUser, Head1) != 0) {
							cout << "This Employee ID Already Used, Please retype new one" << endl;
						}
					} while (SearchEmployeeID(EIDFromUser, Head1) != 0);
					getchar();
					cout << "Enter Employee Name: ";
					getline(cin, NameFromUser, '\n');
					cout << "Enter Employee Address: ";
					getline(cin, AddressFromUser, '\n');
					cout << "Enter Employee Phone: ";
					getline(cin, PhoneFromUser, '\n');
					cout << "Enter Employee Overall porformance(1 to 4): ";
					cin >> OPFromUser;
					cout << "Enter Employee Joining Data(ex: 20200203; yyyyMnDay): ";
					cin >> joinDateFromUser;
					cout << "Enter Employee Leaving Data(ex: 20210203; yyyyMnDay): ";
					cin >> leaveDateFromUser;
					cout << "Enter Employee Department ID: ";
					cin >> DIDFromUser;
					cout << "Enter the position you want to save the recode: ";
					cin >> position;
					InsertNodeAtArbitrary(EIDFromUser, NameFromUser, AddressFromUser, PhoneFromUser, SalaryFromUser, OPFromUser, joinDateFromUser, leaveDateFromUser, DIDFromUser, DNameFromData4, position);
					place++;
					cout << "Done successfuly...." << endl;
					system("pause");
					system("cls");
					CalculatePackage();
				}
				else if (selection == '2') {
					system("cls");
					CalculatePackage();
				}
				else {
					cout << "\n!! Wrong choice, Please retry again :]..." << endl;
					system("pause");
					system("cls");
					CalculatePackage();
				}

			} while (1);
			break;
		case '5':
			system("cls");
			Menu();
			break;
		default:
			cout << "\n!! Wrong choice, Please retry again :]..." << endl;
			break;
		}
		system("pause");
		system("cls");
	} while (1);

}
// THE LOG IN PAGE 
void Login() {

	string username, password;
	int loginAttempt= 0;
	
	
	while (loginAttempt < 5)
	{
		cout << "<*>___________________________________________________________________________<*>\n" << endl;
		cout << "                       EMERGE EMPLOYEE SYSTEM\n" << endl;
		cout << "<*>"<<__DATE__<<"________________________________________________________________<*>\n" << endl;
		cout << "The Username is (admin) and The Password is (pass) By Default\n" << endl;
		cout << "  Enter The Username: ";
		cin >> username;
		cout << "\n  Enter The Password: ";
		cin >> password;

		if (username == "admin" && password == "pass")
		{
			cout << "\nYou Have Logged in Successfuly... !\n";
			break;
		}
		else
		{
			cout << "\nInvalid login attempt. Please try again..!!\n" << endl;
			system("pause");
			system("cls");
			loginAttempt++;
		}
	}
	if (loginAttempt == 5)
	{
		cout << "\nToo Many Login Attempts! The Program Will Now Terminate..!!!\n";
		system("pause");
		exit(1);
	}
	system("pause");
	system("cls");
}
// the main function where the program will start execution
int main() {

	system("color B1"); // code to change the color to blue
	//inserting new recodes from the database of the system
	InsertNodeAtArbitrary(EIDFromData, NameFromData, AddressFromData, PhoneFromData, SalaryFromData, OPFromData, joinDateD, leaveDateD, DIDFromData, DNameFromData, 0);
	place++;
	InsertNodeAtArbitrary(EIDFromData2, NameFromData2, AddressFromData2, PhoneFromData2, SalaryFromData2, OPFromData2, joinDateD2, leaveDateD2, DIDFromData2, DNameFromData2, 1);
	place++;
	InsertNodeAtArbitrary(EIDFromData3, NameFromData3, AddressFromData3, PhoneFromData3, SalaryFromData3, OPFromData3, joinDateD3, leaveDateD3, DIDFromData3, DNameFromData3, 2);
	place++;
	InsertNodeAtArbitrary(EIDFromData4, NameFromData4, AddressFromData4, PhoneFromData4, SalaryFromData4, OPFromData4, joinDateD4, leaveDateD4, DIDFromData4, DNameFromData4, 3);
	place++;
	Login(); // will call the login function
	Menu(); // will call the main menu of the system
	system("pause"); 
	return 0;
}
