//全排列
#include<iostream>
using namespace std;

void swap(char &a,char &b)      //交换
{
    char tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void Perm(char list[],int k,int m)
{
    int i;
    if(k == m){
        for(i=0;i <= m;i++)
            cout << list[i] << " ";
    }
    else{
       for(i=k;i <= m;i++){
            swap(list[k],list[i]);
            Perm(list,k+1,m);
            swap(list[k],list[i]);
       } 
    }
}

int main()
{
    int i,n;
    char list[100];

    cin >> n;
    for(i=0;i < n;i++)
    {
        cin >> list[i];
    }
    Perm(list,0,n-1);
    cout << endl;

    return 0;
}
