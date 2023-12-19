#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
        int count = 0;
        float sum = 0, sum_square, mean;
        float mean_square, meanSquareSum;
        string textline;
        ifstream source("score.txt");
        while (getline(source, textline))
        {
            sum += atof(textline.c_str());
            sum_square += pow(atof(textline.c_str()), 2);
            count++;
        }
        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        mean = sum/count;
        mean_square = pow(mean, 2);
        meanSquareSum = sum_square/count;
        cout << "Mean = " << mean << "\n";
        cout << "Standard deviation = " << sqrt(meanSquareSum-mean_square);
}