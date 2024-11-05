#include<iostream>
#include<map>
using namespace std;
int main()
{int arr[5]={2, 3, 2, 3, 5};
int arr1[5];
map<int,int>p;
for(int i=0;i<5;i++)
{
    p[arr[i]]++;
}
for(auto a:p)
{
    cout<<a.first<<" "<<a.second<<endl;
}
for(int i=0;i<5;i++)
{
arr1[i]=p[i+1];
}
for(auto a:arr1)
{
    cout<<a<<" ";
}
 return 0;
}
//lecture 6:Question 2:striver