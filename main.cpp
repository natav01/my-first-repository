#include <iostream>
#include <vector>
using namespace std;

int main () {
string Friend;
cout<<"Hello from natav01"<<endl;
bool PllugisCool ;
cout<<"Is Pllug cool?"<<endl;
cin>>PllugisCool;
if (PllugisCool == true){ 
cout<<"Yes it is!!!"<<endl;}
else { cout<<"No, it is not!!!"<<endl;}

vector  <string> YourFriend;

for (int i=1; i<4; i++) {

cout<<"Inpute name of your friends"<<endl;
cin>>Friend;
YourFriend.push_back(Friend);
}

cout<<"It is your friends:"<<endl;
for (int i =0; i<YourFriend.size(); i++)
cout<<YourFriend[i]<<endl;
}
