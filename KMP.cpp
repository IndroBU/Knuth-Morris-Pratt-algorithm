///God is Almighty
///KMP Algorithm
#include<stdio.h>
#include<string.h>
//using namespace std;
char P[10000000];
char T[10000000];
int main()
{
   // string P,T;

    long long int cs,ct;
    //cin>>cs;

     for(ct=1; ct<=cs; ct++) {
   // cin>>T>>P;
    scanf("%lld",&cs);
    scanf("%s %s",&T,&P);
   long long int n,m,k,i,j;
   // n=T.size();
    n=strlen(T);
    //m=P.size();
    m=strlen(P);
    ///LPPS=Longest Proper Prefix Suffix
    long long int  LPPS[m];
    i=1;
    j=0;
    LPPS[0]=0;
    while(i<m)
    {

            if(P[i]==P[j]){
                    j=j+1;
              LPPS[i]=j;
              i=i+1;

            }
            else
            {
                if(j)
                   j=LPPS[j-1];
            else {
                    LPPS[i]=0;
                    i=i+1;
            }
            }
    }
    /// LPS= Longest Proper Prefix  Suffix
   for(i=0; i<m; i++)
    {
       // cout<<A[i]<<" ";
       printf("%lld ",LPPS[i]);
    }
    //cout<<endl;
    printf("\n");
    i=0;
    j=0;
   long long int f=0;
    while(i<n)
    {

           if(T[i]==P[j]){

              j=j+1;

              i=i+1;
            }
            if(j==m)
            {
                f++;
                j=LPPS[j-1];
            }
            else if(i<n && T[i]!=P[j])
            {
                if(j)
                    j=LPPS[j-1];
                else
                   i=i+1;

            }


    }

     // cout<<"Case "<<ct<<": "<<loc<<endl;
      printf("Case %lld: %lld\n",ct,f);
    }

    return 0;
}
