#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main()
{
    double x[100],y[100];
    double horizontalCount,verticalCount;
    double constructionLength,constructionWidth;
    string s;
    cin>>s;
    s+=',';
    cin>>horizontalCount>>verticalCount;
    cin>>constructionLength>>constructionWidth;
    int index1=0,index2=0,index=0;
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
    int length=x[1]-x[0];
    int width=y[2]-y[1];
    double horizontalStep=(double)length/horizontalCount;
    double verticalStep=(double)width/verticalCount;
    double vertical[100],horizontal[100];int index3=0,index4=0;
    for (int i=0;i<=horizontalCount;i++){
        horizontal[index4]=i*horizontalStep;
        index4++;
    }
    for(int i=0;i<=verticalCount;i++){
        vertical[index3]=i*verticalStep;
        index3++;
    }
    for(int i=0;i<index3-1;i++){
        double temp1=(vertical[i]+vertical[i+1])/2;
        for(int j=0;j<index4-1;j++){
            cout<<(horizontal[j]+horizontal[j+1])/2<<","<<temp1<<","<<horizontalStep<<","<<verticalStep<<" ";
        }
        cout<<endl;
    }
}
