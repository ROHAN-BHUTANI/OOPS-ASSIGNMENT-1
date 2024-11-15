#include <iostream>
using namespace std;
class OverLoadDemo
 {
    public:
        void merge(string s1,string s2)
        {
            string s3,s4;
            int i=0;
            s1+=s2;
            while(s1[i]!='\0')
            {
                if(s1[i]=='a' ||s1[i]=='e' ||s1[i]=='i' ||s1[i]=='o' ||s1[i]=='u' || s1[i]=='A' ||s1[i]=='E' ||s1[i]=='I' ||s1[i]=='O' ||s1[i]=='U')
                {
                    s3+=s1[i];
                }
                else
                {
                    s4+=s1[i];
                }
                i++;
            }
            s3+=s4;
            cout<<s3;
        }
        int merge(string str)
        {
            int c,s=0,j;
            j=0;
            while(str[j]!='\0')
            {
                if(str[j]>=48 && str[j]<=57)
                {
                    c=str[j]-'0';
                    s=s+c;
                }
                j++;
            }
            return s;
        }
};
int main()
{
    OverLoadDemo o1;
    int c;
    string s1,s2,s3;
    cout<<"ENTER THE TWO STRINGS TO MERGE";
    getline(cin,s1);
    getline(cin,s2);
    o1.merge(s1,s2);
    cout<<"ENTER STRING";
    cin>>s3;
    c=o1.merge(s3);
    cout<<"THE RESULT IS"<<c;
    return 0;
}
