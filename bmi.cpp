#include"bmi.h"
float bmi::BMI(){
	float ans;
	ans=weight*10000/(height*height); 
	return ans;
}
void bmi::hei_read(float enter){
	height=enter;
}
void bmi::wei_read(float enter){
	weight=enter;
}

