#include <bits/stdc++.h>
using namespace std;

// Function to find the waiting time for all processes
int waitingtime(int p[], int n,int bt[], int wt[])
{
  wt[0] = 0;
   for (int i = 1; i < n ; i++ )
      wt[i] = bt[i-1] + wt[i-1] ;
 return 0;
}
int turnaroundtime( int p[], int n,int bt[], int wt[], int tat[])
{
   int i;
   for ( i = 0; i < n ; i++)
   tat[i] = bt[i] + wt[i];
   return 0;
}
int avgtime( int p[], int n, int bt[])
{
   int wt[n], tat[n], total_wt = 0, total_tat = 0;
   waitingtime(p, n, bt, wt);
   turnaroundtime(p, n, bt, wt, tat);
   printf("Processes  Burst   Waiting Turn around \n");
   for (int i=0; i<n; i++)
   {
      total_wt = total_wt + wt[i];
      total_tat = total_tat + tat[i];
      printf(" %d\t  %d\t\t %d \t%d\n", i+1, bt[i], wt[i], tat[i]);
   }
   printf("Average waiting time = %f\n", (float)total_wt / (float)n);
   printf("Average turn around time = %f\n", (float)total_tat / (float)n);
   return 0;
}
// main function
int main() {
   int p[] = { 1, 2, 3};
   int n = sizeof p / sizeof p[0];
   int bt[] = {5, 8, 12};
   avgtime(p, n, bt);
   return 0;
}
