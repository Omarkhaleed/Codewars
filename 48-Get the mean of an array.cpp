int get_average(std::vector <int> marks)
{
int sum=0,avg;
  for(int i=0;i<marks.size();i++){
  sum+=marks[i];
}
avg=sum/marks.size();
return avg;
}
