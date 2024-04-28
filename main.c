#include <stdio.h>
#include <stdlib.h>

//Rajendran Shabilojan
//ITT-2018-2019-080

int firstday(int year){
    int day;
    day=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
    //for find the starting day of a week
    return day;
}
int main(){
int year,month,day,days_in_month,week_day=0,starting_day=0;
//define the data type

system("color 3F");
//for the output background

printf("\nEnter the year for the calender....\n");
//get the year from the user

scanf("%d",&year);
//scan the input and put into "year"

char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
//using array for months names

int monthday[]={31,28,31,30,31,30,31,31,30,31,30,31};
//using array for months days numbers

if((year%4==0&&year%100!=0||year%400==0))
    //find the year was leap or not

        monthday[1]=29;
        // if the year was leap for index-1(february) gets 29 days

starting_day=firstday(year);
//using this function for find the first day of the year

for(month=0;month<12;month++)
    //using this loop print the months
    {
    days_in_month=monthday[month];

    printf("\n\n----------------------%s-----------------------\n\n",months[month]);
    //print months names

    printf("\n   SUN  MON TUE  WED  THU  FRI  SAT\n");
    //print the week days

    for(week_day=0; week_day<starting_day;week_day++)
    //using this loop print the stating day for each month
    {
        printf("     ");
    }
    for(day=1;day<=days_in_month;day++)
    //using this loop print the dates
    {
        printf("%5d",day);
        //make a space between 2 days

        if(++week_day>6){
            printf("\n");
            week_day=0;
            }
        starting_day=week_day;

    }


}

printf("\n ...................................THANK YOU...........................................\n");
}
