public class Kata {
  public static int[] invert(int[] array) {
  int i;
  for( i=0;i<array.length;i++){
  array[i]*=-1;
  }
  return array;
  
  }
}
