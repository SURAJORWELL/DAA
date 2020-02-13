        #include<iostream>
       // #define infinity 1000
        using namespace std;

        int graph[20][20],tree[20],n;

        class spanning
        {
        public:
            void getdata()
            {
                cout<<"Enter the number of nodes"<<endl;
                cin>>n;
                cout<<"Enter the cost adjacency matrix"<<endl;
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cin>>graph[i][j];
                    }
                }
            }

            void display()
            {
                cout<<"The cost adjacency matrix is"<<endl;
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<graph[i][j]<<"   ";
                    }
                    cout<<endl;
                }
            }

        void prims()
         {
           int total_cost=0,v1,v2;
           for(int p=0;p<n;p++)
           {
                tree[p]=0;
                tree[0]=1;
                cout<<"v1 and v2 minimum distance"<<endl;
              for(int k=1;k<n;k++)
              {
                    int infinity=1000;
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(graph[i][j] && ((tree[i] && !tree[j]) || (!tree[i] && tree[j])))
                        {
                            if(graph[i][j]<infinity)
                            {
                                infinity=graph[i][j];
                                v1=i;
                                v2=j;
                            }
                        }
                    }
                }

                cout<<endl<<v1<<"-->"<<v2<<" =        "<<infinity;
                tree[v1]=1;
                tree[v2]=1;
                total_cost=total_cost+infinity;
            }


                        cout<<endl<<"minimal cost of the spanning tree is "<< total_cost<<endl;
                        break;
            }
            }

        };

        int main()
        {
            spanning s;
            s.getdata();
            s.display();
            s.prims();
        }
