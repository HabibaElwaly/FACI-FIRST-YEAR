# ==========================================
# FCAI-CU - First Year Programming Labs
# C++ Solutions Sheet
# ==========================================

# ------------------------------------------
# Problem A: Children and Candies (ABC Edit) AtCoder abc043_a
# ------------------------------------------
#include <iostream>
using namespace std ;

int main ()
{
    int N ;
    cin >> N ;
    int num_of_candies = 0 ;
     
    for ( int i = 1 ; i <= N ; i++ )
    {
        num_of_candies += i ;
    }
     
    cout << num_of_candies ;

   return 0 ; 
   
}


# ------------------------------------------
# Problem B: qwerty AtCoder abc218_b
# ------------------------------------------
#include <iostream>
using namespace std ;

int main ()
{
    int P ;
     
    for ( int i = 1 ; i <= 26 ; i++ )
    {
        cin >> P ;
        char letter = 'a' + ( P - 1 ) ;
        cout << letter ;
    }
     
   return 0 ; 
   
}


# ------------------------------------------
# Problem C: George and Accommodation CodeForces 467A
# ------------------------------------------
#include <iostream>
using namespace std ;

int main ()
{
    int n ;
    cin >> n ;
    int count = 0 ;
     
    for ( int i = 1 ; i <= n ; i++ )
    {
        int pi , qi ;
        cin >> pi >> qi ;
        if ( (qi - pi) >= 2 )
        {
         count ++ ;   
        } 
         
    }
     
     cout << count ;   
     
   return 0 ; 
   
}


# ------------------------------------------
# Problem D: Bit++ CodeForces 282A
# ------------------------------------------
#include <iostream>
using namespace std ;

int main ()
{
    int n ;
    cin >> n ;
    int X = 0 ;
     
    for ( int i = 1 ; i <= n ; i++ ) 
    {
        string s ;
        cin >> s ;
         
        if ( s == "++X" || s == "X++" )
        {
            X++ ;
        }
         
        else 
        {
            X-- ;
        }
    }
     
     cout << X ;   
     
   return 0 ; 
   
}


# ------------------------------------------
# Problem E: Team CodeForces 231A
# ------------------------------------------
#include <iostream>
using namespace std ;

int main ()
{
    int n ;
    cin >> n ;
    int  num_of_problems = 0 ;
     
    for ( int i = 1 ; i <= n ; i++ ) 
    {
        int x , y , z ;
        cin >> x >> y >> z ;
         
        if ( (x + y + z) >= 2 )
        {
            num_of_problems++ ; 
        }
    }
     
    cout << num_of_problems ; 
     
   return 0 ; 
   
}


# ------------------------------------------
# Problem F: Bear and Big Brother CodeForces 791A
# ------------------------------------------
#include <iostream>
using namespace std ;

int main ()
{
    int a , b ;
    cin >> a >> b ;
    int num_of_years = 0 ;
     
    while ( a <= b ) 
    {
        a = a*3 ;
        b = b*2 ;
        num_of_years++ ;
    }
     
    cout << num_of_years ; 
     
   return 0 ; 
   
}


# ------------------------------------------
# Problem G: Wrong Subtraction CodeForces 977A
# ------------------------------------------
#include <iostream>
using namespace std ;

int main ()
{
    int n , k ; 
    cin >> n >> k ;
     
    for ( int i = 1 ; i <= k ; i ++ )
    {
        if ( n % 10 == 0 )
        {
            n = n / 10 ;
        }
        else
        {
            n = n - 1 ;
        }
    }
     
    cout << n ;
     
    return 0;
     
}


# ------------------------------------------
# Problem H: Beautiful Matrix CodeForces 263A
# ------------------------------------------
#include <iostream>
using namespace std ;

int main ()
{
    int x , row , col ; 
     
    for ( int i = 1 ; i <= 5 ; i ++  )
    {
        for ( int j = 1 ; j <= 5 ; j ++ )
        {
            cin >> x ;
             
            if ( x == 1 )
            {
                row = i ;
                col = j ;
            }
        }
    }
     
    int moves = 0 ;
     
    while ( row > 3 ) { row-- ; moves++ ; }
    while ( row < 3 ) { row++ ; moves++ ; }
    while ( col > 3 ) { col-- ; moves++ ; }
    while ( col < 3 ) { col++ ; moves++ ; }
     
    cout << moves ;
     
    return 0;
     
}


# ------------------------------------------
# Problem I: Vanya and Cubes CodeForces 492A
# ------------------------------------------
#include <iostream>
using namespace std ;

int main ()
{
    int n ; 
    cin >> n ;
     
    int current = 0 ;
    int total = 0 ;
    int height = 0 ;
     
    for ( int i = 1 ; i <= n ; i ++ )
    {
        current += i ;
         
        if ( total + current <= n )
        {
            total += current ;
            height = i ;
        }
        else 
        {
            break ;
        }
    }
     
     
    cout << height ;
     
    return 0;
     
}


# ------------------------------------------
# Problem J: Taxi CodeForces 158B
# ------------------------------------------
#include <iostream>
using namespace std ;

int main ()
{
    int n ;
    cin >> n ;

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    for (int i = 0; i < n; i++) 
    {
        int s ;
        cin >> s ;
         
        if (s == 4) c4++;
        else if (s == 3) c3++;
        else if (s == 2) c2++;
        else if (s == 1) c1++;
    }

    int taxis = 0;
    taxis += c4;

    while (c3 > 0) { taxis++; c3--; if (c1 > 0) c1--; }
    taxis += c2 / 2; if (c2 % 2 != 0) { taxis++; if (c1 >= 2) c1 -= 2; else if (c1 == 1) c1 -= 1; }
    while (c1 > 0) { taxis++; c1 -= 4; }

    cout << taxis << endl;
     
    return 0 ;
     
}


# ------------------------------------------
# Problem K: Lucky Division CodeForces 122A
# ------------------------------------------
#include <iostream>
using namespace std ;

int main() 
{
    int n ;
    cin >> n ;
     
    for (int lucky : {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777}) 
    {
        if (n % lucky == 0) 
        {
            cout << "YES" ;
          return 0;
        }
    }
     
    cout << "NO" ; 
    return 0;
}


# ------------------------------------------
# Problem L: The Secret Number CodeForces 2132B
# ------------------------------------------
#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t > 0)
  {
    long long n;
    cin >> n;
    
    int count = 0;
    long long p = 1000000000000000000LL; 
    
    for (int i = 0; i < 18; i++) 
    {
      if (n % (p + 1) == 0)
      {
        count++;
      }
      p = p / 10;
    }

    cout << count;
    p = 1000000000000000000LL;
    for (int i = 0; i < 18; i++)
    {
      if (n % (p + 1) == 0)
      {
        cout << " " << n / (p + 1);
      }
      p = p / 10;
    }
    
    cout << "\n";
    t--;
  }
  return 0;
}
