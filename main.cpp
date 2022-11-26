#include <iostream>

using namespace std;

int quantity_one,quantity_two;
double itemone,itemtwo,totalone,totaltwo,vat,subtotal,finalttl,money_given,change;

int main()
{
    cout << "enter price of item one" ;
    cin >> itemone;

    cout << "enter price of item two" ;
    cin >> itemtwo;

    cout <<"enter quantity of item one";
    cin >>quantity_one;

    cout <<"enter quantity of item two";
    cin >>quantity_two;


totalone=itemone*quantity_one;
     cout <<"first total: "<<totalone<<endl;

totaltwo=itemtwo*quantity_two;
     cout <<"second total: "<<totaltwo<<endl;

subtotal=totalone+totaltwo;
    cout <<"subtotal: "<<subtotal<<endl;

vat=subtotal*0.16;
    cout <<"VAT: kes"<<vat<<endl;

finalttl=subtotal-vat;
    cout << "Final Amount: kes."<<finalttl<<endl;

    cout <<"Enter Amount Recieved: ";
    cin >>money_given;

 change=money_given-finalttl;
    cout <<"CHANGE: "<<change<<endl;
{
    if(money_given<finalttl)
        cout<<" MONEY NOT ENOUGH PLEASE ADD MONEY ";


    }
    return 0;
}
