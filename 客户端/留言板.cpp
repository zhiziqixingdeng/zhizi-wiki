#include <iostream>
#include <string>
using namespace std;
int cnt;
struct ly{
	string t;
}s[9999999];
int main(){
	freopen("����.txt","r",stdin);
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
		cin>>s[i].t;
	}
	freopen("CON","r",stdin);
	cout << "Content-type:text/html\r\n\r\n";
	cout<<"<html>"<<endl;
	cout<<"<head>"<<endl;
	cout<<"<title>���԰�</title>"<<endl;
	cout<<"<h1>���԰�</h1>"<<endl;
	cout<<"<i>�����κ�����Լ����飬����������˵����</i>"<<endl;
	cout<<"</head>"<<endl;
	cout<<"<body>"<<endl;
	string r = "<form action=\"demo.exe\">\n����: <input type=\"text\" name=\"FirstName\" value=\"����\"><br>\n<input type=\"submit\" value=\"�ύ\">\n</form>\n";
	cout<<r;
	cout<<"<i>������������</i>"<<endl;
	cout<<"</br>"<<endl;
	for(int i=1;i<=cnt;i++){
		cout<<s[i].t<<endl;
	}
	cout<<"</body>"<<endl;
	cout<<"</html>"<<endl;
	return 0;
}
