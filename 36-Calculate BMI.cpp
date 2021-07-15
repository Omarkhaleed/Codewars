std::string bmi(double w, double h) 
{
double sum= (w/h/h);
if(sum<=18.5)
return "Underweight";
else if(sum<=25.0)
return "Normal";
else if(sum<=30.0)
return "Overweight";
else
return "Obese";
  }
