#include<iostream>
#include<cstring>

using namespace std;
int Table[1001][1001];
int main()
{
int i,j,count,l,t;
char str[1001];
cin>>t;
while(t--)
{
cin>>str;
l=strlen(str);
for(i=0;i<l;i++)
{
Table[i][1]=1;
Table[i][0]=1;
}

count=l;

for(i=2;i<=l;i++)
{
for(j=0;j<l;j++)
{
if(i+j-1<l)
{
if((str[j]==str[j+i-1]) && Table[j+1][i-2]==1)
{
count++;
Table[j][i]=1;
}
else
Table[j][i]=0;
}

}

}

cout<<count<<endl;
}
return 0;
}
