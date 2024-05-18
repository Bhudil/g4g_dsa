#include <iostream>
vector<int> quadraticRoots(int a, int b, int c) {
    vector<int> ans;
    int r1,r2;

    int d = (b*b) - (4*a*c);


    //   if(d==0)
    //   {
    //       r1=r2= -b/2*a;
    //       ans.push_back(r1);
    //       ans.push_back(r2);
    //   }

    if(d<0)
    {
        ans.push_back(-1);
    }
    else
    {
        r1 = floor((-b + sqrt(d))/(2*a));
        r2 = floor((-b - sqrt(d))/(2*a));
        ans.push_back(max(r1,r2));
        ans.push_back(min(r1,r2));
    }
    return ans;

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
