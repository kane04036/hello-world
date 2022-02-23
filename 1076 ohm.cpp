#include <iostream>
using namespace std;

int main()
{
    string colors[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    long colorsVal[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    long colorsMul[10]={1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
    
    string color1, color2, color3;
    long color1Val, color2Val, color3Mul;
    long result;
    cin>>color1;
    cin>>color2;
    cin>>color3;
    for(int i = 0; i < 10; i++){
        if(color1 == colors[i])
            color1Val = colorsVal[i];
        if(color2 == colors[i])
            color2Val = colorsVal[i];
        if(color3 == colors[i])
            color3Mul = colorsMul[i];
    }
    result = ((color1Val*10)+(color2Val)) * color3Mul;
    
    cout << result << endl;
}
