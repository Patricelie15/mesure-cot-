#include <iostream>
#include <math.h>



int main() { 

    std::string nature ;
    int a, b, c;
    float xa, xb, xc, ya, yb, yc, ab, ac, cb, x, y, z;

   std::cout << "entrer la coordonnee x du point a" << std::endl;  
   std::cin >> xa;
   std::cout << "entrer la coordonee y du point a" << std::endl;
   std::cin >> ya;
   std::cout << "le point a a pour coordonnees" << xa <<"," << ya << std::endl;

   std::cout << "entrer la coordonnee x du point b" << std::endl; 
   std::cin >> xb;
   std::cout << "entrer la coordonee y du point b" << std::endl;
   std::cin >> yb;
   std::cout << "le point b a pour coordonnees" << xb <<","<< yb << std::endl;

   std::cout << "entrer la coordonnee x du point c" << std::endl; 
   std::cin >> xc;
   std::cout << "entrer la coordonee y du point c" << std::endl;
   std::cin >> yc;
   std::cout << "le point c a pour coordonnees" << xc <<"," << yc << std::endl;

   z= ((xb-xa) * (xb-xa)) + ((yb-ya) *(yb-ya)) ;
   ab = sqrt(z);
   std::cout <<" la distance ab est" << ab << std::endl;

   x= ((xc-xa) * (xc-xa)) + ((yc-ya) * (yc-ya));
   ac= sqrt(x);
   std::cout <<" la distance ac est" << ac << std::endl;

   y=((xb-xc) * (xb-xc)) + ((yb-yc) * (yb-yc));
   cb= sqrt(y);
   std::cout <<" la distance cb est" << cb << std::endl;

std::cout << "les mesures des cotes des triangles sont" << ab <<"," << ac <<"," << cb << std::endl;
                                                                                                                                         
                                                                                                

    return 0;
} 