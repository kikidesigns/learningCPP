//include our libraries
#include <iostream>

//Story: You are a part of an elite group of cyber-specialists hired by an unknown benefactor 
//  to balance the scales of tech power. Your mission is to covertly transfer a portion of Zeta Corp’s 
//  research funds to NeuraTech, enabling them to complete their groundbreaking project.


//prototype functions
void displayBankBalancebyValue(int passedACopyBankBal);
void hackBalance(int& rZetaCorp, int& rNeuraTech);




//create our main entry point to this program
int main()
{
    //display title
    std::cout << "\n\n\t***Welcome to FuturoBank***\n\n";

    //create a bank balance
    int zetaCorp = 8888;
    int neuraTech = 1000;

        //display balances
    std::cout << " 09:00:00 " ;
    std::cout <<"\n\n **Bank Ledger** " ;
    std::cout <<"\n\n   Zeta Corp: $ " << zetaCorp << std::endl;
    std::cout <<"\n\n   Neura Tech: $ " << neuraTech << std::endl;

    //print bank balance
    std::cout <<"\n\n Welcome, Zeta Corp, your current bank balance is $ " << zetaCorp <<std::endl;

    //call displayBankBalanceByValue
    displayBankBalancebyValue(zetaCorp);


    //call the hack function and pass by ref
    hackBalance(zetaCorp, neuraTech);

    //display balances
    std::cout << " \n\n 17:00:00 " ;
    std::cout <<"\n\n **Bank Ledger** " ;
    std::cout <<"\n\n   Zeta Corp: $ " << zetaCorp << std::endl;
    std::cout <<"\n\n   Neura Tech: $ " << neuraTech << std::endl;



    return 0;
}


void displayBankBalancebyValue(int passedACopyBankBal)
{
    passedACopyBankBal = 8884;

    std::cout << "\n\n Transaction 897: -4.00 at Jo's Cafe.  ";
    std::cout <<"\n\n Zeta Corp, your current bank balance is $ " << passedACopyBankBal <<std::endl;

}

void hackBalance(int& rZetaCorp, int& rNeuraTech)
{
    int hold = rNeuraTech;
    rNeuraTech = rZetaCorp;
    rZetaCorp = hold;

}