#include <bits/stdc++.h>
using namespace std;


// bits
#define bit(x,i) (x&(1<<i))  //select the bit of position i of x
#define lbit(x) ((x)&((x)^((x)-1))) //get the lowest bit of x
#define hbit(msb,n) asm("bsrl %1,%0" : "=r"(msb) : "r"(n)) //get the highest bit of x

// bounds
#define IN(i,l,r) (l<i&&i<r)
#define LINR(i,l,r) (l<=i&&i<=r)
#define LIN(i,l,r) (l<=i&&i<r)
#define INR(i,l,r) (l<i&&i<=r)

// data types
#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define us unsigned short

// loops
#define F(i,L,R) for (int i = L; i < R; i++)
#define FE(i,L,R) for (int i = L; i <= R; i++)
#define FF(i,L,R) for (int i = L; i > R; i--)
#define FFE(i,L,R) for (int i = L; i >= R; i--)

#define ALL(c) (c).begin(),(c).end() 
#define PRESENT(c,x) ((c).find(x) != (c).end()) 
#define CPRESENT(c,x) (find(ALL(c),x) != (c).end()) 

//for vectors
#define pb push_back
typedef int elem_t;
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 

#define PI 3.1415926535897932384626

// directions
const int dirs[4][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
const int ddirs[8][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}, {1,1}, {1,-1}, {-1,1}, {-1,-1}};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}