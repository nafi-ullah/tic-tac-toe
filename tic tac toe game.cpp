#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[3][3];
	int row, col,p,i,r1=0,r2=0,r3=0,c1=0,c2=0,c3=0,d1=0,d2=0,x1=0,o1=0;
	char p1[10],p2[10];
	cout<<"Enter first players name:"; cin>>p1;
	cout<<"Enter second players name:"; cin>>p2;

	cout<<"You have these places : 1 2 3 4 5 6 7 8 9"<<endl;



	for(row=0,i=1; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            arr[row][col]=i;
            i++;
        }
    }
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            cout<<arr[row][col]<<" ";
            if(col==0 || col==1)
            {
                cout<<"| ";
            }
        }
        cout<<endl;
        if(row==0 || row==1)
        {
            cout<<"----------"<<endl;
        }
    }

int t;
t=0;
while(1){
    //First player
    cout<<p1<<"\'s turn for X :";
    cin>>p;

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            if(p==arr[row][col])
            {
                arr[row][col]=88;
                cout<<"X ";
            }
            else if(arr[row][col]==88)
            {
                cout<<"X ";
            }
            else if(arr[row][col]==79)
            {
                cout<<"O ";
            }
            else
            {
                cout<<"  ";
            }

            if(col==0 || col==1)
            {
                cout<<"| ";
            }
        }
        cout<<endl;
        if(row==0 || row==1)
        {
            cout<<"----------"<<endl;
        }
    }
    //calculation
    r1=0,r2=0,r3=0,c1=0,c2=0,c3=0,d1=0,d2=0,x1=0,o1=0;
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            if(row==0)
            {
                r1= r1+ arr[row][col];
                if(r1==264)
                {
                    x1= 1;
                }
                else if(r1==237)
                {
                    o1= 1;
                }
            }
            else if(row==1)
            {
                r2= r2 + arr[row][col];
                if(r2==264)
                {
                    x1= 1;
                }
                else if(r2==237)
                {
                    o1= 1;
                }
            }
            else if(row==2)
            {
                r3= r3 + arr[row][col];
                if(r3==264)
                {
                    x1= 1;
                }
                else if(r3==237)
                {
                    o1= 1;
                }
            }
            if(col==0)
            {
                c1= c1 + arr[row][col];
                if(c1==264)
                {
                    x1= 1;
                }
                else if(c1==237)
                {
                    o1= 1;
                }
            }
            else if(col==1)
            {
                c2= c2 + arr[row][col];
                if(c2==264)
                {
                    x1= 1;
                }
                else if(c2==237)
                {
                    o1= 1;
                }
            }
            else if(col==2)
            {
                c3= c3 + arr[row][col];
                if(c3==264)
                {
                    x1= 1;
                }
                else if(c3==237)
                {
                    o1= 1;
                }
            }
            if(row==col)
            {
                d1= d1 + arr[row][col];
                if(d1==264)
                {
                    x1= 1;
                }
                else if(d1==237)
                {
                    o1= 1;
                }
            }
            if(row+col==2)
            {
                d2= d2 + arr[row][col];

                if(d2==264)
                {
                    x1= 1;
                }
                else if(d2==237)
                {
                    o1= 1;
                }
            }
        }
    }
    //cout<<r1<<" "<<r2<<" "<<r3<<" "<<c1<<" "<<c2<<" "<<c3<<" "<<d1<<" "<<d2;// nnnnnnnnjjjjjjjjjjjjjjmmmmmmm
    //calculation finieshed
    t++;
    if(t==9 || x1==1 || o1==1)
    {
        break;
    }



    // 2nd player
    cout<<p2<<"\'s turn for O :";
    cin>>p;

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            if(p==arr[row][col])
            {
                arr[row][col]=79;
                cout<<"O ";
            }
            else if(arr[row][col]==88)
            {
                cout<<"X ";
            }
            else if(arr[row][col]==79)
            {
                cout<<"O ";
            }
            else
            {
                cout<<"  ";
            }

            if(col==0 || col==1)
            {
                cout<<"| ";
            }
        }
        cout<<endl;
        if(row==0 || row==1)
        {
            cout<<"----------"<<endl;
        }
    }

    //calculation
    r1=0,r2=0,r3=0,c1=0,c2=0,c3=0,d1=0,d2=0,x1=0,o1=0;
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            if(row==0)
            {
                r1= r1+ arr[row][col];
                if(r1==264)
                {
                    x1= 1;
                }
                else if(r1==237)
                {
                    o1= 1;
                }
            }
            else if(row==1)
            {
                r2= r2 + arr[row][col];
                if(r2==264)
                {
                    x1= 1;
                }
                else if(r2==237)
                {
                    o1= 1;
                }
            }
            else if(row==2)
            {
                r3= r3 + arr[row][col];
                if(r3==264)
                {
                    x1= 1;
                }
                else if(r3==237)
                {
                    o1= 1;
                }
            }
            if(col==0)
            {
                c1= c1 + arr[row][col];
                if(c1==264)
                {
                    x1= 1;
                }
                else if(c1==237)
                {
                    o1= 1;
                }
            }
            else if(col==1)
            {
                c2= c2 + arr[row][col];
                if(c2==264)
                {
                    x1= 1;
                }
                else if(c2==237)
                {
                    o1= 1;
                }
            }
            else if(col==2)
            {
                c3= c3 + arr[row][col];
                if(c3==264)
                {
                    x1= 1;
                }
                else if(c3==237)
                {
                    o1= 1;
                }
            }
            if(row==col)
            {
                d1= d1 + arr[row][col];
                if(d1==264)
                {
                    x1= 1;
                }
                else if(d1==237)
                {
                    o1= 1;
                }
            }
            if(row+col==2)
            {
                d2= d2 + arr[row][col];

                if(d2==264)
                {
                    x1= 1;
                }
                else if(d2==237)
                {
                    o1= 1;
                }
            }
        }
    }
    //cout<<r1<<" "<<r2<<" "<<r3<<" "<<c1<<" "<<c2<<" "<<c3<<" "<<d1<<" "<<d2;// nnnnnnnnjjjjjjjjjjjjjjmmmmmmm
    //calculation finished
    t++;
    if(t==9 || x1==1 || o1==1)
    {
        break;
    }

}
    //result
    cout<<endl;
        if(x1==1)
        {
            cout<<"=========  "<<p1<<" wins"<<"  =========="<<endl;
        }
        else if(o1==1)
        {
            cout<<"=========  "<<p2<<" wins"<<"  =========="<<endl;
        }
        else
        {
            cout<<"=========  "<<"Match draw"<<"  =========="<<endl;
        }



    return 0;
}
