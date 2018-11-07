/*
 * project1.cpp
 *
 *  Created on: 2018Äê10ÔÂ9ÈÕ
 *      Author: 15715
 */

#include<iostream>
#include<cmath>
int n = 0;
int pascal_triangle(int n);
int pascal_triangle(int n){
	int val = 1;
	int b = 0;

	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= i; j++){
			if(i == 0 || j == 0)
				val = 1;
		else
				val = val*(i - j + 1)/j;
			std::cout << val << " ";
			b++;
		}
		std::cout << std::endl;
	}
	std::cout << "The number of integers is ";
	return b;
}
int pascal_triangle_recursive(int n);
int pascal_triangle_recursive(int n){
	int r = 0;
	int c = 0;
	    if(n > 0){
	        pascal_triangle_recursive(n-1);
	    }
	    r = n;
	        int x = 1;
	        for(c = 0;c <= r; c++){
	            std::cout << x <<" ";
	            x= x * (r - c) / (c + 1);
	        }
	    std::cout << std::endl;
	    return (n+2) * (n+1)/2.0;
}
#ifndef MARMOSET_TESTING
int main();
#endif
#ifndef MARMOSET_TESTING
int main(){
	int n;
	std::cin >> n;
	std::cout << pascal_triangle(n - 1) << std::endl;
	std::cout << pascal_triangle_recursive(n - 1) << std::endl;
	return 0;
}
#endif
