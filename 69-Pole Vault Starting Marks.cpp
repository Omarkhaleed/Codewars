#include<math.h>
double startingMark(double bodyHeight){
 double m = (10.67-9.45)/(1.83-1.52);
    double c = 10.67 - m *1.83;
    return round(100*(m*bodyHeight + c))/100;
}
