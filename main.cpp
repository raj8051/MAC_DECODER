#include<bits/stdc++.h>
#include"header.h"
using namespace std;
/* bool uplink=true;
bool downlink=false; */
int main()
{
node n;
bool UL,DL=false;
std::ifstream inputFile("Your text file path "); // Replace "data.txt" with the path of your text file

if (!inputFile) {
std::cout << "Failed to open the file." << std::endl;
return 1;
}

std::string line;
std:: vector<std::string> Pdudata;
while (inputFile >> line) {
Pdudata.push_back(line);
}
inputFile.close();
for(auto v:Pdudata)
{
   int c (stoi(v,nullptr,16));
   n.insertlast(c);
}
node n2(UL,DL);
cout<<"\n Enter the uplink =1 or Downlink=0 \n"<<endl;
cin>>n.uplink;
if(UL)
{
    n.show();
    n.decode(UL);
}
else
{
    n.show();
    n.decode(DL);
}


    
}
