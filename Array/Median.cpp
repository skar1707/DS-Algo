#include <iostream>
#include <vector>

using namespace std;


double mean(vector<int> vec){

   double med = 0;
   int size = vec.size();
   sort(vec.begin(),vec.end());
   if (size % 2 != 0)
      med = (double)vec[size/2];
   else
      med = (double)(arr[(size-1)/2] + arr[size/2])/2.0;

   return med;
}

int main(){
   vector<int> v = {3,5,2,1,7,8};

   cout << "Median is : " << median(v)<< endl;
   return 0;
}