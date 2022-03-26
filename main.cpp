#include <iostream>
#include <vector>
int main()
{
  cout<<"test for git";
  std::vector<float> testvector{1,25,6,68,8};
  for(auto v : testvector)
    std::cout<<v<<" ";
  std::cout<<std::endl;

  std::set<int> testset{5,3,8};
  testset.emplace(1);
  return 0;
  }
