//#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
  unsigned long L=12345678;
  char *cp=(char*)&L;
  int *ip=(int*)&L;
  long *lp=(long*)&L;

  cout <<"\n&L = "<<&L;
  cout <<"\nL = "<<L;
  long *ch = (long*)cp;
  cout <<"\n *cp = "<<*ch;
  cout <<"\n *ip = "<<*ip;
  cout <<"\n *lp = "<<*lp;

  system("pause");
  return 0;
}
