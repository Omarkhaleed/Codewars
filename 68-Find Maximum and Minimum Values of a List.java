public class Kata {

  public int min(int[] list) {
  int crrmin=list[0];
   for(int i=0;i<list.length;i++)
    if(list[i]<crrmin)
    crrmin=list[i];
    return crrmin;
  }
  
  public int max(int[] list) {
  int crrmax=list[0];
   for(int i=0;i<list.length;i++)
    if(list[i]>crrmax)
    crrmax=list[i];
    return crrmax;
  }

}
