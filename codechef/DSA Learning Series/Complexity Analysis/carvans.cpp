#include<iostream>
using namespace std;

long int min(long int a, long int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int previous_car_speed = 99999999, current_car_speed, number_of_cars, current_car_max_speed;
    cin>>number_of_cars;

    int no_of_cars_at_max_speed = 0;
    for(int i = 1; i <= number_of_cars; i++)
    {
        cin>>current_car_max_speed;

        current_car_speed = min(previous_car_speed, current_car_max_speed);

        no_of_cars_at_max_speed += (current_car_speed == current_car_max_speed);

        previous_car_speed = current_car_speed;
    }

    cout<<"\n"<<no_of_cars_at_max_speed;
}
