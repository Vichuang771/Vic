#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i=0,t,g,c;
    while(true){
        cout<<"小藍:請輸入上限~"<<endl;
        cout<<" 我 : ";
        cin>>b;
        cout<<"小藍:請輸入下限~"<<endl;
        cout<<" 我 : ";
        cin>>a;
        if(b>a or b==a){
            c=b-a+1;
            t=rand()%(c)+a;
            cout<<"小藍:好的，範圍為"<<a<<"到"<<b<<"。請開始猜~ "<<endl;
            break;
        }else if(b<a){
            cout<<"小藍:下限不能大於上限喔，請再輸入一次"<<endl;
        }
    }
    while(true){
        i++;
        cout<<" 我 : ";
        cin>>g;
        if(g>b or g<a){
        cout<<"小藍:超過範圍了啦！別瞎猜！"<<"範圍為"<<a<<"到"<<b<<endl;
        }else if(g>t){
        b=g-1;
        cout<<"小藍:太大了唷！範圍縮減為"<<a<<"到"<<b<<endl;
        }else if(g<t){
        a=g+1;
        cout<<"小藍:太小了唷！範圍縮減為"<<a<<"到"<<b<<endl;
        }else if(g==t){
        cout<<"小藍:Congratulations!!你猜對了！"<<endl;
        cout<<"小藍:你從"<<c<<"個數字中猜了"<<i<<"次就猜中了！";
        break;
        return 0;
        }
    }
}
