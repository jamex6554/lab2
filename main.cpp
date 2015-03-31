#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "bmi.h"
using namespace std;
int main(){
	string headline;
	float h,w,ans;
	bmi BMI;
	ifstream inFile("file.in", ios::in);
	if(!inFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}
	ofstream outFile("file.out", ios::out);
	if(!outFile) {
	cerr << "Failed opening" << endl;
	exit(1);
	}
	while(inFile >> h >> w) {
		BMI.hei_read(h);
		BMI.wei_read(w);
		ans= BMI.BMI();
	if(ans<15){
		outFile<<ans<<"\t"<<"Very severely underweight"<<endl; 
	}
	if(15<=ans&&ans<16){
                outFile<<ans<<"\t"<<"Severely underweight"<<endl;
        }
	if(16<=ans&&ans<18.5){
                outFile<<ans<<"\t"<<"Underweight"<<endl;
        }
        if(18.5<=ans&&ans<25){
                outFile<<ans<<"\t"<<"Normal"<<endl;
        }
        if(25<=ans&&ans<30){
                outFile<<ans<<"\t"<<"Overweight "<<endl;
        }
	if(30<=ans&&ans<35){
                outFile<<ans<<"\t"<<"Obese Class I (Moderately obese)"<<endl;
        }
        if(35<=ans&&ans<40){
                outFile<<ans<<"\t"<<"Obese Class II (Severeely obese)"<<endl;
        }
        if(40<=ans){
                outFile<<ans<<"\t"<<"Obese Class  III (Very severely obese) )"<<endl;
        }
outFile<<"\n";
}
return 0;
}
