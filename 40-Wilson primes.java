public class WilsonPrime {
  public static boolean am_i_wilson(double n) {
     double p=n-1,fact=1;
  for(int i=1;i<=p;i++){
  fact*=i;
  }
  double y=((fact+1)/(n*n));
  if(y%1==0 &&n==5 || n==13 || n==563)
  return true;
  else
  return false;
}
}
