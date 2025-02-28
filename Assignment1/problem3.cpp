#include <iostream>

int main(void){
  int x=2147483648;
  long int x2=2147483648*2147483648*2;
  int f=2;
  std::cout<<"Integer Series"<<std::endl;
  for (unsigned int i=0; i<7; ++i){
    std::cout<<"F"<<i<<" "<<f<<std::endl;
    f=f*f;
  }
  std::cout<<"Long Integer Series"<<std::endl;
  long int fl=2;
  for (unsigned int i=0; i<7; ++i){
    std::cout<<"F"<<i<<" "<<fl<<std::endl;
    fl=fl*fl;
  }
  
  std::cout<<"Unsigned Long Integer Series"<<std::endl;
  unsigned long  int fu=2;
  for (unsigned int i=0; i<7; ++i){
    std::cout<<"F"<<i<<" "<<fu<<std::endl;
    fu=fu*fu;
  }

  std::cout<<"This is not exactly the result I expected. The int/long int were able to represent more of the series than calculated."<<std::endl;
  std::cout<<"By specifying an int x =2147483648 and a long int x2=214748364*214748364*2 and compiling:"<<std::endl;
  std::cout<<"x="<<x<<std::endl;
  std::cout<<"x2="<<x2<<std::endl;
  std::cout<<"It becomes clear that int is exhibiting the overflow behavior of an 8 byte integer and long int exhibits that of a 16 byte integer"<<std::endl;
  

  return 0;
}
