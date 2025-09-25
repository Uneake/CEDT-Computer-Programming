#include <iostream>
#include <map>
using namespace std;
int F(int n) { // Fibonacci number
  if(n/2==0)return n;
  int n_1 = F((n+1)/2),n_2=F((n+1)/2-1);
  if(n%2){
    return n_1*n_1+n_2*n_2;
  }
  else {
    return (2*n_2+n_1)*n_1;
  }
}
int M(int n) { // Motzkin number
  if(n/2==0)return 1;
  int m_1=M(n-1);
  int tmp = M((n-2)/2)*M((n-2)-(n-2)/2);
  if((n-2)%2)tmp*=2;
  int sum=0;
  for(int k=0;k<(n-2)/2;k++)sum+=(M(k)*(M(n-2-k)));
  sum*=2;
  sum+=tmp+m_1;
  return sum;
}
int S(int n) { // Schröder–Hipparchus Number
  if(n==1||n==2)return 1;
  return ((6*n-9)*S(n-1)-(n-3)*S(n-2))/n;
}
int D(int n) { // Derangement
  if(n==0)return 1;
  return  n*D(n-1)+ ((n%2) ? -1:1);
}
int main() {
 map<string, int(*)(int)> func = {{"F",F}, {"M",M}, {"S",S}, {"D",D}};
 string fn;
 int p;
 while (cin >> fn >> p) {
 if (func.find(fn) != func.end())
 cout << fn << '(' << p << ") = " << func[fn](p) << endl;
 }
 return 0;
}
