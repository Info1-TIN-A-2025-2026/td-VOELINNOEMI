#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <stdbool.h> 

double kmh_to_ms(double s_kmh);
double reaction_distance(double speed, double reaction_time);
double break_distance(double speed, double deceleration);
double total_stop_distance(double speed, double reaction_time, double deceleration);
bool stop_before_obstacle(double stop_distance, double obstacle_distance); 

int main(int argc, const char *argv[])
{
    double speed_kmh = 0;
    double reaction_time = 0;
    double decc = 0;
    printf("Enter the speed (km/h):");
    scanf("%lf", &speed_kmh);
    printf("Enter the reaction time (s):");
    scanf("%lf", &reaction_time);
    printf("Enter the decceleration (m/s2):");
    scanf("%lf", &decc);

    // double speed_kmh = 3.6;
    // double speed_ms = kmh_to_ms(speed_kmh);
    // printf("speed_ms = %lf\n", speed_ms);
    // double speed_kmh = 3.6;
    // double speed_ms = kmh_to_ms(speed_kmh);
    // double reaction_time = 1;
    // double dist = reaction_distance(speed_ms, reaction_time);
    // printf("reaction_distance = %lf\n", dist);
    // double speed_kmh = 3.6;
    // double speed_ms = kmh_to_ms(speed_kmh);
    // double deceleration = 7.5;
    // double dist = break_distance(speed_ms, deceleration);
    // printf("break_distance = %lf\n", dist);
}

double total_stop_distance(double speed, double reaction_time, double deceleration)
{
    assert(speed >= 0);
    assert(reaction_time >= 0);
    assert(deceleration >= 0);
    
    return reaction_distance(speed, reaction_time + break_distance(speed, deceleration));
}

double kmh_to_ms(double s_kmh)
{
    assert(s_kmh >= 0); //si probleme il s'arrete
    return s_kmh / 3.6; 
}

double reaction_distance(double speed, double reaction_time)
{
    // d = v * t
    assert(speed >= 0);
    assert(reaction_time >= 0);
    return speed * reaction_time; 
}

double break_distance(double speed, double deceleration)
{
   // d = speed^2 / 2acceleration
   assert(speed >= 0);
   assert(deceleration >= 0);
   return pow(speed, 2) / (2 * deceleration);
}


bool stop_before_obstacle(double stop_distance, double obstacle_distance)
{

} 