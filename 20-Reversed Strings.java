public class Kata {

  public static String solution(String str) {
  String reverse="";
  int length=str.length();
  for(int i=length-1;i>=0;i--)
  reverse=reverse+str.charAt(i);
    return reverse;
  }

}
