#include <iostream>
using namespace std;
class international:public booking
 {
 protected:
  int b1_seat;
  int e1_seat;
  int choice;
  int c;
  int b;
  int v;
  char g;
  timings t1;
 public:
  void getdata()
  {
   b=0;
   v=0;
  cout<<"In which AIRLINE you want to travel"<<endl<<endl;
  cout<<"1)PIA"<<endl;
  cout<<"2)AIR BLUE"<<endl;
  cout<<"3)EMIRATES"<<endl;
  cout<<"4)QATAR AIRWAYS"<<endl;
  cout<<"5)SINGAPUR AIRWAYS"<<endl;
  cout<<"6)AIRWAYS LUFTHANSA"<<endl;
  cout<<"enter your choice:";
  cin>>option;
  system ("cls");
  switch(option)
  {
  case 1:
   if (option==1)
    cout<<setw(60)<<"\n\n\n                                WELCOME TO PIA"<<endl;
   break;
  case 2:
   if(option==2)
    cout<<setw(80)<<"\n\n\n                                WELCOME TO AIRBLUE"<<endl;
   break;
  case 3:
   if(option==3)
    cout<<setw(80)<<"\n\n\n                                WELCOME TO EMIRATES"<<endl;
   break;
  case 4:
   if(option==4)
    cout<<setw(80)<<"\n\n\n                                WELCOME TO QATAR AIRWAYS"<<endl;
   break;
   case 5:
   if(option==5)
    cout<<setw(80)<<"\n\n\n                                WELCOME TO SINGAPUR AIRWAYS"<<endl;
   break;
     case 6:
   if(option==6)
    cout<<setw(80)<<"\n\n\n                                WELCOME TO  LUFTHANSA"<<endl;
   break;
  } 
   cout<<"\n\nTHESE ARE THE INTERNATIONAL PLACES AVAILABLE"<<endl<<endl;
   cin.ignore();
   for(int i=0;i<10;i++)
   {
    cout<<Internationaldestination[i]<<endl;
   }
   booking::getdata();
   for(int j=0;j<10;j++)
   {
    if(strcmp(Internationaldestination[j],destination)==0)
    {
     v++;
    }
   }
   for( int i=0;i<7;i++)
  
   {
  
  
    if(strcmp(localdestination[i],currentlocation)==0)
    {
   
     b++;
  
    }
 
 
   }
   if(b==1&&v==1)
   
   {
    cout<<" FLIGHT AVAILABLE ON THIS ROUTE"<<endl;
    b1_seat=30;
    e1_seat=40;
    cout<<"In which class you want to travel?"<<endl;
    cout<<"Make your choice"<<endl<<endl;
    cout<<"\n\n\n\n\n\n";
  cout<<setw(60)<<"*************************************"<<endl;
        cout<<setw(60)<<"*     Press 1 for buisness class    *"<<endl;
  cout<<setw(60)<<"*     Press 2 for economy class     *"<<endl;
  cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;
  cout<<"Enter your choice";
  cin>>choice;
  cout<<endl;
  switch(choice)
  {
  case 1:
   b1_seat--;
   if(b1_seat<=0)
    cout<<"SORRY NO SEAT AVAILABLE"<<endl;
   else
    cout<<"SEAT AVAILABLE"<<endl;
   break;
  case 2:
   e1_seat--;
   if(e1_seat<=0)
    cout<<"SORRY NO SEAT AVAILABLE"<<endl;
   else
    cout<<"SEAT AVAILABLE"<<endl;
   break;
  
  }
  t1.getdata(); 
  system("CLS");
  booking::show();
  if(choice==1)
  {
    
    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|BUISNESS CLASS                                                           "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Ticket Information:                                                      "<<endl<<
             "|BUSINESS CLASS                                                           "<<endl;
  
  }
  
  if(choice==2)
  
  {
    
    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|ECONOMY CLASS                                                           "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Ticket Information:                                                      "<<endl<<
             "|ECONOMY CLASS                                                           "<<endl;
  
  }
  
  cout<<"|Status: confirmed                                                        "<<endl;

  ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|Status: confirmed                                                        "<<endl;
      
  t1.show();
   }
   else
   
   {
    cout<<"__________________________________________________________________________"<<endl;
     cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
   cout<<"__________________________________________________________________________"<<endl;
   
   }
}
 };