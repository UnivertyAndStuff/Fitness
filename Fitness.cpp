#include <iostream>

using namespace std;

void info(){
    cout << "Hello welcome to our Fitness membership gym. Plase enter the nessecary info below.\nThis is our membership condition elderly adult 30%, purchase membership 12 or more mothns is 15%, and pucrhase more than 5 session is 20%." << endl;
}

void membershipRegister(){
    int age;
    int session;
    int cost = 125;
    char choice = 'a'; 'b';
    float discountPrice;
    float discount;

    cout << "Please enter your age:" << endl;
    cin >> age;
    cout << "Please enter How many sessions you want:" << endl;
    cin >> session;
    cout << "Would you like to choose the regular(a) or premium membership(b): " << endl;
    cin >> choice;

    if(age >= 60){
        if (choice == 'a'){
            if(session > 5){
                discount = 0.50;
                discountPrice = ((cost * discount) - cost) * session; 
                cout << "RM" << discountPrice << endl;
            }else{
                discount = 0.3;
                discountPrice = ((cost * discount) - cost) * session; 
                cout << "RM" << discountPrice << endl;
            }
            
        }else if (choice == 'b'){
            if(session > 5){
                discount = 0.65;
                discountPrice = ((cost * discount) - cost) * session; 
                cout << "RM" << discountPrice << endl;
            }else{
                discount = 0.45;
                discountPrice = ((cost * discount) - cost) * session; 
                cout << "RM" << discountPrice << endl;
            }
        }
    }else if (choice == 'b'){
         if(session > 5){
                discount = 0.35;
                discountPrice = ((cost * discount) - cost) * session; 
                cout << "RM" << discountPrice << endl;
        }else{
                discount = 0.15;
                discountPrice = ((cost * discount) - cost) * session; 
                cout << "RM" << discountPrice << endl;
        }
    }else if (session < 5){
        discount = 0.2;
        discountPrice = ((cost * discount) - cost) * session; 
        cout << "RM" << discountPrice << endl;
    }else{
        cout << "RM" << cost * session << endl;
    }
}

int main(){
    info();
    membershipRegister();

}