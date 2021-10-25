#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    double price[10]= {3000, 7000, 8000, 6500, 5000, 5500, 6000, 10000, 8500, 9000};
    int barang_n, quant; 
    double total_price, money, Rp;
    char ask;

    do{
        cout<< "Welcome to Teti Lab Skill Snack Store!!! " << endl;
        cout<< "========================================\n"  << endl;
        cout<< "-------Beverages-------"<<endl;
        cout<< "1.  Aqua \t [Rp. 3000]\n";
        cout<< "2.  Freshtea \t [Rp. 7000]\n";
        cout<< "3.  Sprite \t [Rp. 8000]\n";
        cout<< "4.  Gooday \t [Rp. 6500]\n";
        cout<< "5.  Juice \t [Rp. 5000]\n" << endl;

        cout<< "-------Snacks-------"<<endl;
        cout<< "6.  Lays \t [Rp. 5500]\n";
        cout<< "7.  Chitato \t [Rp. 6000]\n";
        cout<< "8.  Pocky \t [Rp. 10000]\n";
        cout<< "9.  Oreo \t [Rp. 8500]\n";
        cout<< "10. Tango \t [Rp. 9000]\n" << endl;


        cout<< "What would you like to buy? (Enter the number code) "; cin>> barang_n;
        cout<< "How many you wanna buy it? "; cin>> quant;

        switch (barang_n){
        
            case 1   :
                total_price+=price[0]*quant;
                break;
            case 2   :
                total_price+=price[1]*quant;
                break;
            case 3   :
                total_price+=price[2]*quant;
                break;
            case 4   :
                total_price+=price[3]*quant;
                break;
            case 5   :
                total_price+=price[4]*quant;
                break;
            case 6   :
                total_price+=price[5]*quant;
                break;
            case 7   :
                total_price+=price[6]*quant;
                break;
            case 8   :
                total_price+=price[7]*quant;
                break;
            case 9   :
                total_price+=price[8]*quant;
                break;
            case 10   :
                total_price+=price[9]*quant;
                break;
            default  :
            cout<<"Oops, wrong input, Please try again";
        }
        cout<< "Do you wanna buy something else? (y for yes/ n for no) ";
        cin>> ask;
        system ("cls");
    
    }while (ask=='y');

    if (ask=='n'){
        cout<<"Total price you have to pay: Rp. " <<total_price <<endl;

        cout<<"For how much money are you gonna pay? Rp. ";
        cin>> money;

        Rp = money-total_price;

        cout<< "Your change will be: Rp. " << Rp <<endl; 

    }else{
        cout<< "Sorry, you must have entered the wrong code format"<< endl;
    }
    

    cout<<"Thank you, be sure to come again! :)";
   
   return 0;
}
    