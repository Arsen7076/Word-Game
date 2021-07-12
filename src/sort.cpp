#include"sort.hpp"
void charsort (string str){                             //run sort algorithm
         int size=0;
         sort(str.begin(),str.end());                    //sorting
 do{ cout<<"-"<<str<<endl;
         size++;
 }while(next_permutation(str.begin(),str.end()));                //cheng parametrs for sorting
cout<<"possible Options--" <<size<<endl;
 }

