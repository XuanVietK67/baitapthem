#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    s+=',';
    int x[100],y[100],index=0,index1=0,index2=0;
    string temp="";
    for (int i=0;i<s.length();i++){
        if (s[i]!=',') temp+=s[i];
        else{
            if (index%2==0){
                x[index1]=stoi(temp);
                index1++;
                index++;
                temp="";
            }
            else{
                y[index2]=stoi(temp);
                index2++;
                index++;
                temp="";
            }
        }
    }
    for (int i=0;i<index1;i++) cout<<x[i]<<" ";
    cout<<endl;
    for (int i=0;i<index2;i++) cout<<y[i]<<" ";
    cout<<endl;
    cout<<index1<<" "<<index2;
}