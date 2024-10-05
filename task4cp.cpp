#include<iostream>
#include<cmath>
using namespace std;
int projectTimeCalculation(int n_hours, int days, int workers);
main()
{
    int n_hours, days, workers;
    cout<< "Enter the needed hours:";
    cin>> n_hours;
    cout<< "Enter the days that the firm has:";
    cin>> days;
    cout<< "Enter htee nuumber of all workers:";
    cin>> workers;
    projectTimeCalculation(n_hours, days, workers);
}
int projectTimeCalculation(int n_hours, int days, int workers)
{
    int diff;
    int t_days  =days*10;
    int w_hours = t_days-(t_days*0.1);
    int p_hours = w_hours * workers;
    if(p_hours < n_hours)
    {

        diff = n_hours - p_hours;
        cout<< "Not enough time! " << diff << " hours needed.";
    
    }
    if(p_hours > n_hours)
    {
        diff = p_hours - n_hours;
        cout<< "YES!" << diff << " hours left.";
    }
}