#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n;
   cin>>n;
   vector<long long>v;
   for(long long i=1;i<=sqrt(n);i++)
   {
       if(n%i==0)
       {
           long long vector=n/i;
           if(i!=vector)
           {
            v.push_back(i);
            v.push_back(vector);
           }
           else if(i==vector){

           v.push_back(i);
           sort(v.begin(),v.end());
           }

       }
   }
    sort(v.begin(),v.end());
           for(long long i=0;i<v.size();i++)
           {
               cout<<v[i]<<endl;
           }
}


