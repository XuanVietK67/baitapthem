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
    double length=x[1]-x[0];
    double width=y[2]-y[1];
    double verticalStep=(double)length/horizontalCount;
    double horizontalStep=(double)width/verticalCount;
    double vertical[100],horizontal[100];int index3=0,index4=0;
    for (int i=0;i<=horizontalCount;i++){
        horizontal[index4]=i*horizontalStep;
        index4++;
    }
    for(int i=0;i<=verticalCount;i++){
        vertical[index3]=i*verticalStep;
        index3++;
    }
    double d1;
    cin>>d1; 
    double verticalDistance,horizontalDistance;
    if (index3<=2) horizontalDistance=0;
    else{
        horizontalDistance=2*(horizontalStep/2-constructionWidth/2-d1);
    }
    if(index4<=2) verticalDistance=0;
    else{
        verticalDistance=2*(verticalStep/2-constructionLength/2-d1);
    }
    if (verticalDistance!=0){
        cout<<verticalDistance<<endl;
    }
    else cout<<"undefined";
    if (horizontalDistance!=0) cout<<horizontalDistance;
    else cout<<"undefined";
}