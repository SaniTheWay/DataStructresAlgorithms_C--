#include <fstream>
using namespace std;

int main()
{
    ofstream oTf;

    oTf.open("./F1.lst");

    oTf<<"Sanidhya"<<endl;

    oTf<<"- Dave -"<<38610<<endl;

    oTf.close();
}