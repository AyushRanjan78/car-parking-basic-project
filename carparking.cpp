#include <iostream>
using namespace std; 

int main(){
    cout<<"\t\t C A R  P A R K I N G "<<endl;
    int enter;
    int car = 0, bus = 0, rickshaw = 0 ;
    int limit = 0;
    int totalamount = 0;
    while(true){
         cout<<" PRESS 1: To enter CAR"<<endl;
         cout<<" PRESS 2: To enter BUS"<<endl;
         cout<<" PRESS 3: To enter RICKSHAW"<<endl;
         cout<<" PRESS 4: To show the record"<<endl;
         cout<<" PRESS 5: To delete the record"<<endl;
         cout<<" PRESS 6: To exit"<<endl;
         cout<<"\nEnter the Press no."<<endl;
         cin>>enter;
         cout<<endl;
         
         if(limit==24){
            cout<<" Parking is full "<<endl;
            break;
         }
         if(enter==1){
            limit = limit + 2;
            car++;
            cout<<"Car is Added"<<endl;
         }
         else if(enter==2){
            limit = limit + 4;

            bus++;
            

            cout<<"Bus is Added"<<endl;
         }
         else if(enter==3){
            limit = limit + 1;

            rickshaw++;
            

            cout<<"Rickshaw is Added"<<endl;
         }
         else if(enter==4){
            cout<<"Car "<<car<<endl;
            cout<<"Bus "<<bus<<endl;
            cout<<"Rickshaw "<<rickshaw<<endl;
         }
         else if(enter==5){
            car = 0;
            bus = 0;
            rickshaw = 0;
         }
         else if(enter==6){
            exit(0);
         }
         else{
            cout<<"Invalid Input"<<endl;
         }



    }
    return 0;
}