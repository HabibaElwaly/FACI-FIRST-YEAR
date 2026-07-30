// ==========================================
// FCAI-CU - C++ Programming Labs
// Solutions Sheet
// ==========================================

// ------------------------------------------
// Problem A: Brick AtCoder abc186_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int N , W ;
    cin >> N >> W ;
    int X = N / W ;
    cout << X ;
     
    return 0;
}


// ------------------------------------------
// Problem B: Multiplication 1 AtCoder abc169_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int A , B ;
    cin >> A >> B ;
    cout << A * B ;
     
    return 0;
}


// ------------------------------------------
// Problem C: box AtCoder abc180_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int N , A , B ;
    cin >> N >> A >> B ;
    cout << N - A + B ;
     
    return 0;
}


// ------------------------------------------
// Problem D: Three Dice AtCoder abc202_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int a , b , c ;
    cin >> a >> b >> c ;
    cout << 3 * 7 - (a + b + c) ;
     
    return 0;
}


// ------------------------------------------
// Problem E: Discount Fare AtCoder abc113_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int X , Y ;
    cin >> X >> Y ;
    int x = X + Y / 2 ;
    cout << x ;
     
    return 0;
}


// ------------------------------------------
// Problem F: New Year AtCoder abc084_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int M ;
    cin >> M ;
    int x = (24 - M) + 24 ;
    cout << x ;
     
    return 0;
}


// ------------------------------------------
// Problem G: Blood Pressure AtCoder abc211_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    double A , B ;
    cin >> A >> B ;
    double C = (A - B) / 3 + B ;
    cout << C ;
     
    return 0;
}


// ------------------------------------------
// Problem H: kcal AtCoder abc205_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int A , B ;
    cin >> A >> B ;
    double x = A * B / 100.0 ;
    cout << x ;
     
    return 0;
}


// ------------------------------------------
// Problem I: Domino piling CodeForces 50A
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int M , N ;
    cin >> M >> N ;
    cout << (M * N) / 2 ;
     
    return 0;
}


// ------------------------------------------
// Problem J: Elephant CodeForces 617A
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int X ;
    cin >> X ;
    if (X % 5 == 0) 
    {
        cout << X / 5 ;
    }
    else
    {
        cout << X / 5 + 1 ;
    }
     
    return 0;
}


// ------------------------------------------
// Problem K: Wizards' Duel CodeForces 591A
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    double L , P , Q ;
    cin >> L >> P >> Q ;
    cout << P / (Q + P) * L ;
     
    return 0;
}


// ------------------------------------------
// Problem L: Hit the Lottery CodeForces 996A
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int count = 0 ;
     
    count += n / 100 ;
    n %= 100 ;
     
    count += n / 20 ;
    n %= 20 ;
     
    count += n / 10 ;
    n %= 10 ;
     
    count += n / 5 ;
    n %= 5 ;
     
    count += n / 1 ;
    n %= 1 ;
     
    cout << count ;
     
    return 0;
}


// ------------------------------------------
// Problem M: UOIAUAI AtCoder abc049_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    char c ;
    cin >> c ;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o') 
    {
        cout << "vowel" ; 
    }
    else 
    {
        cout << "consonant" ; 
    }
     
    return 0;
}


// ------------------------------------------
// Problem N: - +-x AtCoder abc137_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int A , B ;
    cin >> A >> B ;
    int x = A + B ;
    int y = A - B ;
    int z = A * B ;
     
    int largest_num = x ;
    if (y > largest_num)
    {
        largest_num = y ;
    }
    if (z > largest_num)
    {
        largest_num = z ;
    }
    cout << largest_num ;

    return 0;
}


// ------------------------------------------
// Problem O: Alloy AtCoder abc212_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int A , B ;
    cin >> A >> B ;
    if (A > 0 && B == 0)
    {
        cout << "Gold" ;
    }
    if (A == 0 && B > 0)
    {
        cout << "Silver" ;
    }
    if (A > 0 && B > 0)
    {
        cout << "Alloy" ;
    }
     
    return 0;
}


// ------------------------------------------
// Problem P: Watermelon CodeForces 4A
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int W ;
    cin >> W ;
    if (W > 2 && W % 2 == 0)
    {
        cout << "Yes" ;
    }
    else
    {
        cout << "No" ;
    }
     
    return 0;
}


