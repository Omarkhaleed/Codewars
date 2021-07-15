public class ZywOo {
  public static int sumOfDifferences(int[] arr) {
  int temp;
  for(int i=0;i<arr.length;i++){
  for(int j=i+1;j<arr.length;j++){
  if(arr[i]<arr[j]){
  temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
  }
  }
  }
  int sum=0;
  for(int x=0;x<arr.length-1;x++){
  sum+=arr[x]-arr[x+1];
  }
  return sum;
}
