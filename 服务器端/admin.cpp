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
	freopen("����.txt","r",stdin);
	cin>>ans;
	for(int i=1;i<=ans;i++){
		cin>>d[i].t;
	}
	freopen("CON","r",stdin);
	cout<<"��ӭʹ��վ��ϵͳ"<<endl;
	while(true){
		cout<<"Ҫ��ʲô"<<endl<<"1.�鿴����"<<endl<<"2.��ӹ���Ա"<<endl<<"3.����Ա�б�"<<endl<<"4.��Ȩ����"<<endl<<"5.�˳�"<<endl;
		cin>>n;
		if(n==1){
			for(int i=1;i<=ans;i++){
				cout<<d[i].t<<endl;
			}
			cout<<"����Ϊ�����б�������ֲ��������ۣ����������.txt�޸�"<<endl;
		}
		else if(n==2){
			cnt++;
			cout<<"�������µĹ���Ա����:";
			getline(cin,s[cnt].name);
			cout<<"������ȼ�������):";
			cin>>s[cnt].z;
			cout<<"ok"<<endl;
		}
		else if(n==3){
			for(int i=1;i<=cnt;i++){
				cout<<"����:"<<s[i].name<<endl<<"Ȩ��:"<<s[i].z<<endl;
			}
			cout<<"����Ϊ����Ա�б�����Ա���Ը����������"<<endl;
		}
		else if(n==4){
			cout<<"����վʹ��bsd3.0���֤"<<endl;
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
