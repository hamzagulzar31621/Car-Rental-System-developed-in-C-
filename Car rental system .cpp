#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

    string  pname[50];
	string  carbrand[50];
	string  model[50];
	string  numberplate[50];
	int  noofdays[50];
	


void intro(){
	cout<<"\t\t\t ******|CAR RENTAL MANAGEMENT SYSYTEM|****** "<<endl;
	cout<<"\t\t\t Made by Yazdan Haider , Abdul Wahab , Hamza Gulzar "<<endl;
}

//The main menu   
void menu(){
	cout<<"\t\t\t\t Choose an option from the following menu :"<<endl;
	cout<<"\t\t\t\t 1 | To rent a car "<<endl; 
	cout<<"\t\t\t\t 2 | To enter record of a car "<<endl;
	cout<<"\t\t\t\t 3 | To see status of a car "<<endl;
	cout<<"\t\t\t\t 4 | To delete a record of a car "<<endl;
	cout<<"\t\t\t\t 5 | To exit "<<endl;
	}
	
	
	
    
//Function to enter record
void recordentry(){
	int i=0;
	char again;
	
	do{
	
	cout<<"Enter the following details"<<endl<<endl;
		    
		    cout<<"Enter your name "<<endl;
			cin>>pname[i];
		    
			cout<<"Car Brand"<<endl;
			cin>>carbrand[i];
			
			cout<<"Model"<<endl;
			cin>>model[i];
			
			cout<<"Number plate "<<endl;
			cin>>numberplate[i];
			
			cout<<"For how many days is it going for rent "<<endl;
			cin>>noofdays[i];
		  
		  	cout<<"Do you want to enter another record "<<endl;
		  	cout<<"If yes press Y if not press N "<<endl;
		  	cin>>again;
			
			
		i++;
  }while(again == 'Y' || again == 'y');
	}




//Funtion to select car for rent
void carmodels(){
	cout<<"\n\n";
	cout<<"\t\t\t\t Following cars are available for booking:"<<endl;
	cout<<"\t\t\t\t Press 1 for HONDA brand cars"<<endl;
	cout<<"\t\t\t\t Press 2 for TOYOTA brand cars"<<endl;
	cout<<"\t\t\t\t Press 3 for MERCEDES brand cars"<<endl;
	cout<<"\t\t\t\t NOTE : extra 2000rs will be charged for driver per day"<<endl; 
}

void hondavoid(){
	cout<<"\t\t\t\t Which HONDA model do you want"<<endl;
	cout<<"\t\t\t\t Press 1 for CIVIC  rent = 1500rs per day"<<endl;
	cout<<"\t\t\t\t Press 2 for CITY   rent = 2000rs per day"<<endl;
	cout<<"\t\t\t\t Press 3 for ACCORD rent = 2500rs per day"<<endl;

}

void toyotavoid(){
    cout<<"\t\t\t\t Which TOYOTA model do you want"<<endl;
	cout<<"\t\t\t\t Press 1 for COROLLA rent = 2000rs per day"<<endl;
	cout<<"\t\t\t\t Press 2 for HILUX VIGO rent = 5000rs per day"<<endl;
	cout<<"\t\t\t\t Press 3 for PRIUS rent = 2500rs per day"<<endl;

}

void mercedesvoid(){
	cout<<"\t\t\t\t Which MERCEDES model do you want"<<endl;
	cout<<"\t\t\t\t Press 1 for BENZ rent = 5000rs per day"<<endl;
	cout<<"\t\t\t\t Press 2 for C CLASS rent = 7000rs per day"<<endl;
	cout<<"\t\t\t\t Press 3 for SUV rent = 10000rs per day"<<endl;
}

//Funtion to to see the status of a car

void recordsearch(){
	string status;
	int k;
	

		
	cout<<"\t\t\t\t Enter the Name you want to search "<<endl;
	cin>>status;
	

	for(int k=0;k<10;k++){

		if(status == pname[k]){
			
			cout<<"Name  : "<<pname[k]<<endl;
						
			cout<<"Brand : "<<carbrand[k]<<endl; 

		    cout<<"Model : "<<model[k]<<endl; 
    	        	
		    cout<<"Number Plate : "<<numberplate[k]<<endl; 
		
			cout<<"Booked for "<<noofdays[k]<<" days "<<endl; 

			} 
		}
}

void deleterecord(){
	string status;
	int k;
	

		
	cout<<"Enter the Name you want to delete "<<endl;
	cin>>status;
	

	for(int k=0;k<10;k++){

		if(status == pname[k]){
			
			pname[k].clear();
						
			carbrand[k].clear(); 

		    model[k].clear(); 
    	        	
		    numberplate[k].clear(); 
		
			
			cout<<"Record Deleted"<<endl;

			} 
		}
		
	
}

