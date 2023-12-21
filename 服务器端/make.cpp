#include <iostream>
#include <string>
using namespace std;
struct web{
	string name;
	string webin;
}s[1000000];
int cnt;
int main(){
	freopen("web.txt","r",stdin);
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
		getline(cin,s[i].name);
		getline(cin,s[i].webin);
	}
	freopen("CON","r",stdin);
	int n;
	while(true){
		cout<<"请输入要干什么"<<endl<<"1.添加网站"<<endl<<"2.退出"<<endl;
		cin>>n;
		if(n==1){
			cnt++;
			cout<<"请输入网站名字:";
			getline(cin,s[cnt].name);
			cout<<"请输入链接:";
			getline(cin,s[cnt].webin);
			cout<<"ok"<<endl;
		}
		else{
			break;
		}
	}
	freopen("web.txt","w",stdout);
	cout<<cnt<<endl;
	for(int i=1;i<=cnt;i++){
		cout<<s[i].name<<endl<<s[i].webin<<endl;
	}
	return 0;
}
