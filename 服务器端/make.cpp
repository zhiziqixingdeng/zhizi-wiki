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
		cout<<"������Ҫ��ʲô"<<endl<<"1.�����վ"<<endl<<"2.�˳�"<<endl;
		cin>>n;
		if(n==1){
			cnt++;
			cout<<"��������վ����:";
			getline(cin,s[cnt].name);
			cout<<"����������:";
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
