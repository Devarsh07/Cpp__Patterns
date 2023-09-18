// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=0;
//     while(i<n)
//     {
//         int j=0;
//         while(j<n)
//         {
//             cout<<"* ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<i;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<j<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=n;
//         while(j>0)
//         {
//             cout<<j<<" ";
//             j--;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,i=1;
//     cin>>n;
//     int count=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<count<<" ";
//             count=count+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,i=1;
//     cin>>n;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             cout<<"* ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//         return 0;
// }

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,row=1;
//     cin>>n;
//     while(row<=n)
//     {
//         int col=1;
//         while(col<=row)
//         {
//             cout<<row<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//         return 0;
// }

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,row=1;
//     int count=1;
//     cin>>n;
//     while(row<=n)
//     {
//         int col=1;
//         while(col<=row)
//         {
//             cout<<count<<" ";
//             count++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,row=1;
//     int count=1;
//     cin>>n;
//     while(row<=n)
//     {
//         int col=1;
//         count=row;
//         while(col<=row)
//         {
//             cout<<count<<" ";
//             count++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,i=1;
//     cin>>n;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             cout<<i+j-1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//         return 0;
// }

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,row=1,value=1;
//     cin>>n;
//     while(row<=n)
//     {
//         int col=1;
//         value=row;
//         while(col<=row)
//         {
//             cout<<value<<" ";
//             value--;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, row = 1;
//     cin >> n;
//     while (row <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char ch = 'A' + row - 1;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         row++;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,row=1;
//     cin>>n;
//     while(row<=n)
//     {
//         int col=1;
//         while(col<=n)
//         {
//             char ch='A'+col-1;
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,row=1,value;
//     cin>>n;
//     char ch='A';
//     while(row<=n)
//     {
//         int col=1;
//         while(col<=n)
//         {
//             cout<<ch<<" ";
//             ch=ch+1;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,row=1,value;
//     cin>>n;
//     char ch='A';
//     while(row<=n)
//     {
//         ch='A'+row-1;
//         int col=1;
//         while(col<=n)
//         {
//             cout<<ch<<" ";
//             ch=ch+1;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

//OR

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,row=1;
//     cin>>n;
//     while(row<=n)
//     {
//         int col=1;
//         while(col<=n)
//         {
//             char ch='A'+row+col-2;
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,row=1;
//     cin>>n;
//     while(row<=n)
//     {
//         int col=1;
//         while(col<=row)
//         {
//             char ch='A'+row-1;
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,row=1;
//     int count=0;
//     cin>>n;
//     while(row<=n)
//     {
//         int col=1;
//         while(col<=row)
//         {
//             char ch='A'+count;
//             cout<<ch<<" ";
//             count++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

//OR

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,row=1;
//     cin>>n;
//     while(row<=n)
//     {
//         int col=1;
//         while(col<=row)
//         {
//             char ch='A'+row+col-2;
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,row=1;
//     cin>>n;
//     int start;
//     while(row<=n)
//     {
//         int col=1;
//         char start='A'+n-row;
//         while(col<=row)
//         {
//             cout<<start<<" ";
//             start=start+1;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,row=1;
//     cin>>n;
//     while(row<=n)
//     {
//         int col=1;
//         while(col<-n)
//         {
//             char start='A'+
//         }
//     }
// }



// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,row=1;
//     cin>>n;
//     while(row<=n)
//     {
//         int col=1;
//         while(col<=n-row)
//         {
//             cout<<" ";
//             col++;
//         }
//         int k=1;
//         while(k<=row)
//         {
//             cout<<"*";
//             k++;
//         }
//         cout<<endl;
//         row++;
//     }
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,row=0;
//     cin>>n;
//     while(row<=n)
//     {
//         int col=1; 
//         while(col<=n-row)
//         {
//             cout<<"*"<<" ";
//             col++;
//         }
//         int i=0;
//         while(i<=row)
//         {
//             cout<<" ";
//             i++;
//         }
//         cout<<endl;
//         row++;

//     }
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,row=1;
//     cin>>n;
//     int k=0;
//     while(row<=n)
//     {
//         int col=1;
//         while(col<=row-1)
//         {
//             cout<<" ";
//             col++;
//         }
//         int i=1;
//         while(i<=n-k)
//         {
//             cout<<"*";
//             i++;
//         }
//         k++;
//         cout<<endl;
//         row++;
//     }
// }



#include<iostream>
using namespace std;
int main ()
{
    int n,row=1;
    cin>>n;
    while(row<=n)
    {
        int col=1;
        while(col<=row-1)
        {
            cout<<" ";
            col++;
        }
        int i=1;
        while(i<=n-row+1)
        {
            cout<<row;
            i++;
        }
        cout<<endl;
        row++;
    }
}



