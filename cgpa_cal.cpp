#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    float p=0,cgpa;
    cout<<"Enter total courses in this semester : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int c;
        float cg;
        cout<<"Enter your course credits  "<<i+1<<'\n';
        cin>>c;
        cout<<"Enter your course cgpa "<<i+1 <<'\n';
        cin>>cg;
        p=p+c*cg;
        a+=c;
    }
    cgpa=p/a;
    //cout<<"Your CGPA in this semester is " <<cgpa;
    printf("Your cgpa in this semester is: %.2f ",cgpa);
    return 0;
}
