#include<iostream>
using namespace std;

int main(){
    while(1){
    float r;

    cout<<"Hello !!"<<endl;
    cout<<"Welcome to the currency converter."<<endl;
    cout<<"Here please your desired value in rupees : ";
    cin>>r;
    cout<<"Please choose one of these countries ."<<endl;
    cout<< "1.USA 2.Canada 3.Egypt"
        << endl
        << "4.Argentina 5.Uruguay 6.Brazil"
        << endl
        << "7.UK 8.Pakistan 9.China"
        << endl
        << "10.Bangladesh";
        
     loop:
    cout<< endl;
    char con[20];
    cout<<"Enter your country name : ";
    cin>> con ;
     
    switch(con[0]){

     case 'U': 
            if(con[1]=='S')  
            cout<<"That makes : "<<(r/82.73)<<" USD";
            else if(con[1]=='K')
            cout<<"That makes : "<<(r/100.47)<<" GBP";
            else
            cout<<"That makes : "<<(r/2.13)<<" UYU";
               break;
     case 'C': 
          if(con[1]=='h')
          cout<<"That makes : "<<(r/11.86)<<" CNY";
          else
          cout<<"That makes : "<<(r/60.19)<<" CAD";
          break;
     case 'E': cout<<"That makes : "<<(r/3.36)<<" EGP";
               break;
     case 'A': cout<<"That makes : "<<(r/0.48)<<" ARS";
               break;
     case 'B': 
           if(con[1]=='r')
           cout<<"That makes : "<<(r/15.59)<<" BRL";
           else
           cout<<"That makes : "<<(r/0.79)<<" BDT";
            break;
     case 'P': cout<<"That makes : "<<(r/0.37 )<<" PKR";
            break;
     default:
        cout<<"Please choose from the given countries or Write the names as given ";
        goto loop;
    }
    cout<<endl;
    }
}