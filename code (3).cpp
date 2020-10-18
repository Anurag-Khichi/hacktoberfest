#include<bits/stdc++.h>
using namespace std;
char Game(long long v,long long c, char s)
{
    if(c == 0 && v == 0)
    {
        if(s == 'A')
            return 'B';
        else
            return 'A';
    }
     if(c != 0 && v != 0)
    {
        if(s == 'A')
            return 'A';
        else
            return 'B';
    }
    if(c == 0)
        return 'D';
    if(s == 'A')
    {
        char First = 'z';
        if(v>0)
        {
            First = Game(v-1, c+1, 'B');
        }
        else
        {
            if(c%2 == 0)
                return 'B';
            else
                return 'A';
        }
        char Second = Game(v,c-1,'B');
        if(c == 0)
        return 'D';
        if(First == 'A' || Second == 'A')
            return 'A';
        else
            return 'B';
    }
    else
    {
        char First = 'z';
        if(v>0)
        {
            First = Game(v-1, c+1, 'A');
        }
        else
        {
            if(c%2 == 0)
                return 'A';
            else
                return 'B';
        }
        char Second = Game(v,c-1,'A');
        if(First == 'B' || Second == 'B')
            return 'B';
        else
            return 'A';
    }
}

int main()
{
    int t,n;
    string s;
    char dp[10000][10000];
    memset(dp, 'Z', sizeof(dp));
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        cin>>s;
        long long v = 0, c= 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                v++;
            else
                c++;
        }
        if(dp[v][c] == 'Z')
            cout<<Game(v,c,'A')<<endl;
        else
            
    }
    return 0;
}
