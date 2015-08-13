/*
 * Another implementation by using pointer with the idea of "C code to remove spaces from a string"
 * http://articles.leetcode.com/2010/02/c-code-to-remove-spaces-from-string.html
 */

#include<iostream>
using namespace std;

void removeSpace(char *str){
  char *ptr = str;
  // char *dst = ptr;
  // cout << " Skip str[0]=" << *str << endl << endl;
  while (*ptr){
    if (*ptr++ != ' ')                // Move forward: str --> the first spaces of dst; ptr --> the 2nd character after them
      *str++ = *(ptr-1);              // Insert after str
    // cout << " dst=" << dst << "\n str=" << str << ",\n ptr=" << ptr << endl << endl;
  }
  *str = '\0';
}

int main()
{
  char str[]="abc  d e";
  cout << "Before removing, str=" << str << endl;
  removeSpace(str);
  cout << "After removing, str=" << str << endl;

  return 0;
}
