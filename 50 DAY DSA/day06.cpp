// to find union and intersection of two array
#include <iostream>
using namespace std;

int main()
{
    int a[50], b[50], un[100], in[50];
    int n, m, i, j;
    int x=0, y=0;

    cout << "enter no. of element in first array:-";
    cin >> n;
    cout << "enter element of array one by one:-";
    for (i=0; i<n; i++)
    {
        cin >>a[i];
    }

    cout << "enter no. of element in second array:-";
    cin >> m;
    cout << "enter element of array one by one:-";
    for (i=0; i<m; i++)
    {
        cin >>b[i];
    }

    // for union
    for (i=0; i<n; i++)
    {
       for(j=0; j<y; j++)
       {
            if(a[i]==un[j]) break;
       }
       if(j>=y)
       {
            un[y]=a[i];
            y++;
       }
    }
    for (i=0; i<m; i++)
    {
        for (j=0; j<y; j++)
        {
            if (un[j]==b[i]) break;
        }
        if (j>=y)
        {
            un[y]=b[i];
            y++;
        }
    }

    // for intersection
    for (i=0; i<n; i++)
    {
        for (j=0; j<x; j++)
        {
            if (in[j]==a[i]) break;
        }
        if (j>=x)
        {
            for (j=0; j<m; j++)
            {
                if (a[i]==b[j])
                {
                    in[x]=a[i];
                    x++;
                    break;
                }
            }
        }
    }

    cout <<"Union of arrays:-"<<endl;
    for (i=0; i<y; i++)
    {
        cout <<un[i]<<" ";
    }

    cout <<"Intersection of arrays:-"<<endl;
    for (i = 0; i < x; i++)
    {
        cout <<in[i]<<" ";
    }
    return 0;
}