/*
 * intervals.cpp
 *
 *  Created on: 2018Äê10ÔÂ23ÈÕ
 *      Author: 15715
 */

#include<iostream>
#include<string>
#include<cmath>

double max(double a,double b){
	if(a>=b){
		return a;
	}else{
		return b;
	}
}
double min(double a,double b){
	if(a<=b){
		return a;
	} else {
		return b;
	}
}

int main();
int main(){
	std::string str1 = "exit";
	std::string en = "enter";
	std::string input;
	double a;
	double b;
	double c;
	double d;
	double ia = 1;
	double ib = 0;
	double ma = 1;
	double mb = 0;
	//bool test = 1;


	do{
	std::cout << "input :> ";
	std::cin >> input;
	if (!(input == en || input == str1 || input == "negate" || input == "invert" || input == "mr" || input =="ms" || input == "mc" ||input =="m+" || input == "m-" || input == "scalar_add"|| input == "scalar_subtract" || input == "scalar_multiply" || input == "scalar_divide" || input == "scalar_divided_by" || input == "interval_add" ||input == "interval_subtract" || input == "interval_multiply" || input == "interval_divide" ||input == "intersect" || input == "integers" || input == "cartesian_integers")){
		std::cout << "Error: illegal command" << std::endl;
	}
	if(input == en){
		std::cin >> a >> b;
	//a b
		if(b < a){
			std::cout << "Error: invalid interval as " << a << " > " << b << std::endl;
			if (ia == 1 && ib == 0){
				std::cout << "--" << std::endl;
			}else{
				std::cout <<  "[" << ia << ", " << ib << "]" << std::endl;
			}
		}

		else if( b >= a){
			std::cout << "[" << a << ", " << b << "]" << std::endl;
			ia = a;
			ib = b;
		}
		}
	//negate
	if ( input == "negate"){
		if (ia == 1 && ib == 0){
			std::cout << "--" << std::endl;
		}
	else{
		double tem;
		tem = ib;
		ib = -ia;
		ia = -tem;
		std::cout << "[" << ia << ", " << ib << "]" << std::endl;
	}
	}
	//invert
	if (input == "invert"){
		if ( ia == 1 && ib == 0){
			std::cout << "--" << std::endl;
		}
		else if (ia <= 0 && ib >= 0){
			std::cout << "Error: division by zero" << std::endl << "--" << std::endl;
			ia = 1;
			ib = 0;
		}
		else {
			double tem;
			tem = ia;
			ia = 1/ib;
			ib = 1/tem;
			std::cout << "[" << ia << ", " << ib << "]"<< std::endl;
		}
	}
	//ms
	if (input == "ms"){
		if (ia == 1 && ib == 0){
			std::cout << "--" << std::endl;
		} else{
			ma = ia;
			mb = ib;

			std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}
	}
	//mr
	if (input == "mr"){
		if(ia == 1 && ib == 0){
			std::cout << "--" << std::endl;
		}
		else if(ma != 1 && mb != 0){//ms
			std::cout << "[" << ma << ", " << mb << "]" << std::endl;

		}
		else if(ma == 1 && mb ==0){//mc
			std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}
		else {

			std::cout << "[" << ia << ", " << ib << "]" << std::endl;

		}
	}
	//mc
	if (input == "mc"){
	if (ia == 1 && ib == 0){
		std::cout << "--" << std::endl;
	}else {
		ia = ma;
		ib = mb;
		ma = 1;
		mb = 0;
		std::cout << "[" << ia << ", " << ib << "]" << std::endl;
	}
}

	//m+
	if (input == "m+"){
		if (ia == 1 && ib == 0){
			std::cout << "--" << std::endl;
		} else {
			ma += ia;
			mb += ib;
			std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}

	}
	//m-
	if (input == "m-"){
		if (ia == 1 && ib == 0){
			std::cout << "--" << std::endl;
		} else {
			ma -= ia;
			mb -= ib;
			std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}
	}

	//scalar_add c
	if (input == "scalar_add"){
		std::cin >> c;
		if(ia == 1 && ib == 0){
			std::cout << "--" << std::endl;
		} else {
			ia = ia + c;
			ib = ib + c;
			std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}
	}
	//scalar_subtract c
	if (input == "scalar_subtract"){
		std::cin >> c;
		if (ia == 1 && ib == 0){
			std::cout << "--" << std::endl;
		} else {
			ia = ia - c;
			ib = ib - c;
			std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}
	}
	//scalar_multiply c
	if (input == "scalar_multiply"){
		std::cin >> c;
		if (ia == 1 && ib == 0){
		std::cout << "--" << std::endl;
		} else if(c < 0 ){
			double tem;
			tem = ia;
			ia = ib*c;
			ib = tem*c;
			std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}
		else {
			ia = ia*c;
			ib = ib*c;
			std::cout << "[" << ia << ", " << ib << "]" << std::endl;

		}
	}
	//scalar_divide c
	if (input == "scalar_divide"){
		std::cin >> c;
		if (ia == 1 && ib == 0){
		std::cout << "--" << std::endl;
		} else if (c == 0){
			ia = 1;
			ib = 0;
			std::cout << "Error: division by zero" << std::endl << "--" << std::endl;
		} else if ( c > 0){
			ia = ia/c;
			ib = ib/c;
			std::cout << "[" << ia << ", " << ib << "]" << std::endl;

		} else{
			double tem;
			tem = ia;
			ia = ib/c;
			ib = tem/c;
			std::cout << "[" << ia << ", " << ib << "]" << std::endl;

		}
	}
	//scalar_divided_by c
	if (input == "scalar_divided_by"){
		std::cin >> c;
		if (ia == 1 && ib == 0){
		std::cout << "--" << std::endl;
		}else if (ia <= 0 && ib >= 0){
		std::cout << "Error: division by zero" << std::endl << "--" << std::endl;
		ia = 1;
		ib = 0;
		}else if ( c > 0){
			double tem;
			tem = ia;
			ia = c/ib;
			ib = c/tem;
		std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}else if ( c <= 0){
			ia = c/ia;
			ib = c/ib;
		std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}
	}
	//interval_add c d
	if(input =="interval_add"){
		std::cin >> c >> d;
		if(c > d){
		std::cout << "Error: invalid interval as " << c << " > " << d << std::endl;
		if (ia == 1 && ib == 0){
		std::cout << "--" << std::endl;
		}
		else {
		std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}
		}
		if(c <= d){
			if (ia == 1 && ib == 0){
			std::cout << "--" << std::endl;
			}else{
			ia += c;
			ib += d;
			std::cout << "[" << ia << ", " << ib << "]" << std::endl;
			}
		}
	}
	//interval_subtract c d
	if(input == "interval_subtract"){
		std::cin >> c >> d;
		if(c > d){
		std::cout << "Error: invalid interval as " << c << " > " << d << std::endl;
		if (ia == 1 && ib == 0){
		std::cout << "--" << std::endl;
		} else {
		std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}
		}
		if(c <= d){
			if (ia == 1 && ib == 0){
			std::cout << "--" << std::endl;
			}else{
			ia -= d;
			ib -= c;
			std::cout << "[" << ia << ", " << ib << "]" << std::endl;
			}
		}
	}
	//interval_multiply c d
	if(input == "interval_multiply"){
			std::cin >> c >> d;
			if(c > d){
			std::cout << "Error: invalid interval as " << c << " > " << d << std::endl;
			if (ia == 1 && ib == 0){
			std::cout << "--" << std::endl;
			} else {
			std::cout << "[" << ia << ", " << ib << "]" << std::endl;
			}
			}
			if(c <= d){
				if (ia == 1 && ib == 0){
				std::cout << "--" << std::endl;
				}else{
				double tem;
				tem = ia;
				ia = min(min(min(ia*c,ia*d),c*ib),ib*d);
				ib = max(max(max(tem*c,tem*d),c*ib),ib*d);
				std::cout << "[" << ia << ", " << ib << "]" << std::endl;
				}
			}
		}
	//interval_divide c d
	if(input == "interval_divide"){
		std::cin >> c >> d;
		if(c > d){
		std::cout << "Error: invalid interval as " << c << " > " << d << std::endl;
		if (ia == 1 && ib == 0){
		std::cout << "--" << std::endl;
		} else {
		std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}
		}
		if(c <= d){
			if (ia == 1 && ib == 0){
			std::cout << "--" << std::endl;
			}
		else if(c <= 0 && d >= 0){
		std::cout << "Error: division by zero" << std::endl << "--" << std::endl;
		ia = 1;
		ib = 0;
		}
		else{
		double tem;
		tem = ia;
		ia = min(min(min(ia/c,ib/d),ib/c),ia/d);
		ib = max(max(max(tem/c,ib/d),ib/c),tem/d);
		std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}
		}
	}
	//intersect
	if(input == "intersect"){
		std::cin >> c >> d;
		if(c > d){
		std::cout << "Error: invalid interval as " << c << " > " << d << std::endl;
		if (ia == 1 && ib == 0){
		std::cout << "--" << std::endl;
		} else {
		std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}
		}

		if(c <= d){
			if (ia == 1 && ib == 0){
			std::cout << "--" << std::endl;
			}else {
			double left;
			double right;
			left = max(ia,c);
			right = min(ib,d);
			if(left <= right){
			ia = left;
			ib = right;
		std::cout << "[" << ia << ", " << ib << "]" << std::endl;
			}else {
				std::cout << "--" << std::endl;
			}
		}
		}
	}
	//integers
	if(input == "integers"){
		if (ia == 1 && ib == 0){
		std::cout << "--" << std::endl;
		}else{
		int x = std::ceil(ia);
		int y = std::floor(ib);
		for(int i = x;i < y; i++){
		std::cout << i << ", ";
		}
		std::cout << y << std::endl;
		std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}
	}
	//cartesian_integers c d
	if(input == "cartesian_integers"){
		std::cin >> c >> d;
		if(c > d){
		std::cout << "Error: invalid interval as " << c << " > " << d << std::endl;
		if (ia == 1 && ib == 0){
		std::cout << "--" << std::endl;
		} else {
		std::cout << "[" << ia << ", " << ib << "]" << std::endl;
		}
		}
		if(c <= d){
			if (ia == 1 && ib == 0){
			std::cout << "--" << std::endl;
			} else {
			int x= std::ceil(ia);
			int y= ib;
			int w= std::ceil(c);
			int z= d;
			if(x<=y&&w<=z){
			for(int i=x;i<y;i++){
				for(int j=w;j<=z;j++){
					std::cout<<"("<<i<<","<<j<<")"<<",";
				}
			}
			for(int j=w;j<z;j++){
				std::cout<<"("<<y<<", "<<j<<")"<<",";
			}
			std::cout<<"("<<y<<", "<<z<<")"<<std::endl;
			std::cout<<"["<<ia<<", "<<ib<<"]"<<std::endl;
		}
			}
//		else std::cout<<"["<<a<<", "<<b<<"]"<<std::endl;
		}
	}
//	else{
//		std::cout << "Error: illegal command" << std::endl;
//	}


	}while(input != str1);

	std::cout << "Bye bye: Terminating interval calculator program.";
	return 0;
}


