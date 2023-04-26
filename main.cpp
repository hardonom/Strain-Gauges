#include <iostream>
using namespace std;


class StrainGauge {

public: double findVr(double Vex, double VoU, double VoS)
{
return (VoU + VoS) / Vex;

} 

public: double findEpsilon(double Vr, double pR, double gaugeF)
{
return (-2.0)*Vr / gaugeF*( (pR+1.0) - Vr*(pr-1.0) );
}

}

int main() 
{

// finding epsilon, Vr
double pR = 0.3; // for metallic strain gauges
int gaugeF = 2; // look on the package for more accurate value maybe, 2 is approximation

StrainGauge myGauge;






return 0;

}
