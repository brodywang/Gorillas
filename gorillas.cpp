/*
 * try1.cpp
 *
 *  Created on: 2018Äê9ÔÂ18ÈÕ
 *      Author: 15715
 */

#include <iostream>
#include <cmath>
double height = 10;
double launch_velocity = 600;
double launch_angle;
double gravity();
double gravity(){
	return 9.80665;
}
double horizontal_velocity(double launch_velocity,double launch_angle);
double horizontal_velocity(double launch_velocity,double launch_angle){
	return launch_velocity * cos (launch_angle * M_PI / 180);
}
double vertical_velocity(double launch_velocity, double launch_angle);
double vertical_velocity(double launch_velocity, double launch_angle){
	return launch_velocity * sin (launch_angle * M_PI / 180);
}
double computed_range(double launch_velocity, double launch_angle, double height);
double computed_range(double launch_velocity, double launch_angle, double height){
	return horizontal_velocity(launch_velocity,launch_angle) * vertical_velocity(launch_velocity,launch_angle) / 9.80665 + (horizontal_velocity(launch_velocity,launch_angle) * sqrt(vertical_velocity(launch_velocity,launch_angle)*vertical_velocity(launch_velocity,launch_angle)+2*9.80665*height))/9.80665;
}

#ifndef MARMOSET_TESTING
int main();
#endif

#ifndef MARMOSET_TESTING

int main(){
	launch_angle = 10;
	std::cout << "The range the banana reaches for the launch angle of " << launch_angle << " degrees is " << computed_range(launch_velocity,10,height) << std::endl;
	launch_angle = 20;
	std::cout << "The range the banana reaches for the launch angle of " << launch_angle << " degrees is " << computed_range(launch_velocity,20,height) << std::endl;
	launch_angle = 25.5;
	std::cout << "The range the banana reaches for the launch angle of " << launch_angle << " degrees is "<< computed_range(launch_velocity,25.5,height) << std::endl;
	launch_angle = 30;
	std::cout << "The range the banana reaches for the launch angle of " << launch_angle << " degrees is "<< computed_range(launch_velocity,30,height) << std::endl;
	launch_angle = 40;
	std::cout << "The range the banana reaches for the launch angle of " << launch_angle << " degrees is " << computed_range(launch_velocity,40,height) << std::endl;
	launch_angle = 50;
	std::cout << "The range the banana reaches for the launch angle of " << launch_angle << " degrees is " << computed_range(launch_velocity,50,height) << std::endl;
	launch_angle = 55.5;
	std::cout << "The range the banana reaches for the launch angle of " << launch_angle << " degrees is " << computed_range(launch_velocity,55.5,height) << std::endl;
	launch_angle = 60;
	std::cout << "The range the banana reaches for the launch angle of " << launch_angle << " degrees is "<< computed_range(launch_velocity,60,height) << std::endl;
	launch_angle = 70;
	std::cout << "The range the banana reaches for the launch angle of " << launch_angle << " degrees is " << computed_range(launch_velocity,70,height) << std::endl;
	launch_angle = 75.5;
	std::cout << "The range the banana reaches for the launch angle of " << launch_angle << " degrees is " << computed_range(launch_velocity,75.5,height) << std::endl;
	launch_angle = 80;
	std::cout << "The range the banana reaches for the launch angle of " << launch_angle << " degrees is "<< computed_range(launch_velocity,80,height) << std::endl;
	launch_angle = 90;
	std::cout << "The range the banana reaches for the launch angle of " << launch_angle << " degrees is " << computed_range(launch_velocity,90,height) << std::endl;
	return 0;
}

#endif