//Main body of the program

int main(){
	
	char anothercar,driver;                               
	int day,driverrent=0;
	int rent,days;
	int totalrentofcar=0,totalrentofdriver=0;
	int mercedes=3 , honda=3 , toyota=3 , totalcars=9;
    int program_again;
	int choice;
	
    intro();
	

	cout<<"\n\n";
	do{
		 int v=0;
			

	menu();
	int option;
	cin>>option;
    
    switch (option){
    case 1:	
   
	do{
	cout<<"\t\t\t\t Enter your name "<<endl;
	cin>>pname[v];
	carmodels();

	cout<<endl<<"\t\t\t\t Which car brand do you want? "<<endl;
	cin>>choice;
	//Switch used to choose a car for rent
	   switch(choice){
	   case 1:
			hondavoid();
			honda=honda-1;
			carbrand[v]="Honda";
			cin>>choice;
	                switch(choice){
	        	    case 1:
	        	    model[v]="Civic";
	        	    numberplate[v]="1234";
	        		cout<<"\t\t\t\t For how many days do you want HONDA CIVIC :"<<endl;
	        		cin>>days;
	        		noofdays[v] = days;
	        		rent=days*1500;
	        		cout<<"\t\t\t\t Your rent will be "<<rent<<" Rs "<<"for "<<days<<" days";
	        		totalrentofcar=totalrentofcar+rent;
	        		 
	        		break;
	        		
	        	    case 2:
	        	    	 numberplate[v]="2233";
	        	    	model[v]="City";
					cout<<"\t\t\t\t For how many days do you want HONDA CITY :"<<endl;
	                cin>>days;
	                	noofdays[v] = days;
	                rent=days*2000;
	                cout<<"\t\t\t\t Your rent will be "<<rent<<" Rs "<<"for "<<days<<" days";
	                totalrentofcar=totalrentofcar+rent;
	                
	                break;
	                
	                case 3:
	                	 numberplate[v]="3355";
	                	model[v]="Accord";
	                cout<<"\t\t\t\t For how many days do you want HONDA ACCORD :"<<endl;
	                cin>>days;
	                	noofdays[v]=days;
	                rent=days*2500;
	                cout<<"\t\t\t\t Your rent will be "<<rent<<" Rs "<<"for "<<days<<" days";
	                totalrentofcar=totalrentofcar+rent;
	                
	                break;
	                
	                default:
	                	cout<<"\t\t\t\t WRONG INPUT";
	                	break;
	                	
	               	
	                
			}
			        break;
		case 2:
			toyotavoid();
			toyota= toyota-1;
			carbrand[v]="Toyota";
			    cin>>choice;
	            switch(choice){
	        	    case 1:
	        	    	 numberplate[v]="6677";
	        	    	model[v]="Corolla";
	        		cout<<"\t\t\t\t For how many days do you want TOYOTA COROLLA :"<<endl;
	        		cin>>days;
	        			noofdays[v]=days;
	        		rent=days*2000;
	        		cout<<"\t\t\t\t Your rent will be "<<rent<<" Rs "<<"for "<<days<<" days";
	        		totalrentofcar=totalrentofcar+rent;
	        		
	        		break;
	        		
	        	    case 2:
	        	    	 numberplate[v]="9988";
	        	    	model[v]="Hilux Vigo";
					cout<<"\t\t\t\t For how many days do you want TOYOTA HILUX VIGO :"<<endl;
	                cin>>days;
	                	noofdays[v]=days;
	                rent=days*5000;
	                cout<<"\t\t\t\t Your rent will be "<<rent<<" Rs "<<"for "<<days<<" days";
	                totalrentofcar=totalrentofcar+rent;
	                
	                break;
	                
	                case 3:
	                	 numberplate[v]="3030";
	                	model[v]="Prius";
	                cout<<"\t\t\t\t For how many days do you want TOYOTA PRIUS :"<<endl;
	                cin>>days;
	                	noofdays[v]=days;
	                rent=days*2500;
	                cout<<"\t\t\t\t Your rent will be "<<rent<<" Rs "<<"for "<<days<<" days";
	                totalrentofcar=totalrentofcar+rent;
	                
	                break;
	                
	                default:
	                	cout<<"\t\t\t\t WRONG INPUT";
	                	break;
	    
			}
			           break;
		case 3:
			mercedesvoid();
			mercedes= mercedes-1;
			carbrand[v]="Mercedes";
			    cin>>choice;
	            switch(choice){
	        	    case 1:
	        	    	 numberplate[v]="5676";
	        	    	model[v]="Benz";
	        		cout<<"\t\t\t\t For how many days do you want MERCEDES BENZ :"<<endl;
	        		cin>>days;
	        			noofdays[v]=days;
	        		rent=days*5000;
	        		cout<<"\t\t\t\t Your rent will be "<<rent<<" Rs "<<"for "<<days<<" days";
	        		totalrentofcar=totalrentofcar+rent;
	        	
	        		break;
	        		
	        	    case 2:
	        	    	 numberplate[v]="0990";
	        	    	model[v]="C class";
					cout<<"\t\t\t\t For how many days do you want MERCEDES C CLASS :"<<endl;
	                cin>>days;
	                	noofdays[v]=days;
	                rent=days*7000;
	                cout<<"\t\t\t\t Your rent will be "<<rent<<" Rs "<<"for "<<days<<" days";
	                totalrentofcar=totalrentofcar+rent;
	                 
	                break;
	                
	                case 3:
	                	 numberplate[v]="3400";
	                	model[v]="SUV";
	                cout<<"\t\t\t\t For how many days do you want MERCEDES SUV :"<<endl;
	                cin>>days;
	                	noofdays[v]=days;
	                rent=days*10000;
	                cout<<"\t\t\t\t Your rent will be "<<rent<<" Rs "<<"for "<<days<<" days";
	                totalrentofcar=totalrentofcar+rent;
	                 
	                break;
	                
	                default:
	                	cout<<"\t\t\t\t WRONG INPUT"<<endl;
	                	break;
	                	
	                 
			}
			break;
        default :
		    cout<<"\t\t\t\t Wrong input"<<endl;	
			
	}
	
	v++;
	//if the user wants a driver with the car
	cout<<endl<<"\n\t\t\t\t ***If you want a driver with your car press Y if not press N "<<endl;
	cin>>driver;
	
	
	if(driver == 'y' || driver=='Y'){
		cout<<"\t\t\t\t For how many days do you need a driver"<<endl;
		cin>>day;
		driverrent=day*2000;
		cout<<"\t\t\t\t Rent for driver will be "<<driverrent<<" Rs for "<<day<<" days"<<endl;
			
	        totalrentofdriver=totalrentofdriver+driverrent;
	}
	
	if(driver == 'n' || driver =='N'){
		driverrent=0;
	}
    
    

	//for inputing another car
	cout<<endl<<"\t\t\t\t If you want another car press Y if not press N"<<endl;
	cin>>anothercar;
	
	if(anothercar =='n' || anothercar=='N'){
		break;
	}
	
	

system("CLS"); 
	
}while(anothercar = 'y' || anothercar=='Y');
 
 totalcars= mercedes + honda + toyota;

	
 cout<<"\t\t\t\t |********************************************"<<endl;
 cout<<"\t\t\t\t |TOTAL RENT FOR CAR : "<<totalrentofcar<<" RS"<<endl;
 cout<<"\t\t\t\t |TOTAL RENT FOR DRIVER : "<<totalrentofdriver<<" RS"<<endl;
 cout<<"\t\t\t\t |TOTAL BILL : "<<totalrentofcar+totalrentofdriver<<" RS"<<endl;
 cout<<"\t\t\t\t |TOTAL CARS AVIALABLE : "<<totalcars<<endl;
 cout<<"\t\t\t\t |********************************************";
         
         break;
  
   
  case 2:
    recordentry();
  	break;
  	 system("CLS"); 
  case 3:
  	char repeat;
  	do{
    recordsearch();
    cout<<"\t\t\t\t Enter Y to to serach record again , if not press n"<<endl;
  	cin>>repeat;
  }while(repeat == 'y' || repeat == 'Y');
    break;
     system("CLS"); 
    
  case 4:
    char rep;
	do{
		deleterecord();
		cout<<"\t\t\t\t If you want to delete another record press Y"<<endl;
		cout<<"\t\t\t\t if not then press N "<<endl;
		cin>>rep;
		
    }while(rep == 'y' || rep == 'Y'); 
	 break;
	  system("CLS"); 
	  
  case 5:
  	exit(5);
  	break;
	
  default :
    cout<<"\t\t\t\t Wrong input"<<endl;
	break;  

}
   cout<<endl<<endl;
   cout<<"\t\t\t\t Do you want to run the program again then press 1 "<<endl;
   cout<<"\t\t\t\t If you don't want to run the program again then press 2 "<<endl;
   cin>>program_again;
    system("CLS"); 
}while(program_again == 1);

cout<<"\t\t\t\t THANK YOU!!!";

	return 0;
}
