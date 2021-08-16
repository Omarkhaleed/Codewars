std::vector<int> maps(const std::vector<int> & values) {
std::vector<int>v=values;
for(int i=0;i<v.size();i++)
      v[i] *= 2;
  return v;
}
