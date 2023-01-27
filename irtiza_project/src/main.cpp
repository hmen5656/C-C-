#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
// #include <vector>
// std::vector<int> maxSafeMAmps;
// int getMinOptimalTestNumbers(int maxDeliverableMAmps)
// {
//     float temp = 0;
//     int counter =0;
//     int coeff = 1;
//     int bat1 = 0, bat2=1;
//     if(maxDeliverableMAmps == 1)
//     {
//         // std::cout<<"------------"<<temp<<"-----------------" <<std::endl;
//         return 0;
//     }

//     while(bat1+coeff<maxDeliverableMAmps){
//             bat1 += coeff;
//             coeff*=2;
//             counter++;
//             // std::cout<<"Bat1: "<<bat1 <<" coeff: "<<coeff <<std::endl;
//     }
//     bat2 = bat1;
//     coeff = 1;
//     while(bat2+coeff<maxDeliverableMAmps){
//         bat2 += coeff;
//         coeff*=2;
//         counter++;
//         // std::cout<<"bat2: "<<bat2 <<" coeff: "<<coeff <<std::endl;
//     }

//     maxSafeMAmps.push_back(counter);
//    return counter;
// }

// int getMinOptimalTestNumbers(int maxDeliverableMAmps)
// {
//     if(maxDeliverableMAmps == 1)
//     {
//         // std::cout<<"------------"<<temp<<"-----------------" <<std::endl;
//         return 0;
//     }
//     if(maxDeliverableMAmps == 2)
//     {
//         // std::cout<<"------------"<<temp<<"-----------------" <<std::endl;
//         return 1;
//     }
// 	return (int)round((-1.+sqrt(1+8*maxDeliverableMAmps))/2.);
// }

// int getMinOptimalTestNumbers(int maxDeliverableMAmps)
// {
//     if (maxDeliverableMAmps == 1) {
//         return 0;
//     }
//     if (maxDeliverableMAmps == 2) {
//         return 1;
//     }
//     float test_counter = (-1 + sqrt(1 + 8 * maxDeliverableMAmps)) / 2.0;

//     int minRetries = 0;
//     int temp_test_counter = round(test_counter);
//     int new_test_counter = round(test_counter);
//     while (new_test_counter < maxDeliverableMAmps) {
//         new_test_counter += temp_test_counter;
//         temp_test_counter--;
//         minRetries++;
//     }
//     if (minRetries < ceil(test_counter))
//         return ceil(test_counter);
//     return minRetries;
// }


// bool isNumber(std::string& str)
// {
//     for (char const &c : str) {
       
//         // using the std::isdigit() function
//         if (std::isdigit(c) == 0)
//           return false;
//     }
//     return true;
// } 
// int main()
// {
//     std::string maxDeliverableMAmps;
//     int imaxDeliverableMAmps;
//     int inpurCounter = 0;
//     int a,i,count=0;
//     while (std::getline(std::cin,maxDeliverableMAmps)) {
//         if(!isNumber(maxDeliverableMAmps))
//             continue;
//         imaxDeliverableMAmps = stoi(maxDeliverableMAmps);
//         if( imaxDeliverableMAmps == 0)
//             break;

//         if(ceil(imaxDeliverableMAmps) > imaxDeliverableMAmps ){
//             continue;
//         }
//         if(imaxDeliverableMAmps> 4711 || imaxDeliverableMAmps < 1 )
//         {
//             continue;
//         }
//         else{
//             std::cout<<getMinOptimalTestNumbers(imaxDeliverableMAmps)<<std::endl;
//             inpurCounter++;
//         }
//         if(inpurCounter == 200 ){
//             break;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// typedef tuple<double, double, int> cart;

// void insertInto(cart n, deque<cart> &q, double var) {
//     auto cmp = [var](cart x) {
//         return get<1>(x) + get<0>(x) / var;
//     };
//     while (!q.empty() && cmp(n) < cmp(q.front())) {
//         q.pop_front();
//     }
//     q.push_front(n);
// }
// void takeInterval( vector<double> &P,int midIndex  ,vector<double> &opt, int index , deque<tuple<double, double, int>>  &queue , double var , double position ,double waitingEndPos)
// {
//         while (index != midIndex && P[index] >= position) { 
//             insertInto(make_tuple(P[index], opt[index], index), queue, var); 
//             ++index; \
//         } \
//         while (!queue.empty() && get<0>(queue.back()) > waitingEndPos) { 
//             queue.pop_back(); \
//         }
// }
// void setMin(int idx,double nans ,double& ans , int &ansi )
// {
//     if (nans < ans) 
//     { 
//         ans = nans; 
//         ansi = idx; 
//     }
// }
// int main() {
//     cin.sync_with_stdio(0); cin.tie(0);
// 	cin.exceptions(cin.failbit);
//     double l, a, b, t, r;
//     cin >> l >> a >> b >> t >> r;

//     int n;
//     cin >> n;

//     vector<double> P(n);
//     for(auto& a : P) 
//         cin >> a;

//     P.push_back(l+1e-10);
//     l += 2e-10;
//     reverse(P.begin(), P.end());
//     P.push_back(-(t * a + r * b + 1e-10));

//     vector<int> optNext((int)(P).size());
//     optNext[0] = -1;
//     vector<double> opt((int)(P).size());
//     deque<tuple<double, double, int>> waiting, sipping, finished;
//     int whas = 0, drhas = 0, dohas = 0;
//     for(int i = 1; i < (int)(P).size(); ++i) {
//         double pos = P[i];
//         // Pop away everything in the queues that are too far away

//         double waitingEndPos = pos + t * a;
//         double sippingEndPos = pos + t * a + r * b;
        
