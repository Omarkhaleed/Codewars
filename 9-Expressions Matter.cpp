unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
    int max1=a*(b+c);
    int max2=a+b*c;
    int max3=a*b*c;
    int max4=(a+b)*c;
    int max5=a+b+c;
    if(max1>=max2 && max1>=max3 && max1>=max4  && max1>=max5)
    return max1 ; 
      else if(max2>=max3 && max2>=max1 && max2>=max4 && max2>=max5)
    return max2 ; 
    else  if(max3>=max2 && max3>=max1 && max3>=max4 && max3>=max5)
    return max3 ; 
    else if(max4>=max2 && max4>=max1 && max4>=max3 && max4>=max5)
    return max4;
    else
    return max5;
}
