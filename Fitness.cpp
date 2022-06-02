#include <iostream>
#include <iomanip>

using namespace std;

void info(){
    // this functon contains the basic info and codition of the membership.
    cout << "Hello welcome to our Fitness membership gym. Plase enter the nessecary info below.\nThis is our membership condition elderly adult 30%, purchase membership 12 or more mothns is 15%, and pucrhase more than 5 session is 20%." << endl;
}

// this function is for the condition and calculates the membership
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
                discountPrice = (cost - (cost * discount)) * session; 
                std::cout << std::fixed;
                std::cout << std::setprecision(2);
                std::cout << "RM" << discountPrice << endl;
            }else{
                discount = 0.3;
                discountPrice = (cost - (cost * discount)) * session;
                std::cout << std::fixed;
                std::cout << std::setprecision(2);
                std::cout << "RM" << discountPrice << endl;
            }
            
        }else if (choice == 'b'){
            if(session > 5){
                discount = 0.65;
                discountPrice = (cost - (cost * discount)) * session; 
                std::cout << std::fixed;
                std::cout << std::setprecision(2);
                std::cout << "RM" << discountPrice << endl;
            }else{
                discount = 0.45;
                discountPrice = (cost - (cost * discount)) * session; 
                std::cout << std::fixed;
                std::cout << std::setprecision(2);
                std::cout << "RM" << discountPrice << endl;
            }
        }
    }else if (choice == 'b'){
         if(session > 5){
            discount = 0.35;
            discountPrice = (cost - (cost * discount)) * session; 
            std::cout << std::fixed;
            std::cout << std::setprecision(2);
            std::cout << "RM" << discountPrice << endl;
        }else{
            discount = 0.15;
            discountPrice = (cost - (cost * discount)) * session; 
            std::cout << std::fixed;
            std::cout << std::setprecision(2);
            std::cout << "RM" << discountPrice << endl;
        }
    }else if (session < 5){
        discount = 0.2;
        discountPrice = (cost - (cost * discount)) * session; 
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
         std::cout << "RM" << discountPrice << endl;
    }else{
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        std::cout << "RM" << discountPrice << endl;
    }
}

int main(){
    // this are the called functions 
    info();
    membershipRegister();
}
