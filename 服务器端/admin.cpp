#include <iostream>
using namespace std;
int n;
struct admin{
	string name;
	int z;
}s[100000];
int cnt;
int ans;
struct ly{
	string t;
}d[9999999];
int main(){
	freopen("admin.txt","r",stdin);
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
		getline(cin,s[i].name);
		cin>>s[i].z;
	}
	freopen("留言.txt","r",stdin);
	cin>>ans;
	for(int i=1;i<=ans;i++){
		cin>>d[i].t;
	}
	freopen("CON","r",stdin);
	cout<<"欢迎使用站长系统"<<endl;
	while(true){
		cout<<"要干什么"<<endl<<"1.查看留言"<<endl<<"2.添加管理员"<<endl<<"3.管理员列表"<<endl<<"4.版权问题"<<endl<<"5.退出"<<endl;
		cin>>n;
		if(n==1){
			for(int i=1;i<=ans;i++){
				cout<<d[i].t<<endl;
			}
			cout<<"以上为留言列表，如果发现不友善言论，请进入留言.txt修改"<<endl;
		}
		else if(n==2){
			cnt++;
			cout<<"请输入新的管理员名称:";
			getline(cin,s[cnt].name);
			cout<<"请输入等级（数字):";
			cin>>s[cnt].z;
			cout<<"ok"<<endl;
		}
		else if(n==3){
			for(int i=1;i<=cnt;i++){
				cout<<"名字:"<<s[i].name<<endl<<"权限:"<<s[i].z<<endl;
			}
			cout<<"以上为管理员列表，管理员可以跟您提出建议"<<endl;
		}
		else if(n==4){
			cout<<"本网站使用bsd3.0许可证"<<endl;
		}
		else{
			break;
		}
	}
	freopen("admin.txt","w",stdout);
	cout<<cnt<<endl;
	for(int i=1;i<=cnt;i++){
		cout<<s[i].name<<endl<<s[i].z;
	}
	return 0;
}
