#include <iostream>
#include<fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

int main(){
   int N = 0;
   double mean, stddev, sum = 0 ,sumpow = 0;
   ifstream score;
   score.open("score.txt");
   
   string textline;
   while(getline(score, textline)){
      sum = sum + atof(textline.c_str());
      sumpow = sumpow + pow(atof(textline.c_str()), 2);
		N++;
	}
   mean = sum/N ;
   stddev = sqrt( (sumpow/N ) - mean*mean );

   cout << "Number of data = " << N << endl;
   cout << setprecision(3);
   cout << "Mean = " << mean << endl;
   cout << "Standard deviation = " << stddev << endl;
}