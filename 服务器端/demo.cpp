#include <iostream>
#include <string>
using namespace std;
string str;
int cnt;
struct web{
	string name;
	string webin;
}s[1000000];
int ans;
int main(){
	freopen("web.txt","r",stdin);
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
		getline(cin,s[i].name);
		getline(cin,s[i].webin);
	}
	freopen("CON","r",stdin);
	cout << "Content-type:text/html\r\n\r\n";
	cout<<"<html>"<<endl;
	cout<<"<head>"<<endl;
	cout<<"<h1>搜索结果</h1>"<<endl;
	cout<<"</head>"<<endl;
	cout<<"</body>"<<endl;
	getline(cin,str);
  int flag;
	for(int i=1;i<=cnt;i++){
		if(s[i].name.find(str)<s[i].name.length()){
			ans++;
	    cout<<"<p>"<<ans<<"."<<s[i].webin<<"</p>"<<endl;
	    flag=1;
		}
	}
	if(flag==0){
		cout<<"<p>暂无数据</p>"<<endl;
	}
	cout<<"</body>"<<endl;
	cout<<"</html>"<<endl;
	return 0;
}