// ------------------------------------------
// Problem Q: Theatre Square CodeForces 1A
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long x = (n + a - 1) / a ;
    long long y = (m + a - 1) / a ;
    cout << x * y ;
     
    return 0;
}


// ------------------------------------------
// Problem R: Palindromic Number AtCoder abc070_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int N ;
    cin >> N ; 
    int first_digit = N / 100 ;
    int last_digit = N % 10 ; 
     
    if (first_digit == last_digit) 
    {
        cout << "Yes" ;
    } 
    else 
    {
        cout << "No" ;
    }
     
    return 0;
}


// ------------------------------------------
// Problem S: Day of Takahashi AtCoder abc096_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int a , b ;
    cin >> a >> b ; 
    if (b >= a)
    {
        cout << a ;
    }
    else 
    {
        cout << a - 1 ;
    }
     
    return 0;
}


// ------------------------------------------
// Problem T: 500 Yen Coins AtCoder abc150_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int K , X ;
    cin >> K >> X ; 
    if (X <= 500 * K)
    {
        cout << "Yes" ;
    }
    else 
    {
        cout << "No" ;
    }
     
    return 0;
}


// ------------------------------------------
// Problem U: Conditional Statements HackerRank
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n ; 
     
    switch(n) 
    {
        case 1 : cout << "one" ; break ;
        case 2 : cout << "two" ; break ;
        case 3 : cout << "three" ; break ;
        case 4 : cout << "four" ; break ;
        case 5 : cout << "five" ; break ;
        case 6 : cout << "six" ; break ;
        case 7 : cout << "seven" ; break ;
        case 8 : cout << "eight" ; break ;
        case 9 : cout << "nine" ; break ;
        default: cout << "Greater than 9" ; break ;
    }
     
    return 0;
}


// ------------------------------------------
// Problem V: Very Very Primitive Game AtCoder abc190_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int A , B , C ;
    cin >> A >> B >> C ;
     
    if (A > B)
    {
        cout << "Takahashi" ;
    }
    else if (B > A)
    {
        cout << "Aoki" ;
    }
    else
    {
        if (C == 0)
        {
            cout << "Aoki" ;
        }
        else
        {
            cout << "Takahashi" ;
        }
    }
     
    return 0;
}


// ------------------------------------------
// Problem W: Even Odds CodeForces 318A
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    long long n , k ;
    cin >> n >> k ;
    long long count_odd = (n + 1) / 2 ;
     
    if (k <= count_odd)
    {
        cout << 2 * k - 1 ;
    }
    else
    {
        long long new_k = k - count_odd ;
        cout << 2 * new_k ;
    }
     
    return 0;
}


// ------------------------------------------
// Problem X: AtCoder Quiz 2 AtCoder abc219_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int X ;
    cin >> X ; 
     
    if (X >= 0 && X < 40)
    {
        cout << 40 - X ;
    }
    else if (X >= 40 && X < 70)
    {
        cout << 70 - X ;
    }
    else if (X >= 70 && X < 90)
    {
        cout << 90 - X ;
    }
    else if (X >= 90 && X <= 100)
    {
        cout << "expert" ;
    }
     
    return 0;
}


// ------------------------------------------
// Problem Y: Vanishing Pitch AtCoder abc191_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int V , T , S , D ;
    cin >> V >> T >> S >> D ;
    int start = V * T ;
    int end = V * S ;
     
    if (D >= start && D <= end)
    {
        cout << "No" ;
    }
    else
    {
        cout << "Yes" ;
    }
     
    return 0;
}


// ------------------------------------------
// Problem Z: Rainy Season AtCoder abc175_a
// ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s == "RRR") {
        cout << 3;
    } else if (s == "RRS" || s == "SRR") {
        cout << 2;
    } else if (s == "RSR" || s == "SSS") {
        if (s == "SSS") cout << 0;
        else cout << 1;
    } else {
        int max_r = 0, current_r = 0;
        for (char c : s) {
            if (c == 'R') {
                current_r++;
                max_r = max(max_r, current_r);
            } else {
                current_r = 0;
            }
        }
        cout << max_r;
    }
    return 0;
}
