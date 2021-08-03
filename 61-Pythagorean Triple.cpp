bool PythagoreanTriple(const int a, const int b, const int c){
if( a*a==b*b+c*c)
return 1;
if(b*b==a*a+c*c)
return 1;
 if( c*c==b*b+a*a)
return 1;
else
  return false;
  }
