#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> array1 = {1,5,9};
     vector<int> array2 = {2, 3, 6, 7};

      int n=array1.size();
        int m=array2.size();
        
        if(array1.size()==0){
            cout<< array2[m/2];
        }
        
        if(array2.size()==0)
        {
            cout<< array1[n/2];
        }
        
        int i=0;
        
        while(i<m){
            
            array1.push_back(array2[i]);
            i++;
        }
        
        sort(array1.begin(),array1.end());
        
        int s=n+m;
        int str=0;
        int end=s-1;

        while(str<=end){
            
            
        }
}

/*for(int i=0;i<s;i++){
            cout<<array1[i]<<" ";
        }*/