public class CodeWars {
  public static int strCount(String str, char letter) {
    int x=0;
    for(int i=0;i<str.length();i++){
    if(letter==str.charAt(i))
    x++;
  }
  return x;
}
} 
