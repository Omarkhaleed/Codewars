void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{
if (value==1)
  return func1();
  else
    return func2();
}
