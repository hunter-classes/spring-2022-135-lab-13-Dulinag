#include <iostream>
#include "funcs.h"

#include <string>




std::string printRange(int left, int right)//recursive function
{
  std::string a = " ";
    if(left>right)
        return " ";
    std::cout<<left<<" ";
    printRange(left + 1, right);

    a += std::to_string(left);

    return a;
}


int sumRange(int left, int right){


  if(left == right)
      return left;
  else
      return left + sumRange(left + 1, right);




}


int sumArray(int *arr, int size){

if (size < 0){

  return 0;
}
return (sumArray(arr, size-1) + arr[size -1]);

}


bool isAlphanumeric(std::string s){


  if (s.size() < 1)
    return true;

  const char *c = s.c_str();

  if (!isalpha(c[0]))
  {
    return false;
  }
  else
  {
    return isAlphanumeric(c+1);
  }
}


bool nestedParens(std::string s){



  const char *c = s.c_str();

    if (c =="()")
    {


       nestedParens(c+1);
         return true;
  }

   return false;
 }
