#include <bits/stdc++.h>
using namespace std;

void printMaxActivities(int s[], int f[], int n)
{
	int i, j, c;
	cout <<"List of selected activities:  "<< endl;
	i = 1,c=1;
	cout <<" "<< i;
	for (j = 1; j <= n; j++)
	{
	if (s[j] >= f[i])
        {
            cout <<" " << j;
            c++;
            i = j;
        }
	}
    cout<<"\nNo. of non-conflicting activities: "<<c<<endl;
}

int main()
{
    int n;
    cin>>n;
    int s[n],f[n];
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    for(int i=1;i<=n;i++){
        cin>>f[i];
    }
	printMaxActivities(s, f, n);
	return 0;
}

