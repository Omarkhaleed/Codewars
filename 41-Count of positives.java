public class Kata
{
    public static int[] countPositivesSumNegatives(int[] input)
    {
    if (input == null || input.length == 0) return new int[] {};
    int sum=0;int i, x=0;
       for( i=0;i<input.length;i++){
      if(input[i]>0)
       x++;   
       if(input[i]<0)
       sum+=input[i];
       }
       return new int[]{x,sum};
     
}
}
