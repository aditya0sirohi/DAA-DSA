//count duplicate alphabets in an unsorted array 
#include<iostream>
#include<vector>

using namespace std;
Const int MAX_CHAR = 26;

char findocurence(const char arr[],int n)
{
for (int i =0;i<n;i++)
{
count[a[i] - 'a' ]++;
}

char maxchar ='a';
int maxoccurence = count[0];

for(int i = 1;i<MAX_CHAR;i++)
{
if(count[i] > maxoccurence)
{
maxoccurence = count[i];
maxchar = i +'a';
}
}
return maxchar;
}
int main()
{
const char alphabetarray[] = {'a','b','c','a','b','a','d','e','d','e'};
int n = sizeof(alphabetarray)/sizeof(alphabetarray[0]);

char result = findmaxoccurence(alphabetarray , n);
std::cout<<"alphabet with max occurence:"<<result<<endl;

return 0 ;
}
