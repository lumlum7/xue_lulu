#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double calculateCharges(double);

int main()
{
double hour,currentCharge,totalCharges=0,totalHours=0;
bool first=true;
cout<<fixed;
for(int a=1;a<=3;a++)
{
    cin>>hour;
    totalHours+=hour;
    if(first)
    {
        cout<<setw(5)<<"Car"<<setw(15)<<"Hours"<<setw(15)<<"Charge\n";
        first=false;
    }
    currentCharge=calculateCharges(hour);
    totalCharges+=currentCharge;
    cout<<setw(3)<<a<<setw(17)<<setprecision(1)<<hour<<setw(14)<<setprecision(2)<<currentCharge<<"\n";
}
  cout<<setw(7)<<"TOTAL"<<setw(13)<<setprecision(1)<<totalHours<<setw(14)<<setprecision(2)<<totalCharges<<endl;
}
double calculateCharges(double hours)
{
    double charge;
    if(hours<3.0)
        charge=2.0;
    else
        charge=2.0+.5*ceil(hours-3.0);
    return (charge>10.0?10.0:charge);
}

