#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
class Trie{
    public:
    Trie* arr[10]={0};
};
bool isPresent(Trie * head,string str){
    // check if the string is present in the trie or not.
    // check if the string is of length 12 and contains only digits.
    if(str.length()!=12)
        return false;

    Trie * temp=head;
    for(int i=0;i<12;i++){
        char ch=str[i];
        if(ch<'0' || ch>'9')
            return false;
        Trie * ptr=temp->arr[ch-'0'];
        if(ptr){
            temp=ptr;
        }
        else{
            return false;
        }
    }
    return true;
}
void printTrie(Trie* node, string path = "") {
    if (!node) return;

    bool isLeaf = true;
    for (int i = 0; i < 10; ++i) {
        if (node->arr[i]) {
            isLeaf = false;
            printTrie(node->arr[i], path + char(i + '0'));
        }
    }

    if (isLeaf) {
        cout << "Path: " << path << endl;
    }
}

string noSpaceFormat(string str){
    string res="";
    for(auto &it:str){
        if(it<'0'||it>'9'){

        }
        else{
            res+=it;
        }
    }
    return res;
}
int main(){
    string inFileName = "AadhaarNumbers-TestData.csv";
    fstream inFile;
    inFile.open(inFileName,ios::in);
    if(!inFile && !inFile.is_open())
    {
        cout<<"Error opening file for reading.";
    }

    char sLine[15]="";
    int count=0;
    Trie *head = new Trie();

    while(inFile.getline(sLine,15,'\n'))
    {
        Trie * temp=head;
        
        for(int i=0;i<15;i++)
        {
            char ch=sLine[i];
            if(ch>='0' && ch<='9')
            {
                // only num characters
                Trie * ptr=temp->arr[ch-'0'];
                if(ptr){
                    temp=ptr;
                }
                else{
                    //insert
                    Trie * node=new Trie();
                    temp->arr[ch-'0']=node;
                    temp=node;
                }
            }
        }
        // if(count==100)
        // break;
        count++;
    }
    cout<<"Total number of Aadhaar numbers are read: "<<count<<endl;
    // create a trie and store it too in a persistance storage for fault tolerance.
    inFile.close();

    // printTrie(head);
    // Find a number
    while(true){
        string str;
        cin>>str;
        str = noSpaceFormat(str);
        if(str=="exit")
            break;

        if(isPresent(head,str)){
            cout<<"Number is present in the trie"<<endl;
        }
        else{
            cout<<"Number is not present in the trie"<<endl;
        }
    }
}