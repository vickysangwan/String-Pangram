#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
bool checkPangram(string& s)
{
    vector<bool> mark(26,false);
    int index;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            mark[s[i]-'a']=true;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            mark[s[i]-'A']=true;
        }
        else{
            continue;
        }
    }
    for(int i=0;i<=25;i++)
    {
        if(mark[i]==false)
        {
            return false;
        }
    }
    return true;
}
bool testChanges(string& s)
{
    int k;
    cout<<"Enter value of K"<<endl;
    cin>>k;
    vector<bool> mark(26,false);
    int flag=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            mark[s[i]-'a']=true;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            mark[s[i]-'A']=true;
        }
        else{
            continue;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(mark[i]==false)
        {
            flag++;
        }
    }
    if(flag<=k)
    {
        return true;
    }
    else{
        return false;
    }
}
void missingChar(string& s)
{
    char c;
    vector<bool> mark(26,false);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            mark[s[i]-'a']=true;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            mark[s[i]-'A']=true;
        }
        else{
            continue;
        }
    }
    for(int i=0;i<=25;i++)
    {
        if(mark[i]==false)
        {
           c=i+97;
           cout<<c<<" ";
        }
    }
}
int main()
{
    string s;
    cout<<"Enter any string"<<endl;
    getline(cin,s);
    //Function to check is string is Pangram or not
    if(checkPangram(s)==true)
    {
        cout<<"Given String is Pangram"<<endl;
    }
    else{
        cout<<"Given String is  not Pangram"<<endl;
    }
    Check if a String can be converted to Pangram in K changes
    if(testChanges(s)==true)
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
//    Missing characters to make a string Pangram
    missingChar(s);
    return 0;
}
