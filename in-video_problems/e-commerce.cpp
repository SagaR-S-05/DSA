#include<bits/stdc++.h>
using namespace std;

int findTrend(int sales[3][7])
{
    int maxStreak=0;
    int streak=0;
    int trendingProduct = -1;

    for(int product=0;product<3;product++)
    {
        for(int daySales=1;daySales<=7;daySales++)
        {
            if(sales[product][daySales] > sales[product][daySales-1])
            {
                streak++;
            }
            else
            {
                streak=0;
            }
            if(streak>maxStreak)
            {
                maxStreak=streak;
                trendingProduct=product;
            }
        }
    }
    return trendingProduct;
}
int main()
{
    int sales[3][7]={{10,12,14,13,15,16,18},{5,6,7,8,6,7,10},{3,5,6,7,9,11,10}};
    cout<<findTrend(sales);
}
