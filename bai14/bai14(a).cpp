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
    cin>>horizontalCount>>verticalCount;
    cin>>constructionLength>>constructionWidth;
    int index1=0,index2=0,index=0;
    for (int i=0;i<s.length();i++){
        if (s[i]!=','&&index%2==0){
            x[index1]=(int)s[i]-48;
            index1++;
            index++;
        }
        else if(s[i]!=','&&index%2==1){
            y[index2]=(int)s[i]-48;
            index2++;
            index++;
        }
    }
    queue <double> q;
    int length=x[1]-x[0];
    int width=y[2]-y[1];
    double horizontalStep=(double)length/horizontalCount;
    double verticalStep=(double)width/verticalCount;
    double vertical[100],horizontal[100];int index3=0,index4=0;
    for (int i=0;i<=horizontalCount;i++){
        // horizontal.push(i*horizontalStep);
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
