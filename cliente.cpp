#incldue "cliente.h"

Cliente::Cliente(string _name, string _gmail, string _phoneNumber, string_ID){
	name=_name;
	gmail=_gmail;
	phoneNumber=_phoneNumber;
	iD=_iD;	
}

string Cliente::getName(){
	return name;
}

string Cliente::getGmail(){
	return gmail;
}

string Cliente::getPhoneNumber(){
	return phoneNumber;
}

string Cliente::getID(){
	return iD;
}



string Cliente::getClienteData(){
    string ClienteData = "Name: "+ name + "\nGMail: " + Gmail  + 
    "\nPhoneNumber: " + PhoneNumber + "\nID: " + ID ;
    return ClienteData;
}
