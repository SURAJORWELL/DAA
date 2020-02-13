    #include<iostream>
    using namespace std;


            int knapsack(int w, int wgt[], int profit[], int n)
            {
                if(w==0 || n==0)
                    return 0;

              if(wgt[n-1]>w)
                    return knapsack(w,wgt,profit,n-1);
              else
                    return max(profit[n-1] + knapsack(w-wgt[n-1] ,wgt,profit,n-1), knapsack(w,wgt,profit,n-1));
              }


      int max(int a ,int b)
      {
          if(a>b)
            return a;
          else
            return b;
      }



    int main()
    {
        int wgt[20],profit[20],w,n,i;
        cout<<"Enter how many object"<<endl;
        cin>>n;
         cout<<"Enter weight of each object" <<endl;
         for(i=0;i<n;i++)
         {
             cin>>wgt[i];
         }
         cout<<"Enter profit of each object"<<endl;
         for(i=0;i<n;i++)
         {
             cin>>profit[i];
         }
        cout<<"Enter the weight of the knapsack"<<endl;
        cin>>w;

         cout<<"the profit is"<<knapsack(w,wgt,profit,n );
         return 0;
     }
