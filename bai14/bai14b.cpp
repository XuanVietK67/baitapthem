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
    double d1,d2,diaphragm,pitch;
    cin>>d1>>d2>>diaphragm>>pitch;
    double step1=2*d1,step2=2*(d1+d2);
    double edgeLength1=2*constructionLength+2*d1,edgeWidth1=2*constructionWidth+2*d1;
    double edgeLength2=2*(constructionLength+d1+d2),edgeWidth2=2*(constructionWidth+d1+d2);
    double h1=(2*diaphragm-edgeLength1)/2,h2=(2*diaphragm+edgeLength1)/2;
    double h3=(2*diaphragm-edgeLength2)/2,h4=(2*diaphragm+edgeLength2)/2;
    double c1=(2*pitch-edgeWidth1)/2,c2=(2*pitch+edgeWidth1)/2;
    double c3=(2*pitch-edgeWidth2)/2,c4=(2*pitch+edgeWidth2)/2;
    cout<<h1<<","<<c2<<" "<<h2<<","<<c2<<" "<<h2<<","<<c1<<" "<<h1<<","<<c1<<endl;
    cout<<h3<<","<<c3<<" "<<h4<<","<<c3<<" "<<h4<<","<<c4<<" "<<h3<<","<<c4;
}