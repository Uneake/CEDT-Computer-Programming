#include <iostream>
#include <cmath>

int x,y,zig_min,zig_max,zag_min,zag_max,n=1;
main(){
  std::cin>>zig_min>>zig_max;
  zag_min = zig_max;
  zag_max = zig_min;
  while (1)
  {
    std::cin>>x;
    if(x==-998||x==-999)break;
    std::cin>>y;
    if(n%2){
      zig_min = std::min(zig_min,y);
      zig_max = std::max(zig_max,x);
      zag_min = std::min(zag_min,x);
      zag_max = std::max(zag_max,y);
    }
    else {
      zig_min = std::min(zig_min,x);
      zig_max = std::max(zig_max,y);
      zag_min = std::min(zag_min,y);
      zag_max = std::max(zag_max,x);
    }
    n++;
  }
  if(x==-998)std::cout<<zig_min<<' '<<zig_max;
  else if(x==-999)std::cout<<zag_min<<' '<<zag_max;
}