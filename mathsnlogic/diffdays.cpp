#include<bits/stdc++.h>

using namespace std;

    bool isLeap(int year){
        if(year%400==0|| year%100!=0 && year%4==0){
            return true;
        }
        return false;
    }
    
    int monthDays(int month,int year){
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
            return 31;
        }
        if(month==2 && isLeap(year)){return 29;}
        if(month==2 && !isLeap(year)){return 28;}
        return 30;
    }
        
    int daysBetweenDates(string date1, string date2) {
        //difference in year*360+month*30+date- wrong and very simplistic ;
        //so need to split the string first
        int year1  = stoi(date1.substr(0,4));
        int year2  = stoi(date2.substr(0,4));
        int month1 = stoi(date1.substr(5,2));
        int month2 = stoi(date2.substr(5,2));
        int day1   = stoi(date1.substr(8,2));
        int day2   = stoi(date2.substr(8,2));
        int numDays1=0,numDays2=0;
        for(int i=1900;i<year1;i++){
            numDays1 += (isLeap(i) ? 366 : 365);
        }
        for(int i=1900;i<year2;i++){
            numDays2 += (isLeap(i) ? 366 : 365);
        }
        for(int i=1;i<month1;i++){numDays1 += monthDays(i,year1);}
        for(int i=1;i<month2;i++){numDays2 += monthDays(i,year2);}
        
        int ans = abs((numDays1+day1)-(numDays2+day2));
        
        return ans;
        
    }

int main(){
    string date1 = "2019-06-29", date2 = "2019-06-30";
    int ans = daysBetweenDates(date1,date2);
    cout<<ans;
}