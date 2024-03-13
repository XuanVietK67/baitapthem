#include <iostream>
#include <string>
#include <queue>
using namespace std;
void print(double x_[],double y_[],int index){
    cout<<x_[index]<<","<<y_[index]<<" "<<x_[index+1]<<","<<y_[index+1]<<" "<<x_[index+5]<<","<<y_[index+5]<<" "<<x_[index+4]<<","<<y_[index+4]<<endl;
}
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
    double verticalStep=(double)length/horizontalCount/2;
    double horizontalStep=(double)width/verticalCount/2;
    double d1;
    cin>>d1;
    double verticalCenter=length/2;
    double horizontalCenter=width/2;
    double x_[100],y_[100];
    x_[0]=verticalCenter-(2*d1+constructionLength+1);x_[1]=verticalCenter-1;
    x_[2]=verticalCenter+1;x_[3]=verticalCenter+(2*d1+constructionLength+1);
    y_[0]=horizontalCenter-(2*d1+constructionWidth+1);y_[4]=horizontalCenter-1;
    y_[8]=horizontalCenter+1;y_[12]=horizontalCenter+(2*d1+constructionWidth+1);
    for(int i=4;i<16;i++){
        x_[i]=x_[i-4];
    }
    for (int i=0;i<16;i++){
        double temp;
        if (i%4==0) temp=y_[i];
        else y_[i]=temp;
    }
    print(x_,y_,0);
    print(x_,y_,2);
    print(x_,y_,8);
    print(x_,y_,10);
}
