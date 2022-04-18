#include<fstream>

#include<iostream>

using namespace std;

int main()
{
    int iCnt, iIndex;
    char acName[20];
    float fSalary;
    ofstream oTxt("emp.txt");
    //if(oTxt==NULL){
        if(!oTxt)
        {
        cerr<<"Error: Opening emp";
        return 1;
    }
    cout<<"How many emp:";
    cin>>iCnt;

    oTxt<<iCnt<<endl;

    for(iIndex=1; iIndex<=iCnt; iIndex++)
    {
        cout<<"Employee: "<<iIndex<<endl;
        cout<<"\t\tName:";
        cin>>acName;
        cout<<"\t\tSalary: ";
        cin>>fSalary;
        oTxt<<acName<<""<<fSalary<<endl;
        
    }
    oTxt.close();
    return 0;
}