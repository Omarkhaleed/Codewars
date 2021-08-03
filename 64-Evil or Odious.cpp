std::string evil(int n)
{
//مجموع الارقام البينارية للرقم==رقم زوجي اذا هي ايفيل ولو مجموعها فردي يبقي اووديوس
int i=0;
while(n!=0){
if(n%2!=0)
i++;
n/=2;
}
if(i%2==0)
return "It's Evil!";
else
 return "It's Odious!";
}
