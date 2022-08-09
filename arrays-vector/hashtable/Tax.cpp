#include <iostream>

using namespace std;

// #define 25l 250000
// #define 5l 500000
// int Cal(int sal)
// {
//     if(sal<=250000)
//         return 0;
//     if(sal>250000 && sal<=500000)
//         return 5;
//     if(sal>500000 && sal<=1000000)
//         return 20;
//     else
//         return 30;
// }
int calTax(int value, int tax_per)
{
    return value*(tax_per)/100;
}
int main()
{
    long int sal, tax=0;
    int tax_per=0, count=0;
    cout<<"Please Enter the Amount: ";
    cin>>sal;
    cout<<endl;

    while(sal>0)
    {   
        cout<<"sal- "<<sal<<endl;
        if(sal<=250000)
        {
            tax_per =0;
            tax += calTax(250000, tax_per);
        }
        else if(sal>250000 && sal<=500000 && count==1)
        {
            tax_per = 5;

            if(sal-250000>250000)tax += calTax(250000, tax_per);
            else tax+=calTax(sal, tax_per);

            sal -= 250000;
        }
        else if(sal>500000 && sal<=1000000 && count==2)
        {
            tax_per = 20;

            if(sal-250000>250000)tax += calTax(250000, tax_per);
            else tax += calTax(sal, tax_per);
            
            sal -= 250000;
        }
        else
        {
            tax_per = 30;

            if(sal-250000>250000) tax += calTax(250000, tax_per);
            else tax+= calTax(sal, tax_per);
            break;
        }
        count+=1;
    }

    cout<<"Tax Amount will be: "<<tax;

    return 0;
}