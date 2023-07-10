#include<bits/stdc++.h>

using namespace std;
/*bool canAttendMeetings(vector<int>intervals) {
        sort(intervals.begin(), intervals.end(), [](const Interval& i1, const Interval& i2) -> bool {
            return i1.start < i2.start;
        });
        
        for (size_t i = 1; i < intervals.size(); i++) {
            if (intervals[i - 1].end > intervals[i].start) {
                return false;
            }
        }
        
        return true;
    }

int  main(){

     int n;
     cout<<"Enter size of the array?"<<endl;
     cin>>n;
     vector<int>v(n);
     cout<<"Enter element of the array?"<<endl;
     for(int i=0;i<n;i++)
     cin>>v[i];
     if(canAttendMeetings(v))
     cout<<"true"<<endl;
     else
     cout<<"false";*/
     int fac=0;
     int fact(int n){
        if(n%10==n)
         return n;
         if(n%10==0)
         fac+=1;

        return fact(n/10);
     }


int main(){

        int n =4325;
        int digit= (int)(log10(n))+1;
         int ans=fact(n);
          cout<<ans<<endl;

    return 0;

}