#include <iostream>
using namespace std;

void ordinal(int n){
	switch(n%10){
		case 1:
		      cout << "st";
		      break;
		case 2:
		      cout << "nd";
		      break;
		case 3:
		      cout << "rd";
		      break;
		default:
		      cout << "th";
	}
}