//         takeInterval(P,i,opt,whas, waiting, a, pos, waitingEndPos);
//         takeInterval(P,i,opt,drhas, sipping, b, waitingEndPos, sippingEndPos);
//         takeInterval(P,i,opt,dohas, finished, a, sippingEndPos, l);

//         double ans = 1e100;
//         int ansi = -2;
//         if (!waiting.empty()) {
//             double nans = (get<0>(waiting.back()) - pos) / a + get<1>(waiting.back());
//             setMin(get<2>(waiting.back()),nans,ans,ansi);
//         }
//         if (!sipping.empty()) {
//             double nans = t + (get<0>(sipping.back()) - pos - t * a) / b + get<1>(sipping.back()); 
//             setMin(get<2>(sipping.back()),nans,ans,ansi);
//         }
//         if (!finished.empty()) {
//             double nans = t + r + (get<0>(finished.back()) - pos - t * a - r * b) / a + get<1>(finished.back()); 
//             setMin(get<2>(finished.back()),nans,ans,ansi);
//         }
//         assert(ansi != -2);
//         optNext[i] = ansi;
//         opt[i] = ans;
//     }

//     vector<int> ret;
//     int at = optNext[(int)(P).size() - 1];
//     while (at != -1) {
//         ret.push_back((int)(P).size() - 2 - at);
//         at = optNext[at];
//     }
//     ret.pop_back();
//     cout <<(int)(ret).size() << endl;
//     for(int i = 0; i < (int)(ret).size(); ++i) {
//         if (i) cout << " ";
//         cout << ret[i];
//     }
// }


#include <iostream>
#include <algorithm>
#include <vector>

int main() {
double l, a, b, t, r;
std::cin >> l >> a >> b >> t >> r;
int n;
std::cin >> n;

std::vector<double> carts;
for (int i = 0; i < n; i++) {
    double x;
    std::cin >> x;
    carts.push_back(x);
}
carts.push_back(l);

// Create n+1 vector of pairs. This will represent the distance from arrival to departure.
std::vector<std::pair<double, int>> best(n + 1, std::make_pair(0, 0));
std::cout << carts[0]<< std::endl;

std::cout << "-------------------------------------------------------------" << std::endl;

for (int i = n - 1; i >= 0; i--) {
    best[i] = std::make_pair(best[i + 1].first + (carts[i + 1] - carts[i]) / a, i + 1);
    std::cout <<"Best["<<i<<"] : = " << best[i + 1].first << "+ ( " << carts[i + 1] << "- " << carts[i] << " )/ " << a << " = " << best[i].first << " " << best[i].second << std::endl;;
    int j = std::lower_bound(carts.begin(), carts.end(), carts[i] + a * t + b * r) - carts.begin();
    std::cout<<"Lower bound j= "<< j  << "---> "<< carts[i] << " + " << a << " * " << t << "+ " << b << " * " << r << " = " << carts[i] + a * t + b * r << std::endl;

    if (j <= n) {
        best[i] = std::min(best[i], std::make_pair(best[j].first + t + r + (carts[j] - carts[i] - a * t - b * r) / a, j));
        std::cout <<"< Best["<<i<<"] : = " << best[j].first << " + " << t << " + " << r << " + (" << carts[j]<< " - " << carts[i] << " - " << a << " * " << t << " - " << b << " * " << r << " )/ " << a << " = " << best[j].first + t + r + (carts[j] - carts[i] - a * t - b * r) / a << std::endl;
        std::cout << "Min( " << best[i].first << ", " << best[j].first + t + r + (carts[j] - carts[i] - a * t - b * r) / a << std::endl;
    }
    if (j - 1 > i && carts[j - 1] - carts[i] > a * t) {
        std::cout << j << " - 1 > " << i << " && " <<  carts[j - 1] << " - " << carts[i]  << " > " << a << " * " <<  t << " = " << carts[j - 1] - carts[i]  << " " << a * t << std::endl;
        best[i] = std::min(best[i], std::make_pair(best[j - 1].first + t + (carts[j - 1] - carts[i] - a * t) / b, j - 1));
        std::cout <<"> Best["<<i<<"] : = " << best[j-1].first << " + " << t << " + " <<"(" << carts[j-1]<< " - " << carts[i] << " - " << a << " * " << t <<  " )/" << b << " = " << best[j - 1].first + t + (carts[j - 1] - carts[i] - a * t) / b << std::endl;
    }
    std::cout << "-------------------------------------------------------------" << std::endl;
}

for(int i =0 ; i<n; i++)
    std::cout << best[i].first << " st and second " << best[i].second << std::endl;

std::vector<int> sol;
int at = 0;
while (at < n) {
    sol.push_back(at);
    at = best[at].second;
}

std::cout << sol.size() << std::endl;
for (int i = 0; i < sol.size(); i++) {
    std::cout << sol[i] << " ";
}
std::cout << std::endl;

return 0;
}



// #include <iostream>
// #include <cstdint>


// int main()
// {
//     int NumofTemperatures , NumofNegativeTemperatures = 0;
//     std::cin>>NumofTemperatures;
//     for(int i = 0;i<NumofTemperatures ;i++)
//     {
//         int givenTempreature;
//         std::cin>>givenTempreature ; 
//         if(givenTempreature < 0)
//             NumofNegativeTemperatures++;
//     }
//     std::cout <<NumofNegativeTemperatures;
//     return 0;
// }


// int main()
// {

//     unsigned int numberofTemperatures ;
//     std::cin >> numberofTemperatures;
//     int minusTemperatureCounter=0;
//     for(int i =0 ; i<numberofTemperatures;i++)
//     {
//         int tempreatureSample ;
//         std::cin>>tempreatureSample;
//         if(tempreatureSample<0)
//             minusTemperatureCounter++;
//     }
//     std::cout<<minusTemperatureCounter<<std::endl;
//     return 0;
// }