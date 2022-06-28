#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bt[20],p[20],pr[20],tat[20],wt[20],i,j,n,total=0,pos,temp,avg_wt,avg_tat;

    cout<<"enter the number of processes :"<<endl;
    cin>>n;
    p[0]=0;
    cout<<"enter the brust time and priority :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"p["<<i+1<<"]"<<endl;
        cout<<"brust time :"<<endl;
        cin>>bt[i];
        cout<<"enter the priority :"<<endl;
        cin>>pr[i];
        p[i]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        pos=i;
        for(int j=pos+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
        swap(pr[i],pr[pos]);
        swap(bt[i],bt[pos]);
        swap(p[i],p[pos]);
    }
    wt[0]=0;
    for(int i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
        total+=wt[i];
    }
    avg_wt=total/n;
    total=0;

    cout<<"Process\tBrust time\tWaiting time\tTurnaround time"<<endl;

    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        total+=tat[i];
        cout<<p[i]<<"  \t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
    }

    avg_tat=total/n;
    cout<<"average waiting time :"<<avg_wt<<endl;
    cout<<"average turn around time :"<<avg_tat<<endl;

    return 0;
}