#include <iostream>
#include <string>
using namespace std;
int cnt;
struct ly{
	string t;
}s[9999999];
int main(){
	freopen("留言.txt","r",stdin);
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
		cin>>s[i].t;
	}
	freopen("CON","r",stdin);
	cout << "Content-type:text/html\r\n\r\n";
	cout<<"<html>"<<endl;
	cout<<"<head>"<<endl;
	cout<<"<title>留言板</title>"<<endl;
	cout<<"<h1>留言板</h1>"<<endl;
	cout<<"<i>您有任何意见以及建议，可以在这里说出来</i>"<<endl;
	cout<<"</head>"<<endl;
	cout<<"<body>"<<endl;
	string r = "<form action=\"demo.exe\">\n内容: <input type=\"text\" name=\"FirstName\" value=\"内容\"><br>\n<input type=\"submit\" value=\"提交\">\n</form>\n";
	cout<<r;
	cout<<"<i>留言其他留言</i>"<<endl;
	cout<<"</br>"<<endl;
	for(int i=1;i<=cnt;i++){
		cout<<s[i].t<<endl;
	}
	cout<<"</body>"<<endl;
	cout<<"</html>"<<endl;
	return 0;
}
